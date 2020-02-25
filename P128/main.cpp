# include <cstdio>
# include <iostream>

using namespace std;


class Base1
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class Son1: public Base1
{
    public:
    void func() { 
        m_A = 10; // 父类中的公共权限成员，到子类中依然是公共权限
        m_B = 10; // 父类中的包含权限成员，到子类中依然是保护权限
        // m_C = 10; // 父类中的私有权限成员，子类访问不到
    }
};

class Base2
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class Son2: protected Base2
{
    public:
        void func() {
            m_A = 100;
            m_B = 100;
            // m_C = 100;
        }
};

class Base3
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class Son3: private Base3
{
    public:
    void func() {
        m_A = 100;
        m_B = 100;
    }
};



void test01()
{
    Son1 s1;
    s1.m_A = 100;
    cout << s1.m_A << endl;

}

void test02()
{
    Son2 s2;
    // s2.m_A = 1000;
    // cout << s2.m_A << endl;
}

void test03() 
{
    Son3 s3;
}

int main(void)
{
    test01();



    return 0;
}