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
    STU s1 = { 2, 'Ů'};
    strcpy(s1.name, "С����");
    printf("s1-->age=%d,name=%s\n", s1.age,s1.name);
    STU s2 = s1;
    //���鲻�������帳ֵ�����ǿ���ͨ�����������ṹ��֮��������帳ֵ
     printf("s2-->age=%d,name=%s", s2.age,s2.name);
     enum {FALSE, TRUE} BOOL;

     //������ͽṹ��,�ڴ治ͬ���������ͬһ�ڴ濪ʼ��ֻ�ܱ���һ����Ա����Ϊ��������ǡ��������һ�α���ֵ�ĳ�Ա��������ֻ�ܳ�ʼ����һ����Ա��ֻ��Ҫ�ṩһ����ֵ��������ʡ�Ի����š���ʡ�洢�ռ䣬���⵫�߼���أ������ϵ����ݽṹ���������飩
     union sample
     {
         short i;
         char ch;
         float f;
     };
     //�Ѻ�ջ��ջС�Ѵ󡣶��ڴ������롣malloc��size�����벻�ɹ�����null.calloc��num,size��Ҳ���룬realloc(void* , new size)���·��䣬������������sizeΪ40���ֽڴ�С��void*���ǿ�ָ�룬�ǿ���ָ���������͵�ָ��
     //�ͷ�free(void *p);
     printf("\nunion = %d", sizeof(union sample));
    return 0;
    //��̬����
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
        struct stu *pt;//�Ϸ�
        //struct stu pt;//���Ϸ�,������ָ��
    };
    struct node
    {
        //������
        //ָ����
    };
}
