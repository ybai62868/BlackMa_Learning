
# include <cstdio>
# include <iostream>
# include <string>
using namespace std;


//虚析构和纯虚析构
class Animal
{
    public:
        Animal() {
            cout << "Animal构造函数调用" << endl;
        }
        virtual void speak() = 0;
        // virtual ~Animal() {
        //     cout << "Animal析构函数调用" << endl;
        // }
        // 纯虚析构函数，需要声明也需要实现
        virtual ~Animal() = 0;

};
Animal::~Animal()
{
    cout << "Animal的纯虚析构函数调用" << endl;
}

class Cat: public Animal
{
    public:
        Cat(string name) {
            cout << "Cat的构造函数" << endl;
            m_Name = new string(name);
        }
        virtual void speak() {
            cout << *m_Name << "小猫在说话" << endl;
        }
        string *m_Name;
        ~Cat() {
            if (m_Name != NULL) {
                cout << "Cat的析构函数调用" << endl;
                delete m_Name;
                m_Name = NULL;
            }
        }
};
void test01() 
{
    Animal * animal = new Cat("汤姆");
    animal->speak();
    delete animal;
}


int main(void)
{
    test01();


    return 0;
}