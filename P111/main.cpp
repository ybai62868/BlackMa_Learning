/*
 * @Author: your name
 * @Date: 2020-02-12 12:28:26
 * @LastEditTime : 2020-02-12 12:32:20
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P111/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }
    Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
    // Person(int a, int b, int c) {
    //     cout << "Person的有参构造函数调用" << endl;
    //     m_A = a;
    //     m_B = b;
    //     m_C = c; 
    // }
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }
    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    // Person p(10, 20, 30);
    Person p(10, 20, 30);
    cout << p.m_A << endl;
    cout << p.m_B << endl;
    cout << p.m_C << endl;
}

int main(void)
{
    test01();

    return 0;
}