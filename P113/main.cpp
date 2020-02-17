/*
 * @Author: your name
 * @Date: 2020-02-17 18:33:23
 * @LastEditTime: 2020-02-17 18:33:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P113/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-17 18:33:23
 * @LastEditTime: 2020-02-17 18:33:23
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P113/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person{
    public:
    static void func() {
        m_A = 100;
        cout << "static void func的调用" << endl;
    }
    static int m_A;
    int m_B;
    private:
    static void func2() {
        cout << "static void func2的调用" << endl;
    }
};

int Person::m_A = 0;

void test01()
{
    Person P;
    P.func();
    Person::func();
    // Person::func2();
}

int main(void)
{
    test01();

    return 0;
}