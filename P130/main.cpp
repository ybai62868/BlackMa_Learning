/*
 * @Author: your name
 * @Date: 2020-02-26 11:54:38
 * @LastEditTime: 2020-02-26 11:54:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P130/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-26 11:54:38
 * @LastEditTime: 2020-02-26 11:54:38
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P130/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

// 继承中的构造和析构顺序
class Base
{
    public:
        Base() {
            cout << "Base的构造函数" << endl;
        }
        ~Base() {
            cout << "Base的析构函数" << endl;
        }
};

class Son: public Base
{
    public:
        Son() {
            cout << "Son的构造函数" << endl;
        }
        ~Son() {
            cout << "Son的析构函数" << endl;
        }
};

void test01() 
{
    Son s1;
}
int main(void)
{
    test01();
    return 0;
}