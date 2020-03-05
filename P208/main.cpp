# include <cstdio>
# include <iostream>
# include <deque>

using namespace std;

void test01()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(300);
    d.push_front(200);
    d.push_front(100);

    for (int i = 0;i < d.size();i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < d.size();i++) {
        cout << d.at(i) << " ";
    }
    cout << endl;
    cout << "front = " << d.front() << endl;
    cout << "back = " << d.back() << endl;
}

int main(void)
{
    test01();
    return 0;
}