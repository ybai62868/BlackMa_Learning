# include <cstdio>
# include <iostream>
# include <set>
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

class comparePerson
{
    public:
        bool operator() (const Person& p1, const Person& p2) {
            return p1.m_Age > p2.m_Age;
        }
};

void printSet(set<Person, comparePerson>& s)
{
    for(set<Person, comparePerson>::iterator it = s.begin();it!=s.end();it++) {
        cout << it->m_Name << " " << it->m_Age << endl;
    }
}

void test01()
{
    set<Person, comparePerson>s1;
    Person p1("abc", 111);
    Person p2("cde", 222);
    Person p3("edf", 333);
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    printSet(s1);
}
int main(void)
{
    test01();

    return 0;
}