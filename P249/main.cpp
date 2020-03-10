# include <cstdio>
# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

using namespace std;

void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(30);
    int cnt = count(v.begin(), v.end(), 20);
    cout << cnt << endl;
}

class Person
{
    public:
        Person(string name, int age) {
            this->m_Name = name;
            this->m_Age = age;
        }
        bool operator==(const Person& p){
            if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
                return true;
            } else {
                return false;
            }
        }
        string m_Name;
        int m_Age;
};

void test02()
{
    vector<Person>v;
    Person p1("aaa", 1);
    Person p2("aaa", 1);
    Person p3("bbb", 2);
    Person p4("ccc", 3);
    Person p("aaa", 1);
    int cnt = count(v.begin(), v.end(), p);
    cout << cnt << endl;
}

int main(void)
{
    test01();
    test02();
    return 0;
}