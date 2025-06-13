#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numSubjects;
    float sum = 0, average;
    
    // Get the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    
    // Dynamically allocate array for marks
    float* marks = (float*)malloc(numSubjects * sizeof(float));
    
    // Check if memory allocation was successful
    if (marks == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    
    // Input marks for each subject
    printf("\nEnter marks for each subject (out of 100):\n");
    for(int i = 0; i < numSubjects; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        
        // Validate marks (should be between 0 and 100)
        while(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100: ");
            scanf("%f", &marks[i]);
        }
        
        // Add to sum
        sum += marks[i];
    }
    
    // Calculate average
    average = sum / numSubjects;
    
    // Display results
    printf("\n----- Results -----\n");
    printf("Marks in each subject:\n");
    for(int i = 0; i < numSubjects; i++) {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }
    printf("\nTotal Marks: %.2f out of %d", sum, numSubjects * 100);
    printf("\nAverage Marks: %.2f\n", average);
    
    // Display grade based on average
    printf("Grade: ");
    if(average >= 90) printf("A+");
    else if(average >= 80) printf("A");
    else if(average >= 70) printf("B");
    else if(average >= 60) printf("C");
    else if(average >= 50) printf("D");
    else printf("F");
    printf("\n");
    
    // Free dynamically allocated memory
    free(marks);
    
    return 0;
} 