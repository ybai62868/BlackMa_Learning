# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;

class GreaterFive
{
    public:
        bool operator()(int val)
        {
            return val > 5;
        }
};

void test01()
{
    vector<int>v;
    for (int i = 0;i < 10;i++) {
        v.push_back(i);
    }
    // GreaterFive() 匿名的函数对象 
    find_if(v.begin(), v.end(), GreaterFive());
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it!=v.end()) {
        cout << "find it" << endl;
        cout << *it << endl;
    } else {
        cout << "not find it" << endl;
    }

}

int main(void)
{
    test01();
    return 0;
}