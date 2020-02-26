# include <cstdio>
# include <iostream>

using namespace std;

class Animal 
{
    public:
        int m_Age;
};

class Sheep : virtual public Animal
{
    public:

};

class Tuo: virtual public Animal {};

class SheepTuo: public Sheep, public Tuo {};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 1;
    cout << "st.Sheep::m_Age " << st.m_Age << endl;
    cout << "st.Tuo::m_Age " << st.Tuo::m_Age << endl;
    
}

int main(void)
{
    test01();
    return 0;
}