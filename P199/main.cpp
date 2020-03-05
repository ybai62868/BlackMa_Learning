# include <cstdio>
# include <iostream>
# include <vector>

using namespace std;

void printVector(vector<int>& v)
{
    for (vector<int>::iterator it =v.begin();it!=v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// vector容器的容量和大小
void test01()
{
    vector<int>v1;
    for (int i = 0;i < 10;i++) {
        v1.push_back(i);
    }
    printVector(v1);
    
    if (v1.empty()) {
        cout << "v1为空" << endl;
    } else {
        cout << "v1不为空" << endl;
        cout << "v1的容量为" << v1.capacity() << endl;
        cout << "v1的大小为" << v1.size() << endl;
    } 

    // 重新制定大小
    v1.resize(15, 100);
    printVector(v1);
    v1.resize(5);
    printVector(v1);

}


int main(void)
{
    test01();

    return 0;
}