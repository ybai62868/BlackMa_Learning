# include <cstdio>
# include <iostream>
# include <set>

using namespace std;

void printSet(set<int>& s)
{
    for(set<int>::iterator it = s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    printSet(s);

    if(!s.empty()) {
        cout << "s不为空" << endl;
        cout << s.size() << endl;
    } else {
        cout << "s为空" << endl;
    }
}

void test02()
{
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    printSet(s);

    set<int>s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    printSet(s2);
    s2.swap(s);
    printSet(s2);
}

int main(void)
{
    test01();
    test02();
    return 0;
}