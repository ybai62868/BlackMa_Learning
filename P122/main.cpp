
# include <cstdio>
# include <iostream>

using namespace std;

// 1.左移运算符重载
class Person
{
    friend ostream & operator << (ostream & cout, Person & p);
    public:
    Person (int a, int b) {
        m_A = a;
        m_B = b;
    }
    private:

    // 1.利用成员函数重载，左移运算符
    // void operator << (Person &p) {
        
    // }
    int m_A;
    int m_B;
};

// 只能利用全局函数重载左移运算符
ostream & operator << (ostream & cout, Person & p)
{

    cout << "m_A = " << p.m_A << " " << "m_B = " << p.m_B;
    return cout;
}

void test01()
{
    Person p(10, 20);
    cout << p << endl;
}

int main(void)
{
    test01();

    return 0;
}