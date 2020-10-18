#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
  RUN_TEST_CASE(Foo, Payment_TestValueZero_ReturnsOne);
  RUN_TEST_CASE(Foo, Payment_TestValueAndStatusOK_ReturnsZero);
  RUN_TEST_CASE(Foo,Payment_TestWhenValueIsAStringAndStatusOK_ReturnsOne);
}