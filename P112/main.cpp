/*
 * @Author: your name
 * @Date: 2020-02-16 00:19:00
 * @LastEditTime : 2020-02-16 00:35:22
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P112/main.cpp
 */
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

// class Phone
// {
//     public:
//     Phone (string name) {
//         m_PName = name;
//     }
//     string m_PName;
// };


// class Person
// {
//     public:
//     Person (string name, string pName) {
//         m_Name = name;
//         m_Phone = pName;
//     }
//     string m_Name;
//     Phone m_Phone; 

// };

// void test01()
// {
//     Person p("张三", "苹果Max");
//     cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
// }


class Phone
{
    public:
    Phone (string name) {
        m_PName = name;
    }
    string m_PName;
};


class Person
{
    public:
    Person(string name, string phone_name) {
        P_name = name;
        m_Phone = phone_name;
    }
    string P_name;
    Phone m_Phone;
};

void test01()
{
    Person P("张三", "苹果Max");
    cout << P.P_name << "拿着" << P.m_Phone.m_PName << endl;
    
}


int main(void)
{
    test01();
    return 0;
}