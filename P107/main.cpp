/*
 * @Author: your name
 * @Date: 2020-02-11 21:46:28
 * @LastEditTime : 2020-02-11 21:50:21
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P107/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    Person() {
        cout << "Person的默认构造函数的调用" << endl;
    }
    Person( int a ) {
        age = a;
        cout << "Person的有参构造函数的调用" << endl;
    } 
    Person (const Person & p) {
        age = p.age;
        cout << "Person的拷贝构造函数的调用" << endl;
    } 
    ~Person() {
        cout << "Person的析构函数调用" << endl; 
    }
    int age;
};

void test01()
{
    // 1. 括号法
    Person p1;
    Person p2(10);
    Person p3(p2);
    cout << "p2的年龄" << p2.age << endl;
    cout << "p3的年龄" << p3.age << endl;

    
}


int main(void)
{
    test01();
    return 0;
}