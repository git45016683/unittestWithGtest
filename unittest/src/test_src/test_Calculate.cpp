#include "test_Calculate.h"


TEST(addTest, normalINT)
{
    string operate = "+";
    Calculate cal;
    EXPECT_EQ(cal.calculate(6, 6, operate), 12);
}

#if PRIVATE_METHOD_TEST
TEST(addTest, privateINT)
{
    Calculate cal;
    EXPECT_EQ(cal.add(6, 6), 12);
}
#endif  // PRIVATE_METHOD_TEST
