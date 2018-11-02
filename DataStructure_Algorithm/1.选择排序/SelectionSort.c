//
//  SelectionSort.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/8.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h> 

int selectionSort(){
    
    int arry[] = {3,5,6,9,4,1,2,7,8};
    
    int len = sizeof(arry)/sizeof(arry[0]); // 数组长度
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    int i,minIndex,temp;
    
    for (i=0; i<len; i++)
    {
        // 寻找[i len）区间最小值
        minIndex = i;
        
        for (int j = i +1; j<len; j++)
        {
            if (arry[j]<arry[minIndex]) {
                
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            temp=arry[i];          //循环结束后，交换两个标号下的元素的值
            arry[i]=arry[minIndex];
            arry[minIndex]=temp;
        }
    }

    printf("1.选择排序：");

    for(i=0;i<len;i++)
        printf("%d",arry[i]);
    
    printf("\n\n");

    return 0;
}
