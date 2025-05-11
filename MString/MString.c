//
// Created by 张陈宇 on 2025/5/11.
//
#include "MString.h"
#include <string.h>
#include <malloc.h>

// 创建MString对象
MString *mstring_new(char *str) {
    // 申请内存
    MString *mstr = (MString *) malloc(sizeof(MString));
    // 内存分配失败
    if (mstr == NULL) goto err;
    // 获取字符串长度
    int len = strlen(str);

    // 分配内存
    mstr->str = (char *) malloc(len + 1);
    // 内存分配失败
    if (mstr->str == NULL) goto err_free;

    // 复制字符串
    strcpy(mstr->str, str);
    // 设置字符串长度
    mstr->len = len;
    // 设置字符串结束符
    mstr->str[len] = '\0';


    // 返回字符串
    return mstr;
    err_free:
    free(mstr);
    err:
    return NULL;
}

// 销毁MString对象
void mstring_destroy(MString *mstr) {
    // 释放内存
    free(mstr->str);
    free(mstr);
}

// 设置MString对象的值
void mstring_set(MString *mstr, char *str) {

}

// 追加字符串到MString对象末尾
void mstring_append(MString *mstr, char *str) {

}

// 插入字符串到MString对象中
void mstring_insert(MString *mstr, char *str, int pos) {

}

// 删除MString对象中的字符串
void mstring_delete(MString *mstr, int pos, int len) {

}

// 获取MString对象中的字符串
char *mstring_get(MString *mstr) {
    return NULL;
}

// 获取MString对象中的字符串长度
int mstring_length(MString *mstr) {
    return 0;
}
