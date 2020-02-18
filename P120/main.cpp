
# include <iostream>
# include <string>

using namespace std;

class Building;
class GoodGay
{
    public:
    GoodGay();
    void visit();
    void visit2();
    Building * building;
};

class Building
{
    friend void GoodGay::visit2();
    public:
    Building();
    string m_SittingRoom;
    private:
    string m_BedRoom;

};


Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    //创建建筑物的对象
    building = new Building;
 
}

void GoodGay::visit()
{
    cout << "好基友类正在访问: " << building->m_SittingRoom << endl;
    // cout << "好基友类正在访问: " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "好基友类正在访问: " << building->m_SittingRoom << endl;
    cout << "好基友类正在访问: " << building->m_BedRoom << endl;

}

void test01()
{
    GoodGay gay;
    gay.visit();
    gay.visit2();
}

int main(void)
{
    test01();
    return 0;
}