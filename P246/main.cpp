# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

class GreaterFive
{
    public:
        bool operator() (int val) {
            return val > 5;
        }
};

void test01()
{
    vector<int>v;
    for (int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if(it==v.end()) {
        cout << "not find it!" << endl;
    } else {
        cout << "find it" << endl;
        cout << *it << endl;
    }
}

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

class Greater2
{
    public:
        bool operator()(const Person& p) {
            return p.m_Age > 2;
        }
};

void test02()
{
    vector<Person>v;
    Person p1("aaa", 1);
    Person p2("bbb", 2);
    Person p3("ccc", 3);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater2());
    if (it==v.end()) {
        cout << "not find it!" << endl;
    } else {
        cout << "find it" << endl;
        cout << it->m_Name << " " << it->m_Age << endl;
    }
}

int main(void)
{
    test01();
    test02();
    return 0;
}