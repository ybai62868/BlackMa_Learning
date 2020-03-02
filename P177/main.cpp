# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

// 类模板对象做函数参数
template<class T1, class T2>
class Person
{
    public:
        Person(T1 name, T2 age) {
            this->m_Name = name;
            this->m_Age = age;
        }
        void showPerson() {
            cout << "m_Name = " << m_Name << endl;
            cout << "m_Age = " << m_Age << endl;
        }
        T1 m_Name;
        T2 m_Age;
};

void printPerson1(Person<string, int>& p) 
{
    p.showPerson();
}
void test01()
{
    Person<string, int>p("孙悟空", 100);
    printPerson1(p);
}

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) 
{
    p.showPerson();
    cout << "T1的类型为" << typeid(T1).name() << endl;
    cout << "T2的类型为" << typeid(T2).name() << endl;
}

void test02()
{
    Person<string, int>p("猪八戒", 99);
    printPerson2(p);
}

template<class T>
void printPerson3(T& p)
{
    cout << string(typeid(T).name()) << endl;
    p.showPerson();
}
void test03()
{
    Person<string, int>p("唐僧", 33);
    printPerson3(p);
}


int main(void)
{
    test01();
    test02();
    test03();

    return 0;
}