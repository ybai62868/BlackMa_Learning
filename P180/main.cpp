
# include <cstdio>
# include <iostream>
# include "person.hpp"

using namespace std;

void test01()
{
    Person<string, int>p("abc", 199);
    p.showPerson();
}
int main(void)
{
    test01();
    return 0;
}