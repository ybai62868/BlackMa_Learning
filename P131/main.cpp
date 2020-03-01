# include <cstdio>
# include <iostream>

using namespace std;

class Base
{
    public:
        Base() {
            m_A = 100;
        }

        void func() {
            cout << "Base的func函数调用" << endl;
        }
        void func(int a) {
            cout << "Base的func2函数调用" << endl;
        }
        int m_A;

};

class Son: public Base
{
    public:
        Son() {
            m_A = 200;
        }
        void func() {
            cout << "Son的func函数调用" << endl;
        }
        int m_A;

};

void test01() 
{
    Son s;
    cout << "Son下的m_A = " << s.m_A << endl;
    cout << "Base下的m_A = " << s.Base::m_A << endl;
}

void test02()
{
    Son s2;
    s2.func();
    s2.Base::func();
    s2.Base::func(19);
}
int main(void)
{
    test01();
    test02();
    return 0;
}