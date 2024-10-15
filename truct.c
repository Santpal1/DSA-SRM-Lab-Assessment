#include <stdio.h>

struct Student{
    int reg_no;
    char name[101];
    char section;
    float cgpa;
};

int main(){
    int n;
    printf("Enter the no. of students data to be entered: ");
    scanf("%d", &n);
    struct Student s[n];
    for(int i = 0; i < n; i++){
        printf("Enter the last 4 digits of the register no. of Student %d: ", i + 1);
        scanf("%d\n", &s[i].reg_no);
    }
    printf("%d", s[0].reg_no);
    return 0;
}