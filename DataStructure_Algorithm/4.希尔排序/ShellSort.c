//
//  ShellSort.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/10.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>


/**
 使用该算法，应首先为待排序元素序列选择一个不大于元素个数的增量，或者也称步长(step)。其本质是给元素序列分组。

 现在我们有如下一组数据：
 
 96，107, 145, 137, 106, 142, 146, 134, 32, 86
 
 一般我们会选择元素个数的一半作为步长(这里元素个数为10，所以步长取5)。其本质是给这个序列分为5(5就是元素的下标之差)组：
 
 (96--142,107--146，145--134,137--32,106--86，所以这几组元素都是对应关系。)。并让步长在循环中每次变为上次的一半。
 
 其次，应该从下标等于步长处开始遍历直至到达末尾。并使用一个临时变量(temp)保存每次遍历到的值，为以后的插入排序做准备.
 
 然后，就是遍历数组啦，按照一定规则(升序还是降序，根据需要，这里以升序为例)，用上面的临时变量temp来和对应位置元素比较
 */


int shellSort(){
    
    int arry[] = {3,5,6,9,4,1,2,7,8};
    
    int len = sizeof(arry)/sizeof(arry[0]);
    
    int i,j,temp;
    
    for(int step = len/2; step > 0; step /= 2) // step就是步长，并让之在循环中每次减少一半
    {
        for (i = step; i < len; i++)
        {
            temp = arry[i]; // 保存每次遍历的元素，为之后的插入排序做准备
            for (j = i - step; j>=0; j-=step) // 遍历结束条件就是下标<0或者不满足规则（升序，降序）
            {
                if (arry[j]>temp)
                    arry[j+step] = arry[j]; // 如果对应位置上的元素满足规则
                else
                    break ;
            }
            arry[j+step] = temp; // 最后把临时变量放到对应的位置
        }
    }
    
    printf("4.希尔排序：");
    
    for(i=0;i<len;i++)
        printf("%d",arry[i]);
    
    printf("\n\n");
    
    return 0;
}




