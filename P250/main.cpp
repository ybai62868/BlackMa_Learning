# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>

using namespace std;

class Greater20
{
    public:
        bool operator ()(int val) {
            return val > 20;
        }
};

void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int cnt = count_if(v.begin(), v.end(), Greater20());
    cout << cnt << endl;
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
    Person p4("ddd", 4);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    int cnt = count_if(v.begin(), v.end(), Greater2());
    cout << cnt << endl;
}

int main(void)
{
    test01();
    test02();

    return 0;
}