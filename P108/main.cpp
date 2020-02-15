/*
 * @Author: your name
 * @Date: 2020-02-11 22:26:08
 * @LastEditTime : 2020-02-11 22:27:06
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P108/main.cpp
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
    Person(int age) {
        m_age = age;
        cout << "Person的有参构造函数调用" << endl; 
    }
    Person( const Person & p) {
        m_age = p.m_age;
        cout << "Person的拷贝构造函数调用" << endl;
    }
    ~Person() {
        cout << "Person的析构函数调用" << endl; 
    }
    int m_age;
};

void doWork( Person p)
{

}

void test01()
{
    Person p;
    doWork(p);
}


Person doWork2()
{
    Person p1;
    cout << (int*)&p1 << endl;
    return p1;
}

void test03()
{
    Person p2 = doWork2();
    cout << (int*)&p2 << endl;

}




int main(void)
{
    // test01();
    doWork2();
    test03();
    return 0;
}