#include<stdio.h>
int main(){
    int korean=5;
    int math=0,english=0,total=0;
    float average;
    int science=95, history=0;
    char grade='A';
    total=korean+math+english+science+history;
    average=total/5.0;
    printf("total:%d,averge:%.1f,grade:%c\n",total, average,grade);

    return 0;
}