
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

class Person
{
    public:
        Person(string name, int age) {
            this->m_Name = name;
            this->m_Age = age;
        }
        string m_Name;
        int m_Age;
};


template<class T>
bool myCompare(T& a, T& b)
{
    if (a==b) {
        return true;
    } else {
        return false;
    }
}

// 利用具体化Person版本实现代码，具体化优先调用
template<>bool myCompare(Person& p1, Person& p2)
{
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
        return true;
    } else {
        return false;
    }
}


void test01()
{
    int a = 10;
    int b = 10;
    cout << myCompare(a, b) << endl;
}

void test02()
{
    Person p1("abc", 18);
    Person p2("abc", 11);
    cout << myCompare(p1, p2) << endl;
}


int main(void)
{
    // test01();
    test02();
    return 0;
}