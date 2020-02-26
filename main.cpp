/*
 * @Author: your name
 * @Date: 2020-02-26 11:10:50
 * @LastEditTime: 2020-02-26 11:10:51
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-26 11:10:50
 * @LastEditTime: 2020-02-26 11:10:50
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Base
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class Son: public Base
{
    public:
        int m_D;
};

void test01()
{
    Son s1;
    cout << sizeof(s1) << endl;
}


int main(void)
{
    test01();

    return 0;
}