//
//  MergeSortedList.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/6/9.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

/*
 * 定义两个临时变量指针，一个 p 指针指向第一个数组的第一个位置，一个 q 指针指向第二个数组的第一个位置，做一个循环的遍历来比较 p q 指针所指向对应位置的数谁大谁小
 * 如果 p 指针所指的数小，就把 p 指针所指的这个数填充到新的数组当中，同时移动指针 p，q指针不动
 * 再比较 q 指针和 p 指针所指向的内容谁大谁小，q 指针所指的小，将 q 指针所指的这个数填充到新的数组当中，同时移动指针 q，p指针不动
 * 直到某一个表移动到了结尾，剩下的一个表全部移动到合并结果之后 */

void mergeList(int a[], int aLen, int b[], int bLen, int result[])
{
    int p = 0; // 遍历数组a的指针
    int q = 0; // 遍历数组b的指针
    int i = 0; // 记录当前存储位置
    
    // 任一数组没有到达边界则进行遍历
    while (p < aLen && q < bLen) {
        // 如果a数组对应位置的值小于b数组对应位置的值
        if (a[p] <= b[q]) {
            // 存储a数组的值
            result[i] = a[p];
            // 移动a数组的遍历指针
            p++;
        }
        else{
            // 存储b数组的值
            result[i] = b[q];
            // 移动b数组的遍历指针
            q++;
        }
        // 指向合并结果的下一个存储位置
        i++;
    }
    
    // 如果a数组有剩余
    while (p < aLen) {
        // 将a数组剩余部分拼接到合并结果的后面
        result[i] = a[p++];
        i++;
    }
    
    // 如果b数组有剩余
    while (q < bLen) {
        // 将b数组剩余部分拼接到合并结果的后面
        result[i] = b[q++];
        i++;
    }

    printf("n-3.有序数组的合并：");
    
    for(int i=0;i<(aLen+bLen);i++)
        printf("%d",result[i]);
    
    printf("\n\n");
}
