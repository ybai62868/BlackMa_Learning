 # include <cstdio>
 # include <iostream>

 using namespace std;

//纯虚函数和抽象类

class Base
{
    public:
        virtual void func() = 0;
        
};

class Son: public Base
{
    public:
        void func() {
            cout << "Son中对于func函数的调用" << endl;
        }

};


void test01()
{
   // Base b; // 抽象类是无法实例化对象的
   // Son s; // 子类必须重写父类中的纯虚函数，否则无法实例化对象
    Base * base = new Son;
    base->func();
}

int main(void)
{
    test01();
    return 0;
}