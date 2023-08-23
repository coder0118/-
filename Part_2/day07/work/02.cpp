// 请简述static_cast、dynamic_cast和reinterpret_cast的区别，并给出示例代码进行说明。

// static_cast:静态转换
//                 用于基类和派生类之间的转换

class Base{};
class Deriver:public Base{};

Base *base = new Base();
Deriver *d=static_cast<Deriver *>(base);
// 报错



// dynamic_cast:动态转换
//                 用于类间转换，向下转换时，具有类型检查功能，比较安全

Deriver *d = new Deriver;
Base *base = static_cast<Base *>(d);

// reinterpret_cast:重解释转换
//                 最不安全，直接将类型转换

int n = 10;
char *p=reinterpret_cast<char *>(n);