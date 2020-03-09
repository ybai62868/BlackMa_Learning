# include <cstdio>
# include <iostream>
# include <algorithm>
# include <vector>
# include <functional>

using namespace std;

void print01(int val)
{
    cout << val << endl;
}

class print02
{
    public:
        void operator()(int val) {
            cout << val << endl;
        }
};
void test01()
{
    vector<int>v;
    for(int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print01);
    cout << endl;
    for_each(v.begin(), v.end(), print02());
    cout << endl;
}

int main(void)
{
    test01();
    return 0;
}