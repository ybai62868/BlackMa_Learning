# include <cstdio>
# include <iostream>
# include <set>

using namespace std;

void printSet(set<int>& s)
{
    for(set<int>::iterator it = s.begin();it!=s.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s;
    s.insert(40);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    printSet(s);
    set<int>s2(s);
    printSet(s2);

}

int main(void)
{
    test01();

    return 0;
}