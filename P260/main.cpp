# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;
void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int>v;
    v.resize(10);
    fill(v.begin(), v.end(), 999);
    for_each(v.begin(), v.end(), myPrint);
}
int main(void)
{
    test01();
    return 0;
}