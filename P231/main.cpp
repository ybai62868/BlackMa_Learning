
# include <cstdio>
# include <iostream>
# include <map>

using namespace std;

void printMap(map<int, int>& m)
{
    for (map<int, int>::iterator it = m.begin();it!=m.end();it++) {
        cout << it->first << " " << it->second << endl;
    }
}

void test01()
{
    map<int, int>m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int ,int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(2, 20));

    printMap(m);
    cout << endl;
    map<int, int>m2(m);
    printMap(m2);
    cout << endl;
    map<int, int>m3;
    m3 = m2;
    printMap(m3);


}

int main(void)
{
    test01();
    return 0;
}