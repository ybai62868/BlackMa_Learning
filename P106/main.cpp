/*
 * @Author: your name
 * @Date: 2020-02-11 21:26:24
 * @LastEditTime : 2020-02-11 21:28:03
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P106/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    Person() {
        cout << "Person的构造函数的调用" << endl;
    }
    ~Person() {
        cout << "Person的析构函数调用" << endl; 
    }
};

void test01()
{
    Person p;
}


int main(void)
{
    test01();
    return 0;
}