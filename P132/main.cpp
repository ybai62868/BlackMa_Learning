# include <cstdio>
# include <iostream>

using namespace std;

class Base
{
    public:
        static int m_A;
    static void func() {
        cout << "Base下的static void func函数调用" << endl;
    }
};
int Base::m_A = 100;


class Son: public Base
{
    public:
        static int m_A;
    static void func() {
        cout << "Son下的static void func函数调用" << endl;
    }
};
int Son::m_A = 200;

void test01()
{
    // 1.通过对象来访问成员函数
    cout << "通过对象来访问" << endl;
    Son s;
    cout << "Son下的m_A = " << s.m_A << endl;
    cout << "Base下的m_A = " << s.Base::m_A << endl;

    // 2.通过类名来访问
    cout << "通过类名来访问" << endl;
    cout << "Son下的m_A = " << Son::m_A << endl;
    cout << "Base下的m_A = " << Son::Base::m_A << endl;
}

void test02()
{
    Son s2;
    s2.func();
    s2.Base::func();
    Son::func();
    Son::Base::func();
}

int main(void)
{
    test01();
    test02();
    return 0;
}