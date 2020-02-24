/*
 * @Author: your name
 * @Date: 2020-02-24 23:40:37
 * @LastEditTime: 2020-02-24 23:59:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P123/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class MyInteger
{
    friend ostream& operator<< (ostream& cout, MyInteger myint);
    public:
    MyInteger()
    {
        m_Num = 10;
    }
    // 重载前置++运算符
    MyInteger& operator++ ()
    {
        //先进行++操作
        m_Num++;
        //然后再将自身做一个返回
        return *this; 
    }


    // 重载后置++运算符
    MyInteger operator++ (int) {
        // 先记录当时的结果
        MyInteger temp = *this;

        // 后递增
        m_Num++;
        // 最后将记录结果返回
        return temp;
    }


    private:
        int m_Num;
};

ostream& operator<< (ostream& cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger inte;
    cout << ++inte << endl;
}

void test02()
{
    MyInteger inte;
    cout << inte++ << endl;
    cout << inte << endl;
}


int main(void)
{
    // test01();
    test02();

    return 0;
}