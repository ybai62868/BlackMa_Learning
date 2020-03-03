
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

template<class T1, class T2>
class Person;

// 类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
    cout << "类外实现--姓名: " << p.m_Name << "年龄" << endl;
}

// 通过全局函数，打印Person的信息
template<class T1, class T2>
class Person
{
    // 全局函数，类内实现
    friend void printPerson(Person<T1, T2>p) {
        cout << "姓名: " << p.m_Name << "年龄: " << p.m_Age << endl;

    }
    friend void printPerson2<>(Person<T1, T2>p);
    public:
        Person(T1 name, T2 age) {
            this->m_Name = name;
            this->m_Age = age;
        }
    void showPerson();
    private:
        T1 m_Name;
        T2 m_Age;
};



// 1.全局函数在类内实现
void test01()
{
    Person<string, int>p("Tom", 20);
    printPerson(p);
}

void test02()
{
    Person<string, int>p("jerry", 120);
    printPerson2(p);
}

int main(void)
{
    test01(); 
    test02();

    return 0;
}