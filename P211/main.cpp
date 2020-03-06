# include <cstdio>
# include <iostream>
# include <stack>

using namespace std;


int main(void)
{
    stack<int>s;

    for(int i = 1;i <= 5;i++) {
        int temp = i * 10;
        s.push(temp);
    }
    cout << s.size() << endl;
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }  
    cout << s.size() << endl;


    return 0;
}