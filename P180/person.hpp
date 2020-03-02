/*
 * @Author: your name
 * @Date: 2020-03-02 15:24:20
 * @LastEditTime: 2020-03-02 15:24:20
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /undefined/Users/apple/Desktop/BlackMa_Learning/P180/person.hpp
 */
/*
 * @Author: your name
 * @Date: 2020-03-02 15:24:20
 * @LastEditTime: 2020-03-02 15:24:20
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /undefined/Users/apple/Desktop/BlackMa_Learning/P180/person.hpp
 */
# include <iostream>
# include <cstdio>

using namespace std;

template<class T1, class T2>
class Person
{
    public:
        Person(T1 name, T2 age);
        void showPerson();
        T1 m_Name;
        T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << this->m_Name << endl;
    cout << this->m_Age << endl;
}