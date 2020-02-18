/*
 * @Author: your name
 * @Date: 2020-02-18 15:27:53
 * @LastEditTime: 2020-02-18 15:27:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P117/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-18 15:27:53
 * @LastEditTime: 2020-02-18 15:27:53
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P117/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    void showPerson() const {
        this->m_A = 100;
    }
    int m_B;
    mutable int m_A;
};

void test01()
{
    Person p;
    p.showPerson();
    cout << p.m_A << endl;
}

void test02()
{
    Person p2;
    cout << p2.m_A << endl;
    p2.showPerson();
}

int main(void)
{
    test01();
    test02();
    return 0;
}