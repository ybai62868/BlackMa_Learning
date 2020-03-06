# include <cstdio>
# include <iostream>
# include <list>
# include <string>

using namespace std;

class Person
{
    public:
        Person(string name, int age, int height) {
            this->m_Name = name;
            this->m_Age = age;
            this->m_Height = height;
        }
        string m_Name;
        int m_Age;
        int m_Height;
};

bool comparePerson(Person& p1, Person& p2)
{
    if (p1.m_Age == p2.m_Age) {
        return p1.m_Height > p2.m_Height;
    } else {
        return p1.m_Age < p2.m_Age;
    }
    
}

void test01()
{
    list<Person>l;
    Person p1("abc", 35, 123);
    Person p2("bcd", 54, 234);
    Person p3("ecs", 76, 345);
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    for(list<Person>::iterator it = l.begin();it!=l.end();it++) {
        cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << endl;
    }
    l.sort(comparePerson);
    for(list<Person>::iterator it = l.begin();it!=l.end();it++) {

    }

}

int main(void)
{
    test01();
    return 0;
}