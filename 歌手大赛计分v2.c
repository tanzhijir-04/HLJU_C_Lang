#include <stdio.h>

float calculateAverage(float scores[]);

int main(){
    float scores[10];
    float totalScore = 0;
    int i;
    printf("input the scores of 10 judge:\n");
    //�������
    for (i=0;i<10;++i){
        printf("������ί%d�ķ���",i+1);
        scanf("%f",&score[i])
    }

    for (i = 0;i < 10;++i){
        printf("-���ڼ����ܷ�-");
        totalScore += scores[i];
    }
    //�ҳ���߷֡���ͷ֡�

    int min = 0, max = 0;

    for(i = 0;i < 10;++i){
        if scores[min] < scores[i]{
            min = i;
        }
        if scores[max] > socres[i]{
            max = i;
        }
    }
    //�����ܷ�
    totalScore -= socores[min];
    totalScore -= socores[max];

    //ƽ����
    float avg = totalScore / 8;
    printf("�����ǣ�%.2f/n",avg);

}
