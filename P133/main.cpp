# include <cstdio>
# include <iostream>

using namespace std;

class Base1
{
    public:
        Base1() {
            m_A = 100;
        }
        int m_A;
};

class Base2
{
    public:
        Base2() {
            m_A = 200;
        }
        int m_A;
};

class Son: public Base1, public Base2
{
    public:
        Son() {
            m_C = 300;
            m_D = 400;
        }
        int m_C, m_D;
};

void test01()
{
    Son s;
    cout << "sizeof Son = " << sizeof(s) << endl;
    cout << s.Base1::m_A << endl;
}

int main(void)
{
    test01();
    return 0;
}