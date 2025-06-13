#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float sum = 0, average;
    
    // Get the number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    // Declare array dynamically
    float* marks = new float[numSubjects];
    
    // Input marks for each subject
    cout << "\nEnter marks for each subject (out of 100):\n";
    for(int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for Subject " << (i + 1) << ": ";
        cin >> marks[i];
        
        // Validate marks (should be between 0 and 100)
        while(marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Please enter marks between 0 and 100: ";
            cin >> marks[i];
        }
        
        // Add to sum
        sum += marks[i];
    }
    
    // Calculate average
    average = sum / numSubjects;
    
    // Display results
    cout << "\n----- Results -----\n";
    cout << "Marks in each subject:\n";
    for(int i = 0; i < numSubjects; i++) {
        cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
    }
    cout << "\nTotal Marks: " << sum << " out of " << (numSubjects * 100);
    cout << "\nAverage Marks: " << average << endl;
    
    // Display grade based on average
    cout << "Grade: ";
    if(average >= 90) cout << "A+";
    else if(average >= 80) cout << "A";
    else if(average >= 70) cout << "B";
    else if(average >= 60) cout << "C";
    else if(average >= 50) cout << "D";
    else cout << "F";
    cout << endl;
    
    // Free dynamically allocated memory
    delete[] marks;
    
    return 0;
} 