// 以下为我们的手机收到的短信的格式，请利用指针数组与strtok函数对其解析 
// char msg_src[] = {"+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI"};
// 解析结果：
// 日期：98 / 10 / 01 时间：18 : 22 : 11 发件人：13466630259 内容：ABCdefGHI
//     参考以下的函数名字以及参数，完成相应的要求 int
//     msg_deal(char *msg_src, char *msg_done[], char *str) 
//     参数1：待切割字符串的首地址 参数2：指针数组：存放切割完字符串的首地址 
//     参数3：切割字符 返回值：切割的字符串总数量