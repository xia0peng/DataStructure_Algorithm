//
//  GetMaxNumber.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/16.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

int getMaxNumber(){
    
    int arry[] = {3,5,56,74,669,1,92,7,8};
    
    int len = sizeof(arry)/sizeof(arry[0]); // 数组长度
    
    int i,max,maxIndex = 0;
    
    max = arry[0]; // 假设一个数最大
    
    for(i = 1; i < len; i++)
    {
        if (arry[i] > max) {
            max = arry[i]; // 记录最大的数
            maxIndex = i;  // 记录最大的数的位置
        }
    }
    
    // 计算最大数的位数
    int time = 0;
    
    while (max > 0) {
        max /= 10;
        time++;
    }
    
    //输出结果
    printf("n-1.数组中最大的数为：%d\n    最大数的下标为：%d\n    最大数的位数为：%d\n",arry[maxIndex],maxIndex,time);
    
    printf("\n");
    
    return 0;
}
