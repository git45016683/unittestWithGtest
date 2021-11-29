#ifndef __CACL_H__
#define __CALC_H__

#include <string>
using namespace std;

#define PRIVATE_METHOD_TEST 0

class Calculate {
public:
    Calculate() {}
    ~Calculate() {}
    int calculate(int a, int b, string symbol);

private:
#if PRIVATE_METHOD_TEST
    FRIEND_TEST(addTest, privateINT);
#endif  // PRIVATE_METHOD_TEST
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    double div(int a, int b);
    bool isZero(int x);
};


#endif  // __CACL_H__
