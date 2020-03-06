# include <cstdio>
# include <iostream>
# include <list>

using namespace std;

void printList(list<int>& l)
{
    for (list<int>::iterator it=l.begin();it!=l.end();it++) {
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
    list<int>l2(l1.begin(), l1.end());
    printList(l2);
    list<int>l3(l2);
    printList(l3);

    // n个elem
    list<int>l4(10, 1000);
    printList(l4);

}

int main(void)
{
    test01();


    return 0;
}