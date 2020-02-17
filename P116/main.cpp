/*
 * @Author: your name
 * @Date: 2020-02-17 22:04:36
 * @LastEditTime: 2020-02-17 22:04:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P116/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-17 22:04:36
 * @LastEditTime: 2020-02-17 22:04:36
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P116/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

class Person
{
    public:
    void showClassName() {
        cout << "this is a Person class" << endl;
    }
    void showPersonAge() {
        //报错的原因是因为传入的指针为空
        if (this == NULL) {
            return;
        }
        cout << "age = " << this->m_Age << endl;
    }
    int m_Age;
};

void test01()
{
    Person * p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main(void)
{
    test01();

    return 0;
}