
# include <cstdio>
# include <iostream>
# include <map>

using namespace std;

void test01()
{
    // 查找
    map<int, int>m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    map<int, int>::iterator pos = m.find(4);
    if (pos!=m.end()) {
        cout << "successfully " << pos->first << " " << pos->second << endl;
    } else {
        cout << "failed" << endl;
    }
    int num = m.count(3);
    cout << num << endl;
}
int main(void)
{
    test01();

    return 0;
}