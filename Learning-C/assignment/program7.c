#include <stdio.h>
#include <string.h>

struct student  // Fixed spacing
{
    int id;
    char name[30];  // Fixed spacing
    float percentage;
};

int main()  // Changed to int main()
{
    int i;
    struct student record[3]; // Declaring an array of struct student
    
    // 1st student's record
    record[0].id = 1;  // Added missing ID assignment
    strcpy(record[0].name, "Raju");
    record[0].percentage = 86.5;
    
    // 2nd student's record
    record[1].id = 2;  // Fixed incorrect `strcopy[1].id = 2;`
    strcpy(record[1].name, "Surendren");
    record[1].percentage = 90.5;
    
    // 3rd student's record
    record[2].id = 3;
    strcpy(record[2].name, "Thiyagu");
    record[2].percentage = 81.5;
    
    // Printing student records
    for (i = 0; i < 3; i++)
    {
        printf("Records of Student : %d \n", i + 1);
        printf("ID is : %d\n", record[i].id);
        printf("Name is : %s\n", record[i].name);
        printf("Percentage is : %.2f\n\n", record[i].percentage); // Fixed %d → %f
    }
    
    return 0; // Added return statement
}