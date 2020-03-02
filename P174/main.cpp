# include <cstdio>
# include <iostream>
# include <string>
using namespace std;

template<class NameType, class AgeType>
class Person
{
    public:
        Person(NameType name, AgeType age) {
            this->m_Name = name;
            this->m_Age = age;
        }
        void showPerson() {
            cout << "name: " << this->m_Name << endl;
            cout << "age: " << this->m_Age << endl;
        }
        NameType m_Name;
        AgeType m_Age;
    
};


void test01()
{
    Person<string, int> p1("孙悟空", 99);
    p1.showPerson();
}


int main(void)
{
    test01();
    return 0;
}