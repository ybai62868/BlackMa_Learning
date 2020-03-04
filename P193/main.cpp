# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

// string 字符存取
void test02()
{
    string str = "hello";

    // 1. 通过[]访问单个字符
    for (int i = 0;i < str.size();i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    // 2. 通过at方式访问单个字符
    for (int i = 0;i < str.size();i++) {
        cout <<  str.at(i) << " ";
    }
    cout << endl;

    // 修改单个字符
    str[0] = 'x';
    cout << str << endl;

}

void test01()
{
    string str1 = "xello"; 
    string str2 = "hello";
    if (str1.compare(str2) == 0) {
        cout << "str1 等于 str2" << endl;
    } else if (str1.compare(str2) > 0) {
        cout << "str1 大于 str2" << endl;
    } else {
        cout << "str1 小于 str2" << endl;
    }
}

int main(void)
{
    test01();
    test02();
    return 0;
}