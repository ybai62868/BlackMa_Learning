# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;

void printVector(vector<int>&v)
{
    for (vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for (int i = 1;i <= 5;i++) {
        int temp = i*10;
        v1.push_back(temp);
    }
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    v1.insert(v1.begin(), 100);
    printVector(v1);
    v1.insert(v1.begin(), 2, 1000);
    printVector(v1);
    v1.erase(v1.begin());
    printVector(v1);
    v1.erase(v1.begin(), v1.end());
    printVector(v1);
    v1.push_back(199);
    printVector(v1);
    v1.clear();
    printVector(v1);

}

int main(void)
{
    test01();

    return 0;
}