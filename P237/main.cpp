# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

class MyAdd
{
    public:
        int operator()(int v1, int v2)
        {
            return v1+v2;
        }
};

class MyPrint
{
    public:
        MyPrint() {
            this->cnt = 0;
        }
        void operator() (string test) {
            cout << test << endl;
            cnt++;
        }
        int cnt;
};

void doPrint(MyPrint& mp, string test)
{
    mp(test);
}
void test03()
{
    MyPrint myprint;
    doPrint(myprint, "hello world");
}

int main(void)
{
    MyAdd myadd;
    cout << myadd(10, 10) << endl;
    MyPrint myprint;
    myprint("hello world");
    myprint("hello world");
    myprint("hello world");
    myprint("hello world");
    cout << myprint.cnt << endl;
    test03();

    return 0;
}