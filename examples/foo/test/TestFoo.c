
#include "foo.h"
#include "unity.h"


#define SIZEARRAY 6

void setUp(void)
{
}

void tearDown(void)
{
}

void Payment_TestValueZero_ReturnsOne(void)
{
  int value = 0;
  char status[20] = "regular";

  int result = payment(value, status);

  TEST_ASSERT_EQUAL(1,result);
}