/*
 * @Author: your name
 * @Date: 2020-02-25 13:00:02
 * @LastEditTime: 2020-02-25 13:00:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P125/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-25 13:00:02
 * @LastEditTime: 2020-02-25 13:00:02
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P125/main.cpp
 */
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

class Person
{
public:
    Person(string name, int age) {
         m_Name = name;
         m_Age = age;
    }

    // 重载 == 号
    bool operator== (Person& p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return true;
        } else {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

void test01()
{
    Person p1("Tom", 18);
    Person p2("Jarry", 18);
    if (p1==p2) {
        cout << "p1和p2是相等的" << endl;
    } else {
        cout << "p1和p2是不相等的" << endl;
    }
}


int main(void)
{
    test01();
    return 0;
}