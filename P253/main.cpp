# include <cstdio>
# include <iostream>
# include <algorithm>
# include <functional>
# include <vector>

using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v1, v2;
    for (int i = 0;i < 10;i++) {
        v1.push_back(i);
        v2.push_back(i+1);
    }

    vector<int>vTarget;
    vTarget.resize(v1.size()+v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), vTarget.end(), myPrint);

}

int main(void)
{
    test01();
    return 0;
}