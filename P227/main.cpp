# include <cstdio>
# include <iostream>
# include <set>

using namespace std;

void test01()
{
    set<int>s;
    pair<set<int>::iterator, bool>ret = s.insert(10);

    if (ret.second) {
        cout << "successfully" << endl;
    } else {
        cout << "failed" << endl;
    }
    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    for(multiset<int>::iterator it = ms.begin();it!=ms.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
    
}

int main(void)
{
    test01();

    return 0;
}