
# include <cstdio>
# include <iostream>

using namespace std;

double f(double x)
{
    return x+1;
}

double g(double x) 
{
    return x+2;
}

double _h(double x)
{
    return f(x) + g(x);
}


int main(void)
{
    double (*h)(double) = &_h;
    double res = h(3.3);
    cout << res << endl; 
    return 0;
}