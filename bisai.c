#include <stdio.h>
#include <stdlib.h>

struct node {
    int left;
    int right;
};

int main() {
    int N, M;
    scanf("%d", &N);

    struct node students[1000010] = {0};

    students[1].left = 0;
    students[1].right = 0;
    for(int i = 2; i <= N; i++) {
        int k, p;
        scanf("%d %d", &k, &p);
        
        if(p == 0) {
            students[i].right = k;
            students[i].left = students[k].left;
            
            if(students[k].left != 0) {
                students[students[k].left].right = i;
            }
            
            students[k].left = i;
        }
        else {
            students[i].left = k;
            students[i].right = students[k].right;
            
            if(students[k].right != 0) {
                students[students[k].right].left = i;
            }
            
            students[k].right = i;
        }
    }
    
    int head = 1;
    while(students[head].left != 0) {
        head = students[head].left;
    }
    
    scanf("%d", &M);
    for(int i = 0; i < M; i++) {
        int x;
        scanf("%d", &x);
        
        if(!(students[x].left == -1 && students[x].right == -1)) {
            int left_stu = students[x].left;
            int right_stu = students[x].right;
            
            if(left_stu != 0) {
                students[left_stu].right = right_stu;
            }
            
            if(right_stu != 0) {
                students[right_stu].left = left_stu;
            }
            
            if(x == head) {
                head = right_stu;
            }
            
            students[x].left = -1;
            students[x].right = -1;
        }
    }
    
    int current = head;
    while(current != 0) {
        printf("%d ", current);
        current = students[current].right;
    }
    
    return 0;
}
