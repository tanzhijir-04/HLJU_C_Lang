#include <stdio.h>

float calculateAverage(float scores[], int count);

int main() {
    const int JUDGE_COUNT = 10; // 评委数量
    float scores[JUDGE_COUNT]; // 存储评委打分
    float totalScore = 0;
    int i; // 在循环外部声明变量

    // 输入评委打分
    printf("请输入10个评委的打分（十分制）：\n");
    for (i = 0; i < JUDGE_COUNT; ++i) {
        printf("评委%d的打分：", i + 1);
        scanf("%f", &scores[i]);
    }

    // 计算总分
    for (i = 0; i < JUDGE_COUNT; ++i) {
        totalScore += scores[i];
    }

    // 找出最高分和最低分的索引
    int maxIndex = 0, minIndex = 0;
    for (i = 1; i < JUDGE_COUNT; ++i) {
        if (scores[i] > scores[maxIndex]) {
            maxIndex = i;
        }
        if (scores[i] < scores[minIndex]) {
            minIndex = i;
        }
    }

    // 扣除最高分和最低分的总分
    totalScore -= scores[maxIndex];
    totalScore -= scores[minIndex];

    // 计算平均分
    float averageScore = totalScore / (JUDGE_COUNT - 2);

    // 输出结果
    printf("选手的最终得分（扣除一个最高分和一个最低分后的平均分）为：%.2f\n", averageScore);

    return 0;
}
