# include <cstdio>
# include <iostream>

using namespace std;

class AbstractDrinking
{
    public:
        //煮水
        virtual void Boil() = 0;

        //冲泡
        virtual void Brew() = 0;

        //倒入杯中
        virtual void PourInCup() = 0;
        
        //加入辅助作料
        virtual void PutSomething() = 0;

        void MakeDrink() {
            Boil();
            Brew();
            PourInCup();
            PutSomething();
        }
};

class Coffee: public AbstractDrinking
{
    public:
        virtual void Boil() {
            cout << "冲水" << endl;
        }
        virtual void Brew() {
            cout << "冲泡咖啡" << endl;
        }
        virtual void PourInCup() {
            cout << "倒入杯中" << endl;
        }
        virtual void PutSomething() {
            cout << "加入糖和牛奶" << endl;
        }
};

class tea: public AbstractDrinking
{
    public:
        virtual void Boil() 
        {
            cout << "冲水" << endl;
        }
        virtual void Brew() {
            cout << "冲泡茶叶" << endl;
        }
        virtual void PourInCup() {
            cout << "倒入杯中" << endl;
        }
        virtual void PutSomething() {
            cout << "加入柠檬" << endl;
        }

};

void doWork(AbstractDrinking * abs)
{
    abs->MakeDrink();
}

void test01()
{
    doWork(new Coffee);
    cout << "-----------------------" << endl;
    doWork(new tea);

}


int main(void)
{
    test01();


    return 0;
}