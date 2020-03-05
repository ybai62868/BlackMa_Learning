# include <iostream>
# include <cstdio>
# include <vector>

using namespace std;

void PrintVector(vector<int>& v)
{
    for ( vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// vector赋值
void test01()
{
    vector<int>v1;
    for( int i = 0;i < 10;i++ ) {
        v1.push_back(i);
    }
    PrintVector(v1);
    vector<int>v2;
    v2 = v1;
    PrintVector(v2);

    // assign
    vector<int>v3;
    v3.assign(v1.begin(), v1.end());
    PrintVector(v3);

    // n个elem方式赋值
    vector<int>v4;
    v4.assign(10, 100);
    PrintVector(v4);
}


int main(void)
{
    test01();

    return 0;
}