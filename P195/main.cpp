# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

void test01()
{
    string str1 = "hello";

    // 插入
    str1.insert(1, "111");
    cout << "str1 = " << str1 << endl;

    // 删除
    str1.erase(1, 3);
    cout << "str1 = " << str1 << endl;
}

int main(void)
{
    test01();

    return 0;
}