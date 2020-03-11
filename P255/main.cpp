# include <cstdio>
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v1;
    for (int i = 0;i < 10;i++) {
        v1.push_back(i);
    }
    vector<int>v2;
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;

}

int main(void)
{
    test01();
    return 0;
}