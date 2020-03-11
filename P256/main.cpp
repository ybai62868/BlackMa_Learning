# include <iostream>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

class myPrint
{
    public:
        void operator()(int val){
            cout << val << " ";
        }
};

void test01()
{
    vector<int>v;
    v.push_back(20);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(10);
    v.push_back(40);

    cout << "替换前:" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;

    replace(v.begin(), v.end(),20, 2000);
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;

}
int main(void)
{
    test01();
    return 0;
}