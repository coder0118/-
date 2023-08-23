// 请编写电视机类，电视机有开机和关机状态，有音量，有频道，提供音量操作的方
// 法，频道操作的方法。由于电视机只能逐一调整频道，不能指定频道，增加遥控类，
// 遥控类除了拥有电视机已有的功能，再增加根据输入调台功能。
// 提示：遥控器可作为电视机类的友元类

#include <iostream>
using namespace std;

class Remote;

class Television
{
    friend class Remote;

    enum
    {
        OFF,
        ON
    };
    enum
    {
        min_v,
        max_v = 100
    };
    enum
    {
        min_ch = 1,
        max_ch = 255
    };

private:
    int isOpen;
    int Volume;
    int Channel;

public:
    Television()
    {
        isOpen = OFF;
        Volume = 66;
        Channel = min_ch;
    }

    void Open()
    {
        if (isOpen == OFF)
        {
            isOpen = ON;
        }
        else
        {
            isOpen = OFF;
        }
        showInfo();
    }

    void VolumeUp()
    {
        if (Volume != max_v)
        {
            Volume++;
        }
        showInfo();
    }

    void VolumeDown()
    {
        if (Volume != min_v)
        {
            Volume--;
        }
        showInfo();
    }

    void channelUp()
    {
        if (Channel != max_v)
        {
            Channel++;
        }
        showInfo();
    }

    void channelDown()
    {
        if (Channel != min_v)
        {
            Channel--;
        }
        showInfo();
    }

    void showInfo()
    {
        if (isOpen)
        {
            cout << "Statues is ON"<< " Channel : " << Channel << " Volume :" << Volume << endl;
        }else{
            cout<<"Statues is OFF"<<endl;
        }
    }
};

class Remote
{
private:
    Television *mTV;

public:
    Remote(Television *tv)
    {
        mTV = tv;
    }
    void setChannel(int n)
    {
        if (n >= mTV->min_ch && n <= mTV->Channel)
        {
            mTV->Channel = n;
        }
        mTV->showInfo();
    }

    void Open()
    {
        mTV->Open();
    }

    void VolumeUp()
    {
        mTV->VolumeUp();
    }

    void VolumeDown()
    {
        mTV->VolumeDown();
    }

    void ChannelUp()
    {
        mTV->channelUp();
    }

    void ChannelDown()
    {
        mTV->channelDown();
    }
};

void test1()
{
    Television t1;
    t1.Open();
    t1.channelUp();
    t1.VolumeUp();
    t1.VolumeDown();
    t1.Open();
}

void test2()
{
    
}

int main()
{
    test1();
    return 0;
}