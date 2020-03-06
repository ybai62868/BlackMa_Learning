
# include <cstdio>
# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
# include <deque>

using namespace std;

class Person
{
    public:
        Person(string name, int score) {
            this->m_Name = name;
            this->m_Score = score;
        }

        string m_Name;
        int m_Score;
};

void createPerson(vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for (int i = 0;i < 5;i++){
        string name = "Player_";
        name += nameSeed[i];
        int score = 0;

        Person p(name, score);
        v.push_back(p);
    }
}

void test01(vector<Person>& v)
{
    for (vector<Person>::iterator it = v.begin();it!=v.end();it++){
        cout << (*it).m_Name << " " << (*it).m_Score << endl;
        cout << it->m_Name << " " << it->m_Score << endl;
    }
}

void printDeque(deque<int>& d)
{
    for(deque<int>::iterator dit = d.begin();dit!=d.end();dit++){
        cout << *dit << " ";
    }
    cout << endl;
}

void setScore(vector<Person>& v)
{
    // 打分
    for(vector<Person>::iterator it = v.begin();it!=v.end();it++) {
        deque<int>d;
        for(int i = 0;i < 10;i++) {
            int score = rand()%41 + 60;
            d.push_front(score);
        }
        // cout << it->m_Name << endl;
        // printDeque(d);
        // cout << endl;
        //排序
        sort(d.begin(), d.end());
        d.pop_front();
        d.pop_back();

        int sum = 0;
        for(deque<int>::iterator dit = d.begin();dit!=d.end();dit++) {
            sum += (*dit);
        }
        int avg = sum/d.size();
        it->m_Score = avg;
    }
}

void printAvg(vector<Person>& v)
{
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
        cout << it->m_Name << " " << it->m_Score << endl;
    }
}
int main(void)
{
    // 1. 创建5名选手
    vector<Person>v;
    createPerson(v);
    // test01(v);

    // 2. 给5名选手打分
    setScore(v);
    // 3. 显示平均分
    printAvg(v);
    return 0;
}