/*
 * @Author: your name
 * @Date: 2020-02-25 22:24:36
 * @LastEditTime: 2020-02-25 22:24:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P127/main.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-02-25 22:24:36
 * @LastEditTime: 2020-02-25 22:24:36
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /glow/Users/apple/Desktop/BlackMa_Learning/P127/main.cpp
 */
# include <cstdio>
# include <iostream>

using namespace std;

// 普通实现界面


// JAVA页面
// class Java
// {
//     public:
//     void header() {
//         cout << "首页，公开课，登录，注册" << endl;
//     }
//     void footer() {
//         cout << "帮助中心，交流合作，站内地图" << endl;
//     }
//     void left() {
//         cout << "Java, Python, C++" << endl;
//     }
//     void content() {
//         cout << "Java 学科视频" << endl;
//     }
// };

//继承实现页面
class BasePage
{
    public:
    void header() {
        cout << "首页，公开课，登录，注册" << endl;
    }
    void footer() {
        cout << "帮助中心，交流合作，站内地图" << endl;
    }
    void left() {
        cout << "Java, Python, C++" << endl;
    }

};

// Python页面
class Python: public BasePage
{
    public:
    void content() {
        cout << "Python学科视频" << endl;
    }
};

// Java页面
class Java: public BasePage
{
    public:
    void content() {
        cout << "Java学科视频" << endl;
    }

};

// C++页面
class CPP: public BasePage
{
    public:
    void content() {
        cout << "Cpp学科视频" << endl;
    }
};



void test01()
{
    Java ja;
    cout << "Java下载视频页面如下: " << endl;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "+++++++++++++++++++++" << endl;

    CPP cp;
    cout << "C++下载视频页面如下: " << endl;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
    cout << "+++++++++++++++++++++" << endl;

    Python py;
    cout << "Python下载视频页面如下: " << endl;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "+++++++++++++++++++++" << endl;
    
}

int main(void)
{
    test01();
    return 0;
}