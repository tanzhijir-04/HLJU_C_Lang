#include <stdio.h>

float calculateAverage(float scores[], int count);

int main() {
    const int JUDGE_COUNT = 10; // ��ί����
    float scores[JUDGE_COUNT]; // �洢��ί���
    float totalScore = 0;
    int i; // ��ѭ���ⲿ��������

    // ������ί���
    printf("������10����ί�Ĵ�֣�ʮ���ƣ���\n");
    for (i = 0; i < JUDGE_COUNT; ++i) {
        printf("��ί%d�Ĵ�֣�", i + 1);
        scanf("%f", &scores[i]);
    }

    // �����ܷ�
    for (i = 0; i < JUDGE_COUNT; ++i) {
        totalScore += scores[i];
    }

    // �ҳ���߷ֺ���ͷֵ�����
    int maxIndex = 0, minIndex = 0;
    for (i = 1; i < JUDGE_COUNT; ++i) {
        if (scores[i] > scores[maxIndex]) {
            maxIndex = i;
        }
        if (scores[i] < scores[minIndex]) {
            minIndex = i;
        }
    }

    // �۳���߷ֺ���ͷֵ��ܷ�
    totalScore -= scores[maxIndex];
    totalScore -= scores[minIndex];

    // ����ƽ����
    float averageScore = totalScore / (JUDGE_COUNT - 2);

    // ������
    printf("ѡ�ֵ����յ÷֣��۳�һ����߷ֺ�һ����ͷֺ��ƽ���֣�Ϊ��%.2f\n", averageScore);

    return 0;
}
