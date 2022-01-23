#include "student.h"    // Including the structure file

#include <iostream>
using namespace std;

void AssignTechEmail(Student *items, int totalStudents)
{
    
    // Insert code here to assign tech emails
    for (int i = 0; i < totalStudents; i++)
    {
    string n = items[i].fullName;
    char firstI = items[i].fullName.at(0);
    int pos = n.find(" ");
    string lastN = n.substr(pos + 1);
    items[i].techEmail = firstI + lastN + "@tntech.edu";
    }
}

void ComputeTotalMarks(Student *items, int totalStudents)
{
    // Insert code here to compute the total marks obtained
    // by each student
    
    for (int i = 0; i < totalStudents; i++)
    {
        items[i].totalMarks = items[i].quizMarks + items[i].midtermMarks + items[i].finaltermMarks;
    }
}

void ComputeLetterGrade(Student *items, int totalStudents)
{
    for (int i = 0; i < totalStudents; i++)
    {
        if (items[i].totalMarks >= 90)
        {
            items[i].letterGrade = "A";
        }
        else if(items[i].totalMarks >= 80 && items[i].totalMarks < 90)
        {
            items[i].letterGrade = "B";
        }
        else if(items[i].totalMarks >= 70 && items[i].totalMarks < 80)
        {
            items[i].letterGrade = "C";
        }
        else if(items[i].totalMarks >= 60 && items[i].totalMarks < 70)
        {
            items[i].letterGrade = "D";
        }
        else if(items[i].totalMarks >= 50 && items[i].totalMarks < 60)
        {
            items[i].letterGrade = "E";
        }
        else if(items[i].totalMarks < 50)
        {
            items[i].letterGrade = "F";
        }
    }
}