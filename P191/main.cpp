# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

void test01()
{
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << str1 << endl;
    str1 += ':';
    cout << str1 << endl;
    string str2 = "LOL";
    str1 += str2;
    cout << str1 << endl;
    string str3 = "I";
    cout << str3 << endl;
    str3.append(" love ");
    cout << str3 << endl;
    str3.append("game abcde", 4);
    cout << str3 << endl;
    str3.append(str2);
    cout << str3 << endl;
    str3.append("hello LOL", 0, 3);
    cout << str3 << endl;

}

int main(void)
{
    test01();
    return 0;
}