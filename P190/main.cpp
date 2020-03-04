/*
 * @Author: your name
 * @Date: 2020-03-04 14:52:59
 * @LastEditTime: 2020-03-04 15:00:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /undefined/Users/apple/Desktop/BlackMa_Learning/P190/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-03-04 14:52:59
 * @LastEditTime: 2020-03-04 14:52:59
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /undefined/Users/apple/Desktop/BlackMa_Learning/P190/main.cpp
 */
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

void test01()
{
    string str1 = "hello world";
    cout << str1 << endl;
    string str2 = str1;
    cout << str2 << endl;
    string str3;
    str3 = 'a';
    cout << str3 << endl;
    string str4;
    str4.assign("hello C++");
    cout << str4 << endl;
    string str5;
    str5.assign("hello C++", 5);
    cout << str5 << endl;
    string str6;
    str6.assign(str5);
    cout << str6 << endl;
    string str7;
    str7.assign(10, 'w');
    cout << str7 << endl;

}

int main(void)
{
    test01();


    return 0;
}
