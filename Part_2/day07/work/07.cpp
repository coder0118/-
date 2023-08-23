// 假设有一个基类 Animal 和两个派生类 Cat 和 Dog，它们的定义如下 : class Animal
// {
// public:
//     virtual ~Animal() {}
// };

// class Cat : public Animal
// {
// public:
//     void meow()
//     {
//         std::cout << "Meow!" << std::endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         std::cout << "Woof!" << std::endl;
//     }
// };

// 请完成以下任务：

// 1) 在 main 函数中创建一个 Animal 类型的指针，并使用 dynamic_cast 将其转换为 Cat 类型的指针。如果转换成功，调用 meow 函数让猫发出"Meow!"声音；如果转换失败，输出转换失败的提示信息。

// 2) 在 main 函数中创建一个 Animal 类型的指针，并使用 dynamic_cast 将其转换为 Dog 类型的指针。如果转换成功，调用 bark 函数让狗发出"Woof!"声音；如果转换失败，输出转换失败的提示信息。

// 3) 在 main 函数中创建一个 Cat 类型的指针，并使用 dynamic_cast 将其转换为 Animal 类型的指针。输出转换成功的提示信息。

// 4) 在 main 函数中创建一个 Dog 类型的指针，并使用 dynamic_cast 将其转换为 Animal 类型的指针。输出转换成功的提示信息。

// 【提示】可以尝试
// try
// {
// }
// catch (int e)
// {
// }
// 异常尝试捕获语法确定转换是否成功。