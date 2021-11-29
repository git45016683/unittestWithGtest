#include "gtest/gtest.h"

int main(int argc, char *argv[])
{
    printf("hello GTEST\r\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
