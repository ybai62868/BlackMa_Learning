# include <cstdio>
# include <iostream>
# include <functional>
# include <vector>
# include <algorithm>


using namespace std;

class MyCompare
{
    public:
        bool operator()(int v1, int v2) {
            return v1 > v2;
        }
};

void test01()
{
    negate<int>n;
    cout << n(40) << endl;

}

void test02()
{
    plus<int>p;
    cout << p(10, 20) << endl;
}

void test03()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // sort(v.begin(), v.end(), MyCompare());
    sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;


}
int main(void)
{
    test01();
    test02();
    test03();

    return 0;
}