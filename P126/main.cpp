# include <cstdio>
# include <iostream>

using namespace std;

//函数调用运算符重载

//打印输出类
class MyPrint
{
    public:
    //重载函数调用运算符
    void operator()(string test) {
        cout << test << endl;
    }
};

class MyAdd
{
    public:
    int operator()(int num1, int num2) {
        return num1 + num2;
    }

};


void MyPrint02(string str)
{
    cout << str << endl;
}

void test01()
{
    MyPrint myPrint;
    myPrint("hello world");  
    MyPrint02("hello world");

}

void test02()
{
    MyAdd myadd;
    cout << myadd(100, 200) << endl;
    cout << MyAdd()(100, 200) << endl;
}


int main(void)
{
    test01();
    test02();
    return 0;
}