#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int (*a)[];
    typedef struct student
    {
        char name[10];
        int age;
        char sex;
    }STU;
    printf("%d\n", sizeof(STU));
    STU s1 = { 2, '女'};
    strcpy(s1.name, "小橙子");
    printf("s1-->age=%d,name=%s\n", s1.age,s1.name);
    STU s2 = s1;
    //数组不可以整体赋值，但是可以通过将数组放入结构体之后进行整体赋值
     printf("s2-->age=%d,name=%s", s2.age,s2.name);
     enum {FALSE, TRUE} BOOL;

     //共用体和结构体,内存不同，共用体从同一内存开始，只能保存一个成员，因为会产生覆盖。保存最后一次被赋值的成员，共用体只能初始化第一个成员，只需要提供一个初值，但不能省略花括号。节省存储空间，互斥但逻辑相关，构造混合的数据结构（利用数组）
     union sample
     {
         short i;
         char ch;
         float f;
     };
     //堆和栈，栈小堆大。堆内存是申请。malloc（size）申请不成功返回null.calloc（num,size）也申请，realloc(void* , new size)重新分配，有两个参数，size为40个字节大小。void*不是空指针，是可以指向任意类型的指针
     //释放free(void *p);
     printf("\nunion = %d", sizeof(union sample));
    return 0;
    //动态数组
    typedef struct
    {
        int *array;
        int length;
    }arr;
    struct stu
    {
        int a;
        int b;
        long v;
        struct stu *pt;//合法
        //struct stu pt;//不合法,必须有指针
    };
    struct node
    {
        //数据域
        //指针域
    };
}
