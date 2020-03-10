# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

void test01()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it==v.end()) {
        cout << "not find it" << endl;
    } else {
        cout << "find it" << endl;
        cout << *it << endl;
    }
}

int main(void)
{
    test01();
    return 0;
}