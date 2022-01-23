#include "student.h"    // Including the structure file
#include <iostream>
using namespace std;

// The function to display all the students' information
// Details -> in the header file
void StudentInformation(Student *items, int totalStudents)
{
    for(int i = 0; i < totalStudents; i++)
       {
            cout << "Name: " << items[i].fullName << endl;
            cout << "Email: " << items[i].techEmail << endl;
            cout << "Quiz: " << items[i].quizMarks << endl;
            cout << "Miderm: " << items[i].midtermMarks << endl;
            cout << "Final Term: " << items[i].finaltermMarks << endl;
            cout << "Total: " << items[i].totalMarks << endl;
            cout << "Grade: " << items[i].letterGrade << endl;
       }
}
// The function to display one student information who achieved
// the best score in quiz
// Details -> in the header file
void BestPerformanceInQuiz(Student *s, int totalStudents)
{
    float highestQuiz = 0;
    string name;
    string email;
    for (int i = 0; i < totalStudents; i++)
    {
        if(s[i].quizMarks > highestQuiz)
        {
            highestQuiz = s[i].quizMarks;
            name = s[i].fullName;
            email = s[i].techEmail;
        }
    }
    cout << "\nBest performance on the Quiz" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Quiz Marks: " << highestQuiz << endl;
}

// The function to display one student information who achieved
// the best score in midterm
// Details -> in the header file
void BestPerformanceInMidterm(Student *s, int totalStudents)
{
    float highestMidterm = 0;
    string name;
    string email;
    for (int i = 0; i < totalStudents; i++)
    {
        if(s[i].midtermMarks > highestMidterm)
        {
            highestMidterm = s[i].midtermMarks;
            name  = s[i].fullName;
            email = s[i].techEmail;
        }
    }
    cout << "\nBest performance on the Midterm" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Midterm Marks: " << highestMidterm << endl;
}

// The function to display one student information who achieved
// the best score in final term
// Details -> in the header file
void BestPerformanceInFinalterm(Student *s, int totalStudents)
{
    float highestFinalterm = 0;
    string name;
    string email;
    for (int i = 0; i < totalStudents; i++)
    {
        if(s[i].finaltermMarks > highestFinalterm)
        {
            highestFinalterm = s[i].finaltermMarks;
            name  = s[i].fullName;
            email = s[i].techEmail;
        }
    }
    cout << "\nBest performance on the Finalterm" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Finalterm Marks: " << highestFinalterm << endl;
}

// The function to display one student information who achieved
// the best score based on total marks
// Details -> in the header file
void BestPerformance(Student *s, int totalStudents)
{
    float highestPerformance = 0;
    string name;
    string email;
    for (int i = 0; i < totalStudents; i++)
    {
        if(s[i].totalMarks > highestPerformance)
        {
            highestPerformance = s[i].totalMarks;
            name  = s[i].fullName;
            email = s[i].techEmail;
        }
    }
    cout << "\nBest performance on the Total Marks" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Total Marks: " << highestPerformance << endl << endl;
}

// The function to display the class average of quizzes, midterm,
// final term, and total marks.
// Details -> in the header file
void ClassAverage(Student *s, int totalStudents)
{
    double totalAverage = 0;
    double quizAverage = 0;
    double midtermAverage = 0;
    double finaltermAverage = 0;

    for (int i =0; i < totalStudents; i++)
    {
        totalAverage += s[i].totalMarks;
        quizAverage += s[i].quizMarks;
        midtermAverage += s[i].midtermMarks;
        finaltermAverage += s[i].finaltermMarks;
    }

    totalAverage = totalAverage / totalStudents;
    quizAverage = quizAverage / totalStudents;
    midtermAverage = midtermAverage / totalStudents;
    finaltermAverage = finaltermAverage / totalStudents;

    cout << "Class Average" << endl;
    cout << "Quiz: " << quizAverage << endl;
    cout << "Miderm: " << midtermAverage << endl;
    cout << "Final Term: " << finaltermAverage << endl;
    cout << "Total: " << totalAverage << endl;
}