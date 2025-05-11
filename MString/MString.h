//
// Created by 张陈宇 on 2025/5/11.
//

#ifndef STUDENT_SYSTEM_MSTRING_H
#define STUDENT_SYSTEM_MSTRING_H

// MString对象
typedef struct {
    char *str;
    int len;
} MString;


// 创建MString对象
MString *mstring_new(char *str);

// 销毁MString对象
void mstring_destroy(MString *mstr);

// 设置MString对象的值
void mstring_set(MString *mstr, char *str);

// 追加字符串到MString对象末尾
void mstring_append(MString *mstr, char *str);

// 插入字符串到MString对象中
void mstring_insert(MString *mstr, char *str, int pos);

// 删除MString对象中的字符串
void mstring_delete(MString *mstr, int pos, int len);

// 获取MString对象中的字符串
char *mstring_get(MString *mstr);

// 获取MString对象中的字符串长度
int mstring_length(MString *mstr);






#endif //STUDENT_SYSTEM_MSTRING_H
