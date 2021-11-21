#include <iostream>

#include "add.h"
#include "div.h"
#include "sub.h"
#include "mul.h"

int main()
{
    std::cout << "num1 + num2 = " << Add(10, 2) << std::endl;
    std::cout << "num1 - num2 = " << Sub(10, 2) << std::endl;
    std::cout << "num1 * num2 = " << Mul(10, 2) << std::endl;
    std::cout << "num1 / num2 = " << Div(10, 2) << std::endl;

    return 0;
}