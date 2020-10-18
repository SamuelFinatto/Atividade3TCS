#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
  RUN_TEST_CASE(Foo, Payment_ValueZero_ReturnsOne);
  RUN_TEST_CASE(Foo, Payment_ValueGreaterThanLimit_ReturnsOne);
  RUN_TEST_CASE(Foo,Payment_ValueAndStatusOK_ReturnsZero);
  RUN_TEST_CASE(Foo,Payment_WhenValueIsAStringAndStatusOK_ReturnsTwo);
  RUN_TEST_CASE(Foo,Payment_ValueAndVIPOK_ReturnsZero);
  RUN_TEST_CASE(Foo,Payment_VIPValueNegative_ReturnsOne);
  RUN_TEST_CASE(Foo,Payment_VIPValueBigger_ReturnsOne);
  RUN_TEST_CASE(Foo,Payment_WhenValueIsOkAndStatusEstudanteAposentado_ReturnsZero);
  RUN_TEST_CASE(Foo,Payment_WhenValueIsNumberGreterThanTheLimitAndStatusEstudanteAposentado_ReturnsOne);
  RUN_TEST_CASE(Foo,Payment_WhenValueIsNegativeAndStatusEstudanteAposentado_ReturnsOne);
}