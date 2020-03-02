# include <cstdio>
# include <iostream>

using namespace std;

// 类模板与继承
template<class T>
class Base
{
    public:
        Base() {
            cout << "Base构造函数的调用" << endl;
        }
        T m;   
};

class Son: public Base<int>
{
    public:
        Son() {
            cout << "Son构造函数的调用" << endl;
        }
    
};

template<class T1, class T2>
class Son2:public Base<T2>
{
    public:
        Son2() {
            cout << "T1的类型为: " << typeid(T1).name() << endl;
            cout << "T2的类型为: " << typeid(T2).name() << endl;
        }
    T1 obj;
};

void test02()
{
     Son2<int, char>S2;

}


void test01()
{
    Son s1;
}
int main(void)
{
    test01();
    test02();
    return 0;
}