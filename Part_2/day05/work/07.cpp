// 假设有两个类，Shape（形状）和 Rectangle（矩形）。
// Shape 类具有一个成员函数 getArea()，用于计算形状的面积。
// Rectangle 类继承自 Shape 类，并添加了两个成员变量 width（宽度）和 height（高度）。
// 请在给定的类定义中完成代码，并实现 Rectangle 类的 getArea() 函数来计算矩形的面积。
// 【提示】Shape的类设计如下，表示为抽象类（getArea() 是纯虚函数）：
//     class Shape
// {
// public:
//     virtual double getArea() const = 0;
// };