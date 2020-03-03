
# include <iostream>
# include <cstdio>
# include "MyArray.hpp"

using namespace std;

void test01()
{
    MyArray<int>arr1(5);
    MyArray<int>arr2(arr1);
    MyArray<int>arr3(100);
    arr3 = arr1;
}

int main(void)
{
    test01();
    return 0;
}