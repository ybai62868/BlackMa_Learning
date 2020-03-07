
# include <cstdio>
# include <iostream>
# include <set>

using namespace std;

void printSet(set<int>& s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    printSet(s1);
    s1.erase(10);
    printSet(s1);
    s1.erase(30);
    printSet(s1);
    s1.clear();
    printSet(s1);
}

int main(void)
{
    test01();
    return 0;
}