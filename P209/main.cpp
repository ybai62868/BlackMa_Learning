
# include <cstdio>
# include <iostream>
# include <deque>
# include <algorithm>

using namespace std;

void printDeque(deque<int>& d)
{
    for(deque<int>::iterator it = d.begin();it!=d.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);
    // sort(d.begin(), d.end());
    sort(d.begin(), d.begin()+3);
    printDeque(d);
    
}

int main(void)
{
    test01();
    return 0;
}