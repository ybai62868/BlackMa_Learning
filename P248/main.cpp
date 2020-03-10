# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

void test01()
{
    vector<int>v;
    for (int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    // 查找容器中是否有9这个元素
    int flag = binary_search(v.begin(), v.end(), 5);
    if (flag) {
        cout << "find it" << endl;
    } else {
        cout << "not find it" << endl;
    }
}

int main(void)
{
    test01();
    return 0;
}
