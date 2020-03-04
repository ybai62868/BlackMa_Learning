# include <cstdio>
# include <iostream>

using namespace std;


void test01()
{
    string str1 = "abcdef";
    string subStr = str1.substr(1, 3);
    cout << subStr << endl;

}

void test02()
{
    string email = "hello@sina.com";
    // 从邮件的地址中，获得用户名的信息
    int pos = email.find("@");
    cout << email[pos] << endl;
    
    string usrName = email.substr(0, pos);
    cout << usrName << endl;
}

int main(void)
{
    // test01();
    test02();
     

    return 0;
}