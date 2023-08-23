/* 编程设计打字游戏：
1)随机函数
A.srand((unsigned)time(NULL));以当前时间为准，设置随机种子 注意：此函数，在每次开始游
戏后调用一次即可
B.ch=rand(); 注意：rand()函数，每调用一次，产生一个随机数字

2)获得键值函数 ch=mygetch(); //无需按下回车，可直接获得键盘上按下的键值
还可以自己封装一个无阻塞，无回显的getch，实现如下：
#include <termios.h>
#include <unistd.h>
char mygetch()
{
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
     tcsetattr(STDIN_FILENO, TCSANOW, &newt);
     ch = getchar();
     tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
     return ch;
}
3)时间函数
start_time=time(NULL);
edn_time=time(NULL);
//可以返回系统当前时间，以秒为单位
4)system("clear");//清空屏幕
5)所需头文件
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    
    return 0;
}
