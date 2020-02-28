/*
 * @Author: your name
 * @Date: 2020-02-28 20:35:15
 * @LastEditTime: 2020-02-28 20:35:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit  
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P144/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-28 20:35:15
 * @LastEditTime: 2020-02-28 20:35:15
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P144/main.cpp
 */
# include <cstdio>
# include <iostream>
# include <fstream>

using namespace std;

void test01()
{
    // 1.包含头文件

    // 2.创建流对象
    ifstream ifs;
    // 3.打开文件，判断是否打开成功
    ifs.open("test.txt", ios::in); 
    if (!ifs.is_open()) {
        cout << "文件打开失败了" << endl;
        return;
    }

    // 4.读数据
    // method#1
    // char buf[1024] = {0};
    // while(ifs >> buf) {
    //     cout << buf << endl;
    // }

    // method#2
    // while(ifs.getline(buf, sizeof(buf))) {
    //     cout << buf << endl;
    // }

    //method#3
    // string buf;
    // while (getline(ifs, buf)) {
    //     cout << buf << endl;
    // }

    //method#4
    char c;
    while ((c = ifs.get()) != EOF ) {
        cout << c;
    }


    // 5.关闭文件
    ifs.close();

}

int main(void)
{
    test01();

    return 0;
}