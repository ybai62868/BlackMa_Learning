# include <cstdio>
# include <iostream>
# include <queue>
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

void test01()
{
    queue<Person>q;
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);
    queue<Person>q2(q);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    cout << q.size() << endl;
    while(!q.empty()) {
        cout << q.front().m_Name << " " << q.front().m_Age << endl;
        q.pop();
    }
    cout << q.size() << endl; 
}

int main(void)
{
    test01();
    return 0;
}