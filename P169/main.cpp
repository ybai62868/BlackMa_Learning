# include <cstdio>
# include <iostream>

using namespace std;

// 函数模板注意事项
// 1. 自动类型推导
// 1. 必须推导出一致的数据类型T才可以使用
// 2. 模板必须要确定出T的数据类型，才可以使用
template<typename T>
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void func()
{
    cout << "func的调用" << endl;
}


void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    mySwap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void test02()
{
    func<int>();
}

int main(void)
{
    test01();
    test02();

    return 0;
}