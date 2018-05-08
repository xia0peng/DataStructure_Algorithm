//
//  FirstNoRepetition.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/6.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int FirstNoRepetition(){
    
    const char *str="akdadaddads";
    
    int i;
    
    int count[26]={0};
    
    int index[26]={0}; // 注意int数组初始化赋值时，如果写成={-1}是不能所有元素初始化为-1的，只有第一个元素是-1，其余为默认值0
    
    for(i=0;i<strlen(str);i++)
    {
        count[str[i]-'a']++; //记录该字母出现的次数
        
        //index[str[i]-'a']=i;
        
        if (index[str[i]-'a']==0) {
            index[str[i]-'a']=i; // 记住该字母第一次出现的索引
        }
    }
    
    int pos = (int)strlen(str);
    
    for(i=0;i<26;i++)
    {
        if(count[i]==1) // 找到之出现一次的字母
        {
            if ( index[i]!=-1 && index[i]<pos) // 在只出现一次的子母中找出索引值最小的即可
            {
                pos = index[i];
            }
        }
    }
    
    if (pos<strlen(str)) {
        printf("n.找到字符串中第一个不重复的字符：%c\n\n",str[pos]);
    }
    
    return 0;
}

