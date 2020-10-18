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
  int value = 0;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}

TEST(Foo, Payment_TestValueAndStatusOK_ReturnsZero)
{
  int value = 2000;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(0,result);
}

