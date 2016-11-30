#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int priority_array[100];
int fcfs_array[100];
int sjf_array[100];
int rr_array[100];

float avg_wait = 0.0;
float variance = 0.0;

int main(int argc, char** argv) {

    // Read output files

    // Calculate average wait time
    // calculate avg for big_array[0-99]
    // calculate avg for big_array[100-199]
    // calculate avg for big_array[200-299]
    // calculate avg for big_array[300-399]

    // Calculate variance
    // calculate variance for big_array[0-99]
    // calculate variance for big_array[100-199]
    // calculate variance for big_array[200-299]
    // calculate variance for big_array[300-399]

    // Display lowest wait time

    // Display lowest variance

    return (EXIT_SUCCESS);

}

//------------------------------------------------------------------------------
// This function will read input from a file. Its parameter includes the record
// array which the input will be stored into. 
void readFile()
{    

    char fileName[100];
    FILE *filePtr;

    printf("Enter the name of the file you would like to open: ");
    scanf("%100s", fileName); 
    filePtr = fopen(fileName, "r"); 
    
    
    if(filePtr == NULL)
    {
        printf("Could not open file. \n");
    }
    
    else
    {
        // Storing items from file into an array
        for(int i = 0; i < 100; i++)
        {
            fscanf(filePtr, "%s %d %d %d", name, arrivalTime, waitTime);
        }
    }

    fclose(filePtr);
}

float calculateWaitTimes()
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}
