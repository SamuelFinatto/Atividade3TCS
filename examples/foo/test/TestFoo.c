#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}


TEST(Foo, Payment_ValueZero_ReturnsOne)
{
  float value = 0;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_ValueGreaterThanLimit_ReturnsOne)
{
  float value = 100000;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_ValueAndStatusOK_ReturnsZero)
{
  float value = 2000;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(0,result);
}

TEST(Foo, Payment_WhenValueIsAStringAndStatusOK_ReturnsTwo)
{
  float value = 'H';
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(2,result);
}

TEST(Foo, Payment_ValueAndVIPOK_ReturnsZero)
{
  float value = 8000;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(0,result);
}

TEST(Foo, Payment_VIPValueNegative_ReturnsOne)
{
  float value = -2;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_VIPValueBigger_ReturnsOne)
{
  float value = 100000;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_WhenValueIsOkAndStatusEstudanteAposentado_ReturnsZero)
{
  char status[] = "estudante/aposentado";
  int result = payment(5000, status);
  TEST_ASSERT_EQUAL(0,result);
}

TEST(Foo, Payment_WhenValueIsNumberGreterThanTheLimitAndStatusEstudanteAposentado_ReturnsOne)
{
  float value = 100000;
  char status[] = "estudante/aposentado";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_WhenValueIsNegativeAndStatusEstudanteAposentado_ReturnsOne)
{
  float value = -1;
  char status[] = "estudante/aposentado";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}