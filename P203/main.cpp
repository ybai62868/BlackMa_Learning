# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;

void test01()
{
    vector<int>v;
    v.reserve(100000);
    int cnt;
    int* p = NULL;
    for (int i = 0;i < 100000;i++) {
        v.push_back(i);
        if (p!=&v[0]) {
            p = &v[0];
            cnt++;
        }
    }
    cout << cnt << endl;

}

int main(void)
{
    test01();
    return 0;
}