# include <cstdio>
# include <iostream>
# include <set>

using namespace std;

void test01()
{
    set<int>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos = s1.find(300);
    if (pos!=s1.end()) {
        cout << "find it!" << endl;
    } else {
        cout << "not find it" << endl;
    }
}
void test02()
{
    set<int>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(30);
    int res = s1.count(30);
    cout << res << endl;
}
int main(void)
{
    test01();
    test02();
    return 0;
}