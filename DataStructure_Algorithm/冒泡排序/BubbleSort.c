//
//  BubbleSort.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/9.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

// 思路一：第一种，score[j] 和 score[j+1] 比较 如果 前者比后者小，把前者和后者调换顺序，两两调换后一轮下来 最小的会被排到最后去，以此类推
int bubbleSort(){
    
    int arry[] = {3,5,6,9,4,1,2,7,8};
    
    int len = sizeof(arry)/sizeof(arry[0]);
    
    int i,j,temp;
     
    for (i=0; i<len-1; i++) // 内部循环执行len-1次
    {
        for (j=0; j<len-i-1; j++)
        {
            if (arry[j] < arry[j+1])
            {
                temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
            }
        }
    }
    
    printf("3.冒泡排序思路一：");
    
    for(i=0;i<len;i++)
        printf("%d",arry[i]);
    
    printf("\n\n");
    
    return 0;
}

// 思路二：用8 和 7 比较，在和 2 比较 在和 1 比较以此进行，发现9是最大的，吧他排到第一位(index=0的位置)，然后i=1,也就是第二轮，就不用看下标为0的9了因为他是老大，然后接着比较。
int bubbleSortTwo(){
    
    int arry[] = {3,5,6,9,4,1,2,7,8};
    
    int len = sizeof(arry)/sizeof(arry[0]);
    
    int i;
    
    for(i =0;i < len - 1;i++)
    {
        for(int j=(len-2);j >= i;j--)
        {
            if(arry[j] < arry[j+1])
            {
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
            }
        }
    }
    
    printf("  冒泡排序思路二：");
    
    for(i=0;i<len;i++)
        printf("%d",arry[i]);
    
    printf("\n\n");
    
    return 0;
}
