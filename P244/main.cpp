# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;

class Transform
{
    public:
        int operator()(int v) {
            return v * 10;
        }
};

class MyPrint
{
    public:
        void operator() (int v) {
            cout << v << " ";
        }
};

void test01()
{
    vector<int>v;
    for (int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    vector<int>vTarget;
    vTarget.resize(v.size());
    transform(v.begin(), v.end(), vTarget.begin(), Transform());
    for_each(vTarget.begin(), vTarget.end(), MyPrint());

}

int main(void)
{
    test01();
    return 0;
}