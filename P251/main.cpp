# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int>v;
    for(int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
}

int main(void)
{
    test01();
    return 0;
}