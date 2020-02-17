/*
 * @Author: your name
 * @Date: 2020-02-17 18:50:16
 * @LastEditTime: 2020-02-17 18:50:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P114/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-17 18:50:16
 * @LastEditTime: 2020-02-17 18:50:16
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P114/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    int m_A; // 非静态成员变量
    static int m_B;  // 静态成员变量
    void func() {}; // 非静态成员函数
    static void func2() {}; // 静态成员函数
};
int Person::m_B;

void test01()
{
    Person p;
    //C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
    cout << "size of p = " << sizeof(p) << endl;
}

int main(void)
{
    test01();
    return 0;
}