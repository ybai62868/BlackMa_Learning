# include <cstdio>
# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
using namespace std;

void test01()
{
    vector<int>v;
    for(int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    vector<int>::iterator pos = find(v.begin(), v.end(), 5);
    if (pos==v.end()) {
        cout << "not find!" << endl;
    } else {
        cout << "find it!" << endl;
    }

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
    Person p2("bbb", 2);
    Person p3("ccc", 3);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
    if (pos==v.end()) {
        cout << "not find it!" << endl;
    } else {
        cout << "find it!" << endl;
        cout << pos->m_Name << " " << pos->m_Age << endl;
    }
}

int main(void)
{
    // test01();
    test02();

    return 0;
}