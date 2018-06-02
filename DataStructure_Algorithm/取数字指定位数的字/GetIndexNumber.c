//
//  GetIndexNumber.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/26.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

// 取数字指定位数的字
// d = 1 代表取个位，= 2 代表取是十位，= 3 代表取百位，依此论推
void getIndexNumber(int num, int d){
    
    int pow = 1;
    while (--d > 0) {
        pow *= 10;
    }
    
    printf("n-2.取数字指定位数的字：%d", (num / pow % 10));
    
    printf("\n\n");
    
    // 可以将此函数的返回值设为 int 将结果返回
    // return num / pow % 10;
}
