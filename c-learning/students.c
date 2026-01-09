#include <stdio.h>
#include <stdlib.h>

struct Student 
{
    char ID[20];
    char name[30];
    int age;
    double score;
};

void CreateFile(FILE *fp,int n, struct Student stu[]);
void ReadOut(FILE *fp,int n, struct Student stu[]);
void Sort(struct Student stu[], int n);

int main(void){
    struct Student stu[40];
    FILE *fp; // 在这里声明其实没有必要，在函数内部声明即可
    int n;
    printf("Enter the number of students: \n");
    scanf("%d", &n);
    CreateFile(fp,n,stu);
    ReadOut(fp,n,stu);
    Sort(stu,n);
    printf("After sorting by score:\n");
    for(int i = 0; i < n;i++){
        printf("Student %d: ID=%s, Name=%s, Age=%d, Score=%.2lf\n", i+1, stu[i].ID, stu[i].name, stu[i].age, stu[i].score);
    }
    return 0;
}

void CreateFile(FILE *fp, int n, struct Student stu[]){
    fp = fopen("students.dat","wb");
    if (fp == NULL){
        printf("Failed to open file students.dat\n");
        exit(1);
    }
    for (int i = 0; i < n;i++){
        printf("Enter student %d info (ID name age score): ", i+1);
        scanf("%s %s %d %lf", stu[i].ID, stu[i].name, &stu[i].age, &stu[i].score);
        fwrite(( const void *)&stu[i], sizeof(struct Student), 1, fp);
    }
    fclose(fp);
}

void ReadOut(FILE *fp,int n, struct Student stu[]){
    fp = fopen("students.dat", "rb");
    if (fp == NULL){
        printf("Failed to open file students.dat\n");
        exit(1);
    }
    fread(( void *)stu, sizeof(struct Student), n, fp);
    for (int i = 0; i < n; i++){
        printf("Student %d: ID=%s, Name=%s, Age=%d, Score=%.2lf\n", i+1, stu[i].ID, stu[i].name, stu[i].age, stu[i].score);
    }
    fclose(fp);
}

void Sort(struct Student stu[], int n){// Bubble sort
    struct Student temp;
    int t;
    for(int i = 0;i < n-1;i++){
        for(int j = i + 1;j < n ; j++){
            if (stu[i].score < stu[j].score){
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}