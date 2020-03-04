
# include <cstdio>
# include <iostream>

using namespace std;

// 字符串查找和替换
// 1.查找
void test01()
{
    string str1 = "abcdefg";
    int pos = str1.find("de");
    cout << pos << endl;
    if (pos == -1) {
        cout << "未找到字符串" << endl;
    } else {
        cout << "找到字符串, pos = " << pos << endl;
    }

    // rfind, 从右向左查找
    // find是从左往右查找
    pos = str1.rfind("de");
    cout << pos << endl;
}


// 2.替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "0000");
    cout << str1 << endl;
}


int main(void)
{
    // test01();
    test02();

    return 0;
}