/*
 * @Author: your name
 * @Date: 2020-02-29 15:33:09
 * @LastEditTime: 2020-03-01 16:16:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P170/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

template<class T>
void mySwap(T& a, T&b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}


// 实现通用的对数组进行排序的函数
template<class T>
void mySort(T arr[], int len)
{
    for (int i = 0;i < len;i++) {
        int _min = i;
        for (int j = i+1;j < len;j++) {
            if (arr[j] < arr[_min]) {
                _min = j;
            }
        }
        if (_min != i) {
            mySwap(arr[_min], arr[i]);
        }
    }
}


// 打印数组的模板
template<class T>
void printArray(T arr[], int len)
{
    for (int i = 0;i < len;i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

void test01()
{
    char charArr[] = "bcsdfae";
    int len = sizeof(charArr) / sizeof(char);
    mySort(charArr, len);
    printArray(charArr, len);
    
}

void test02()
{
    int intArr[] = {7, 5, 1, 3, 9, 2, 4};
    int len = sizeof(intArr) / sizeof(int);
    mySort(intArr, len);
    printArray(intArr, len);
}

int main(void)
{
    test01();
    test02();
    return 0;
}