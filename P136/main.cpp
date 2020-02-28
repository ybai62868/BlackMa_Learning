# include <cstdio>
# include <iostream>

using namespace std;

class Animal
{
    public:
        virtual void speak() {
            cout << "动物在说话" << endl;
        }
};

class Cat: public Animal
{
    public:
        void speak() {
            cout << "小猫在说话" << endl;
        }
};

class Dog: public Animal
{
    public:
        void speak() {
            cout << "小狗在说话" << endl; 
        }
};


void DoSpeak(Animal& animal)
{

    animal.speak();
}

void test01()
{
    Cat cat;
    DoSpeak(cat);
    Dog dog;
    DoSpeak(dog);
}

void test02()
{
    Dog dog;
    Cat cat;
    cout << "sizeof Animal " << sizeof(Animal) << endl;
    cout << "sizeof dog " << sizeof(dog) << endl;
    cout << "sizeof cat " << sizeof(cat) << endl;
}

int main(void)
{
    // test01();
    test02();

    return 0;
}