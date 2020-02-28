# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

class Calculator
{
    public:
        int getResult(string oper) {
            if (oper=="+") {
                return m_Num1 + m_Num2;
            } else if (oper=="-") {
                return m_Num1 - m_Num2;
            } else if (oper=="*") {
                return m_Num1 * m_Num2;
            } else {
                return m_Num1 / m_Num2;
            }
        }
        int m_Num1;
        int m_Num2;

};

void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 20;
    cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") <<endl;
    cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") <<endl;
    cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") <<endl;

}

// 利用多态实现计算器
// 实现一个计算器的抽象类
class AbstractCalculator
{
    public:
        virtual int getResult() {
            return 0;
        }
        int m_Num1;
        int m_Num2;
};

class AddCalculator: public AbstractCalculator 
{
    public:
        int getResult() {
            return m_Num1 + m_Num2;
        }
};

class SubCalculator: public AbstractCalculator
{
    public:
        int getResult() {
            return m_Num1 - m_Num2;
        }
};

class MulCalculator: public AbstractCalculator
{
    public:
        int getResult() {
            return m_Num1 * m_Num2;
        }
};

void test02()
{
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
    delete abc;

    AbstractCalculator * abc2 = new SubCalculator;
    abc2->m_Num2 = 10;
    abc2->m_Num2 = 20;
    cout << abc2->m_Num1 << "-" << abc2->m_Num2 << "=" << abc2->getResult() << endl;
    delete abc2;

    AbstractCalculator * abc3 = new MulCalculator;
    abc3->m_Num1 = 10;
    abc3->m_Num2 = 20;
    cout << abc3->m_Num1 << "*" << abc3->m_Num2 << "=" << abc3->getResult() << endl;
    delete abc3;
}

int main(void)
{
    // test01();
    test02();
    

    return 0;
}