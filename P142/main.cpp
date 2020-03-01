# include <cstdio>
# include <iostream>

using namespace std;

class CPU
{
    public:
        virtual void calculate() = 0;
};

class VideoCard
{
    public:
        virtual void display() = 0;
};

class Memory
{
    public:
        virtual void storage() = 0;
};

class Computer
{
    public:
        Computer(CPU * cpu, VideoCard * vc, Memory * mem) {
            m_cpu = cpu;
            m_vc = vc;
            m_mem = mem;
        }

        // 提供工作的函数
        void work() {
            //让零件工作起来，调用接口
            m_cpu->calculate();
            m_vc->display();
            m_mem->storage();
        }
        ~Computer() {
            if (m_cpu != NULL) {
                delete m_cpu;
                m_cpu = NULL;
            }
            if (m_vc != NULL) {
                delete m_vc;
                m_vc = NULL;
            }
            if (m_mem != NULL) {
                delete m_mem;
                m_mem = NULL;
            }
        }
    private:
        CPU * m_cpu;
        VideoCard * m_vc;
        Memory * m_mem;
};

class IntelCPU: public CPU
{
    public:
        void calcualte() {
            cout << "Intel的CPU开始计算了" << endl; 
        }
};

class IntelVideoCard: public VideoCard
{
    public:
        virtual void display() {
            cout << "Intel的显卡开始显示了" << endl;
        }
};

class IntelMemory: public Memory
{
    public:
        virtual void storage() {
            cout << "Intel的内存开始存储了" << endl;
        }
};

void test01()
{
    // 第一台电脑零件
    CPU * intelCpu = new IntelCPU;
    VideoCard * intelCard = new IntelVideoCard;
    Memory * intelMem = new IntelMemory;

    // 创建第一台电脑
    Computer * computer1 = new Computer(intelCpu, intelCard, intelMem);
    computer1->work();
    delete computer1;
    
}

int main(void)
{
    test01();
    return 0;
}