
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    Person(int age) {
        m_Age = new int(age);
    }
    int *m_Age;
    ~Person() {
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
    }
    Person& operator=(Person &p)
    {
        //编译器提供的是浅拷贝
        //m_Age = p.m_Age;

        //应该先判断是否有属性在堆区， 如果有先释放干净，在进行深拷贝
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
        // 深拷贝的操作
        m_Age = new int(* p.m_Age);
        return *this;
    }
};

void test01()
{
    Person p1(10);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;

    cout << "p1的年龄为 " << *p1.m_Age << endl;
    
    cout << "p2的年龄为 " << *p2.m_Age << endl;

}

int main(void)
{
    test01();
    int a = 10;
    int b = 20;
    int c = 30;
    c = b = a;
    cout << a << " " << b << " " << c << endl;


    return 0;
}