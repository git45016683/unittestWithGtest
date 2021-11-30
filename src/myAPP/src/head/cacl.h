#define private public
#ifndef __CACL_H__
#define __CALC_H__

#include <string>
using namespace std;

class Calculate {
public:
    Calculate() {}
    ~Calculate() {}
    int calculate(int a, int b, string symbol);

private:
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    double div(int a, int b);
    bool isZero(int x);
};
#endif  // __CACL_H__
