#include "stdafx.h"
#include <iostream>
#include <functional>

void print_num(int i)
{
    std::cout << i << '\n';
}

void printAdded(int aVal, int bVal)
{
    std::cout << aVal + bVal;
}

void function1(std::function<void(int, int)> fun)
{
    fun(1, 1);
}

int main(int argc, const char * argv[])
{
    std::function<void()> f_display_31337 = std::bind(print_num, 31337);
    f_display_31337();

    std::function<void(int, int)> addSomething = std::bind(printAdded, 3, 4);
    function1(addSomething);

    return 0;
}