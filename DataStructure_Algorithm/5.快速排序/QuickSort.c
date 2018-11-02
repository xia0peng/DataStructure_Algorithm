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



/* 补充 */
/*
如数组int arry[] = {6,1,2,7,9};，6在左，9在右  我们将6作为基数。
假设从左边开始（与正确程序正好相反）
于是i 就会移动到现在的 数字 7 那个位置停下来，而  j 原来在 数字 9 那个位置 ，因为

while(arr[j]>=temp&&i<j)

于是，j 也会停留在数字7 那个位置，于是问题来了。当你最后交换基数6与7时，不对呀！！。
问题在于当我们先从在边开始时，那么 i 所停留的那个位置肯定是大于基数6的，而在上述例子中，为了满足 i<j 于是 j也停留在7的位置
但最后交换回去的时候，7就到了左边，不行，因为我们原本 交换后数字6在边应该是全部小于6，右边全部大于6.但现在不行了。
于是，我们必须从右边开始，也就是从基数的对面开始。
*/



