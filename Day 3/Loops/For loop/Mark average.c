// Student mark average 
#include <stdio.h>

int main() {
    int n,i,marks,total=0;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the student mark--",i);
        scanf("%d",&marks);
        total+=marks;
    }
    float average =total%n;
    printf("the Average mark of student--%d",average);
    return 0;
}
