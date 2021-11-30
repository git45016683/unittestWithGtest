#include "gtest/gtest.h"

void callPY(int index)
{
    char l_acCommand[256];
    memset(l_acCommand, 0x00, 256);
    sprintf(l_acCommand, "./callPY.sh %d", index);
    system(l_acCommand);
}

int main(int argc, char *argv[])
{
    printf("hello GTEST\r\n");
    //callPY(1);
    testing::InitGoogleTest(&argc, argv);
    int iRet = RUN_ALL_TESTS();
    callPY(2);
    return iRet;
}
