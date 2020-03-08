# include <cstdio>
# include <iostream>
# include <map>

using namespace std;

class MyCompare
{
    public:
        bool operator()(int v1, int v2)
        {
            return v1 > v2;
        }
};

void printMap(map<int, int, MyCompare>m)
{
    for(map<int, int, MyCompare>:: iterator it = m.begin();it!=m.end();it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int, MyCompare>m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));
    // printMap(m);
}

int main(void)
{
    test01();
    return 0;
}