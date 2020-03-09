
# include <cstdio>
# include <iostream>
# include <vector>
# include <functional>
# include <algorithm>

using namespace std;

void test01()
{
    vector<bool>v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (vector<bool>::iterator it=v.begin();it!=v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 利用逻辑非， 将容器v搬运到容器v2中，进行取反操作
    vector<bool>v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
    for (vector<bool>::iterator it=v2.begin();it!=v2.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(void)
{
    test01();
    
    return 0;
}