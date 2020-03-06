# include <cstdio>
# include <iostream>
# include <list>

using namespace std;

void test01()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    cout << l1.back() << endl;
    cout << l1.front() << endl;
}

int main(void)
{
    test01();
    return 0;
}