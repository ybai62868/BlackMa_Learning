/*
 * @Author: your name
 * @Date: 2020-02-18 15:48:04
 * @LastEditTime: 2020-02-18 15:48:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P118/main.cpp
 */
# include <cstdio>
# include <iostream>
# include <string>

using namespace std;

class Building
{
    friend void goodGay( Building * building );
    public:
    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;
    private:
    string m_BedRoom;
};

void goodGay( Building * building )
{
    cout << "好基友的全局函数正在访问: " << building->m_SittingRoom << endl;
    cout << "好基友的全局函数正在访问: " << building->m_BedRoom << endl;

}

void test01()
{
    Building build;
    goodGay(&build);
}

int main(void)
{
    test01();

    return 0;
}
