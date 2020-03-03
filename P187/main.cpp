# include <cstdio>
# include <iostream>
# include <string>
# include <vector>

using namespace std;

// vector容器中存放自定义的数据类型
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

// 存放自定义数据类型的指针
void test02()
{
    vector<Person*>v;
    Person p1("A", 123);
    Person p2("B", 321);
    Person p3("C", 213);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);

    for( vector<Person*>::iterator it = v.begin();it!=v.end();it++) {
        cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
    }

    
}

void test01()
{
    vector<Person>v;
    Person p1("a", 10);
    Person p2("b", 20);
    Person p3("c", 30);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    for (vector<Person>::iterator it = v.begin();it!=v.end();it++) {
        cout << "姓名: " << (*it).m_Name << "年龄: "  << (*it).m_Age << endl;
    }
    for (vector<Person>::iterator it = v.begin();it!=v.end();it++) {
        cout << it->m_Name << " " << it->m_Age << endl;
    }
}

int main(void)
{
    // test01();
    test02();

    return 0;
}
