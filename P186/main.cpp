# include <iostream>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;


void myPrint(int val)
{
    cout << val << endl;
}

// vector容器存放内置数据类型
void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过迭代器来访问容器中的元素
    vector<int>::iterator itBegin = v.begin(); // 起始迭代器，指向容器中第一个元素的位置
    vector<int>::iterator itEnd = v.end();

    // 第一种遍历方式
    while (itBegin != itEnd) {
        cout << *itBegin << endl;
        itBegin++;
    }
    cout << endl;
    // 第二种遍历方式
    for (vector<int>::iterator it = v.begin();it != v.end();it++) {
        cout << *it << endl;
    }
    cout << endl;
    // 第三种遍历方式
    for_each(v.begin(), v.end(), myPrint);
    

}


int main(void)
{
    test01();

    return 0;
}