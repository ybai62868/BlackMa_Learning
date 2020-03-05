# include <cstdio>
# include <iostream>
# include <deque>
using namespace std;

void printDeque(deque<int>& d)
{
    for(deque<int>::iterator it=d.begin();it!=d.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(10); 
    d1.push_front(20);
    printDeque(d1);
    
    d1.pop_back();
    printDeque(d1);
    d1.pop_front();
    printDeque(d1);
}

void test02()
{
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);
    d1.insert(d1.begin(), 10000);
    printDeque(d1);
    d1.insert(d1.begin(), 2, 999);
    printDeque(d1);
    deque<int>d2;
    d2.push_back(10);
    d2.push_back(102);
    d2.push_front(11);
    d2.push_front(111);
    d1.insert(d1.begin(), d2.begin(), d2.end());
    printDeque(d1);
    deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it);
    printDeque(d1);
    d1.erase(d1.begin(), d1.end());
    
}
int main(void)
{
    // test01();
    test02();

    return 0;
}