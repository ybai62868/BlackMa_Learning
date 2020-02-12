# include <cstdio>
# include <iostream>

using namespace std;

class Person 
{
    public:
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }
    Person(int age, int height) {
        cout << "Person的有参默认构造函数调用" << endl;
        m_Age = age;
        m_Height = new int(height);

    }
    Person (const Person & p) {
        m_Age = p.m_Age;
        m_Height = new int (*p.m_Height);
    }
    ~Person() {
        if(m_Height != NULL) {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }
    int m_Age;  
    int * m_Height;

};

void test01(){
    Person p1(18, 180);
    cout << "p1的年龄为" << p1.m_Age << "p1的身高为" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为" << p2.m_Age << "p2的身高为" << *p2.m_Height << endl;
}


int main(void)
{
    test01();


    return 0;
}