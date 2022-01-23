Author: Mykola Omelchenko
mmomelchen42@tntech.edu


Project Title:
CSC 1300-001 Programming Assignment 4: Processing Student Information for a Class using Structures


Description:
The program will take the name of a text file as the command line argument from the user. A sample text file “input.txt” is given 
for experimentations. The first line of the text file states how many students’ information are there in the text file. In other words, 
it states the size of the dynamic array to structure (named “Student”) that you are expected to create. The size could be any value 
between 1 to 1,000. Then, the following number of lines will contain four pieces of information per student, which include “full name”, 
“quiz marks”, “midterm marks”, and “final term marks”. Each student’s full name is a string that contains two parts: first name and last 
name – a space separating both parts. The marks are in double formatted.The structure, defined as “Student”, has several members: 
“full name”, “tech email”, “quiz marks”, “midterm marks”, “final term marks”, “total marks”, and “letter grade”. You are expected to 
generate the tech email based on the respective student’s name. For example, if the name of the student is “John Doe”, then his email 
is going to be “JDoe@tntech.edu” (where we’ll take the first character of first name and the entire part of the last name, followed by
 @tntech.edu). In addition, you are required to compute the “total marks”

 (1) display the students’ information, 
 (2) display the student’s information who has done the best in quiz, 
 (3) display the student’s information who has done the best in midterm, 
 (4) display the student’s information who has done the best in final term, 
 (5) display the student’s information who has done the best in total marks, and 
 (6) display the class average for quiz, midterm, final term, and total marks obtained. 
    All these tasks are also to be done in functions, which are defined for you in “reports.h” file. Please implement the 
    function in “reports.cpp” file.


Prerequisites:
<iostream>
"fileio.h"
"utils.h"
"student.h"
"reports.h"



Execution:

Step 1. Unzip the folder and then go to the folder
Step 2. Run your terminal from the folder
Step 3. Compile the code using the following command
g++ -o program4 main.cpp utils.cpp fileio.cpp reports.cpp
Step 4. Execute the code using the following command
./program4 input.txt 
Step 5. After successful execution and evaluating the program, please remove the executable file using the following command
rm program1