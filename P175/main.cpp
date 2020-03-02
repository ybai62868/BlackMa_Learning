# include <cstdio>
# include <iostream>

using namespace std;

template<class NameType, class AgeType = int>
class Person
{
    public:
        Person(NameType name, AgeType age) {
            this->m_Name = name;
            this->m_Age = age;
        }
        void showPerson() {
            cout << this->m_Name << endl;
            cout << this->m_Age << endl;
        }
        NameType m_Name;
        AgeType m_Age;
};

// 类模板没有自动类型推导使用方式
void test01()
{
    // Person p("孙悟空", 1000);
    Person<string, int>p("孙悟空", 1000);
    p.showPerson();
}
void test02() 
{
    Person<string>p("猪八戒", 999);
    p.showPerson();
}



int main(void)
{
    test01();
    test02();
    return 0;
}
