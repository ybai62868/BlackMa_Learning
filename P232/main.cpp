# include <cstdio>
# include <iostream>
# include <map>

using namespace std;

void printMap(map<int, int>& m)
{
    for(map<int, int>::iterator it = m.begin();it!=m.end();it++) {
        cout << it->first << " " << it->second << endl;
    }
}

void test01()
{
    map<int, int>m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    if (m1.empty()){
        cout << "map是空的" << endl; 
    } else {
        cout << "map不是空的" << endl;
        cout << m1.size() << endl;
    }
}
void test02()
{
    map<int, int>m2;
    map<int, int>m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m2.insert(pair<int, int>(1, 100));
    m2.insert(pair<int, int>(2, 200));
    m2.insert(pair<int, int>(3, 300));
    printMap(m2);
    m2.swap(m1);
    printMap(m2);
}
int main(void)
{
    test01();
    test02();
    return 0;
}