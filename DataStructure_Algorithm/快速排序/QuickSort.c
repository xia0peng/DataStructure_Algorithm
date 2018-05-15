//
//  QuickSort.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/15.
//  Copyright © 2018年 student. All rights reserved.
//
// http://developer.51cto.com/art/201403/430986.htm 内含详细步骤讲解
//

#include <stdio.h>

int arry[] = {3,5,6,9,4,1,2,7,8}; // 定义全局变量，这两个变量需要在子函数中使用
int len = sizeof(arry)/sizeof(arry[0]);

void realQuickSort(int left,int right)
{    
    int i,j,t,temp;
    
    if(left>right)
        return;
        
    temp=arry[left]; //temp中存的就是基准数
    i=left;
    j=right;
    
    while(i!=j)
    {
        //顺序很重要，要先从右边开始找
        while(arry[j]>=temp && i<j)
            j--;
        //再找右边的
        while(arry[i]<=temp && i<j)
            i++;
        //交换两个数在数组中的位置
        if(i<j)
        {
            t=arry[i];
            arry[i]=arry[j];
            arry[j]=t;
        }
    }
    //最终将基准数归位
    arry[left]=arry[i];
    arry[i]=temp;
    
    realQuickSort(left,i-1);//继续处理左边的，这里是一个递归的过程
    realQuickSort(i+1,right);//继续处理右边的 ，这里是一个递归的过程
}


void quickSort()
{
    realQuickSort(0,len);
    
    //输出排序后的结果
    printf("5.快速排序：");
    
    for(int i=0;i<len;i++)
        printf("%d",arry[i]);
    
    printf("\n\n");
}
