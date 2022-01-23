/*
Author: Mykola Omelchenko
Project Title: CSC 1300-001 Programming Assignment 4
*/


// Include all the header files required to run
// the driver code
#include "fileio.h"
#include "reports.h"
#include "utils.h"
#include "student.h"

#include <iostream>
using namespace std;

// Driver program
int main(int argc, char *argv[])
{
    // Declare a variable to store the total number of students
    int totalStudentNum;
    char Filename[] = "input.txt";
    // Check if the name of the file is passed
    // Create a dynamic array to stucture variable with
    // the help of ReadFile function
    Student *items = ReadFile(Filename, &totalStudentNum);
    // Call the function to assign tech emails to each student

    AssignTechEmail(items, totalStudentNum);

    // Call the function to compute the total marks for every student

    ComputeTotalMarks(items, totalStudentNum);

    // Call the function to compute the letter grade for every student

    ComputeLetterGrade(items, totalStudentNum);
    
    // Call the function to display all the students' information

    StudentInformation(items, totalStudentNum);

    // Call the function to display best performance in quiz

    BestPerformanceInQuiz(items, totalStudentNum);
    
    // Call the function to display best performance in midterm

    BestPerformanceInMidterm(items, totalStudentNum);
    
    // Call the function to display best performance in finals

    BestPerformanceInFinalterm(items, totalStudentNum);
    
    // Call the function to display best performance based on total marks obtained

    BestPerformance(items, totalStudentNum);
    
    // Call the function to display the class average for all the marks

    ClassAverage(items, totalStudentNum); 
    
    // Deallocate the dynamic memory allocated
    
    free(items);
    
    return 0;
}