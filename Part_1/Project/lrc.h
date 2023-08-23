#ifndef __LRC_H__ 
#define __LRC_H__

struct lrc
{                      // 定义一个链表串起时间和歌词
    int time;          // 时间
    char lrc_buf[200]; // 歌词
    int lrc_num;       // 第几句歌词
    struct lrc *next;  // 链表的指针
};

typedef struct lrc LRC;                                  // 结构体重定义
extern char *open_file();                                // 打开文件函数
extern int strtok_deal(char *f, char **song_line);       // 歌词切割函数
extern void four_deal(char **song_line, char *four[50]); // 对于前四行特殊处理
extern LRC *init();                                      // 确定链表头指针
extern void insert(LRC *p, LRC **head);
extern LRC *divide_deal(char **song_line, int n); // 分开时间与歌词
extern void time_delay(int sec);                  // 时间延迟
extern void set_fg_color(int color);              // 设置前景颜色
extern void clear_screen(void);                   // 清屏函数
extern void set_bg_color(int color);              // 设置背景颜色
extern void song_print(LRC *head, char **four);   // 歌词打印+效果

#endif
