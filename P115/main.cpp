/*
 * @Author: your name
 * @Date: 2020-02-17 21:26:12
 * @LastEditTime: 2020-02-17 21:26:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P115/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-17 21:26:12
 * @LastEditTime: 2020-02-17 21:26:12
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P115/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person 
{
    public:
    Person(int age) {
        this->age = age;
    }
    // Person & PersonAddAge(Person & p) {
    //     this->age += p.age;
    //     return *this;
    // }
    Person PersonAddAge(Person & p) {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为" << p1.age << endl;
}

void test02()
{
    Person p1(10);
    Person p2(10);
    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2的年龄为多大" << p2.age << endl;
}


int main(void)
{
    test01();
    test02();

    return 0;
}