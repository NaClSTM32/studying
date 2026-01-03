#include <stdio.h>
int main(){
    struct Student {
        int id;
        char name[30];
        int math;
        int physics;
        int English;
        int average;
    };

    struct Student stu[10];
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        scanf("%d %s %d %d %d", &stu[i].id, stu[i].name, &stu[i].math, &stu[i].physics, &stu[i].English);
        stu[i].average = (stu[i].math + stu[i].physics + stu[i].English) / 3;
    }

    for(int i = 0;i < n;i++){
        printf("The average score of the %dth student is %d.\n",i+1,stu[i].average);
    }
    return 0;
}