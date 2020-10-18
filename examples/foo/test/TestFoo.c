#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}


TEST(Foo, Payment_TestValueZero_ReturnsOne)
{
  float value = 0;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_TestValueAndStatusOK_ReturnsZero)
{
  float value = 2000;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(0,result);
}

TEST(Foo, Payment_TestWhenValueIsAStringAndStatusOK_ReturnsOne)
{
  float value = "H";
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_TestValueAndVIPOK_ReturnsZero)
{
  float value = 8000;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(0,result);
}

TEST(Foo, Payment_TestVIPValueNegative_ReturnsOne)
{
  float value = -2;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_TestVIPValueBigger_Returns1)
{
  float value = 100000;
  char status[20] = "VIP";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}