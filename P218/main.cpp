# include <cstdio>
# include <iostream>
# include <list>

using namespace std;

void printList(list<int>& l)
{
    for(list<int>::iterator it = l.begin();it!=l.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    printList(l1);
    if (!l1.empty()) {
        cout << "l1不为空" << endl;
        cout << l1.size() << endl;
    } else {
        cout << "l1为空" << endl;
    }
    l1.resize(10,99);
    printList(l1);
    cout << l1.size() << endl;

}
int main(void)
{
    test01();

    return 0;
}