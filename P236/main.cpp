# include <cstdio>
# include <iostream>
# include <vector>
# include <string>
# include <map>


using namespace std;

# define CEHUA 0
# define MEISHU 1
# define YANFA 2

class Worker
{
    public:
        string m_Name;
        int m_Salary;
};

void test01(vector<Worker>& v)
{
    for(vector<Worker>::iterator it = v.begin();it!=v.end();it++) {
        cout << it->m_Name << " " << it->m_Salary << endl;
    }
    cout << endl;
}
void createWorker(vector<Worker>& v)
{
    string nameSeed = "ABCDEFGHJI";
    for(int i = 0;i < 10;i++) {
        Worker worker;
        worker.m_Name = "Staff_";
        worker.m_Name += nameSeed[i];
        worker.m_Salary = rand() % 10000 + 10000;
        v.push_back(worker);
    }
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
    for (vector<Worker>::iterator it = v.begin();it!=v.end();it++) {
        int deptId = rand() % 3; 
        m.insert(make_pair(deptId, *it));
    }
}
void showWorkerByGroup(multimap<int, Worker>& m)
{
    cout << "策划部门成员" << endl;
    multimap<int, Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA);
    int index = 0;
    while (index < count) {
        cout << pos->second.m_Name << " " << pos->second.m_Salary << endl;
        index++;
        pos++;
    }
    
    cout << "美术部门" << endl;
    // multimap<int, Worker>:: iterator pos = m.find(MEISHU);
    count = m.count(MEISHU);
    index = 0;
    while (index < count) {
        cout << pos->second.m_Name << " " << pos->second.m_Salary << endl;
        index++;
        pos++;
    }

    cout << "研发部门" << endl;
    count = m.count(YANFA);
    cout << count << endl;
    index = 0;
    while (index < count) {
        cout << pos->second.m_Name << " " << pos->second.m_Salary << endl;
        index++;
        pos++;
    }
}

int main(void)
{
    // 1。 创建员工
    vector<Worker>vWorker;
    createWorker(vWorker);
    test01(vWorker);

    // 2. 员工分组
    multimap<int, Worker>mWorker;
    setGroup(vWorker, mWorker);
    showWorkerByGroup(mWorker);

    return 0;
}