# include <cstdio>
# include <iostream>
# include <vector>
# include <numeric>
using namespace std;

void test01()
{
    vector<int>v;
    for (int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    int total = accumulate(v.begin(), v.end(), 0);
    cout << total << endl;


}

int main(void)
{
    test01();
    return 0;
}