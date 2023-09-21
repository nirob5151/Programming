#include <stdio.h>

int main() {
    int students, i;
    
    printf("Number of Students: ");
    scanf("%d", &students);
    
    int marks[students];
    
    for (i = 0; i <students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    int min = marks[0];
    
    for (i = 1; i <students; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("Mark Range: %d - %d\n", min, max);
    
    return 0;
}
