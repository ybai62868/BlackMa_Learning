
# include <iostream>
# include <cstdio>
# include "MyArray.hpp"

using namespace std;

void printArrary(MyArray<int>& arr)
{
    for ( int i = 0;i < arr.getSize();i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    // MyArray<int>arr1(5);
    // MyArray<int>arr2(arr1);
    // MyArray<int>arr3(100);
    // arr3 = arr1;
    MyArray<int>arr(5);
    for ( int i = 0;i < 5;i++ ) {
        arr.Push_Back(i);
    }
    printArrary(arr);
    cout << "arr的容量为 =" << arr.getCapacity() << endl;
    cout << "arr的大小为 =" << arr.getSize() << endl;
    for (int i = 0;i < 3;i++) {
        arr.Pop_Back();
    }
    printArrary(arr);
    cout << "arr的容量为 =" << arr.getCapacity() << endl;
    cout << "arr的大小为 =" << arr.getSize() << endl;
}

int main(void)
{
    test01();
    return 0;
}