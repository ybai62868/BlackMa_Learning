# include <cstring>
# include <string>
# include <iostream>
# include <cstdio>

using namespace std;

void test01()
{
    string s1;
    const char* str = "hello world";
    string str2(str);
    cout << str2 << endl;
    string str3(str2);
    cout << str3 << endl;
    string str4(10, 'a');
    cout << str4 << endl;
}


int main(void)
{
    test01();


    return 0;
}