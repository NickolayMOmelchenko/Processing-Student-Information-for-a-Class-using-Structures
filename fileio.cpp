#include "student.h"    // Including the structure file
#include <fstream>      // Library to work with files
#include <iostream>
using namespace std;

// Utility function to process the text file and return
// an array to structure variable
Student* ReadFile(char *fileName, int *size)
{
    // line variable will scan each line of the text file
    string line;
    // inputFile is the identifier of ifstream class
    ifstream inputFile;
    // Open the text file
    inputFile.open(fileName);

    // Check if the file has been successfully open
    if(inputFile.is_open())
    {
        // Insert code here
        getline(inputFile, line);
        *size = stoi(line);
        Student *items = (Student*) malloc(*size * sizeof(Student));
        float num = 0;
        for(int i = 0; i < *size; i++)
        {
            getline(inputFile, line);
            items[i].fullName = line;

            getline(inputFile, line);
            num = stod(line);
            items[i].quizMarks = num;

            getline(inputFile, line);
            num = stod(line);
            items[i].midtermMarks = num;

            getline(inputFile, line);
            num = stod(line);
            items[i].finaltermMarks = num;
        }
    

        // Close the file
        inputFile.close();

        // Change the following line to return the dyanamic
        // array to structure that you are going to build above
        return items;
    }
    else // Something went wrong opening the file
    {
        // Return NULL to exit out the program
        // from the main function
        cerr << "Unable to open the file.\n";
        return NULL;
    }
}