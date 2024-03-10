#include <stdio.h>

float calculateAverage(float scores[]);

int main(){
    float scores[10];
    float totalScore = 0;
    int i;
    printf("input the scores of 10 judge:\n");
    //输入分数
    for (i=0;i<10;++i){
        printf("输入评委%d的分数",i+1);
        scanf("%f",&score[i])
    }

    for (i = 0;i < 10;++i){
        printf("-正在计算总分-");
        totalScore += scores[i];
    }
    //找出最高分、最低分。

    int min = 0, max = 0;

    for(i = 0;i < 10;++i){
        if scores[min] < scores[i]{
            min = i;
        }
        if scores[max] > socres[i]{
            max = i;
        }
    }
    //计算总分
    totalScore -= socores[min];
    totalScore -= socores[max];

    //平均分
    float avg = totalScore / 8;
    printf("均分是：%.2f/n",avg);

}
