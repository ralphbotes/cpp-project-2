# Student Record Class Application

## Overview

This project defines a class `Student` that represents a student's record and provides functionalities to set and retrieve student details, and calculate the student's weighted average score. The class replaces the previous structure type and includes both input and output operations.

## Features

- **Member Variables:**
  - `name`: A string that holds the student's name.
  - `quiz1`: An integer representing the score of the first quiz (out of 10).
  - `quiz2`: An integer representing the score of the second quiz (out of 10).
  - `midtermExam`: An integer representing the score of the midterm exam (out of 100).
  - `finalExam`: An integer representing the score of the final exam (out of 100).

- **Constructors:**
  - Default constructor: Initializes `name` to an empty string and all scores to 0.

- **Mutators (Setters):**
  - Functions to set each of the member variables to a value given as an argument (`setName()`, `setQuiz1()`, `setQuiz2()`, `setMidtermExam()`, `setFinalExam()`).

- **Accessors (Getters):**
  - Functions to retrieve the values stored in each member variable (`getName()`, `getQuiz1()`, `getQuiz2()`, `getMidtermExam()`, `getFinalExam()`).

- **Member Functions:**
  - `float calculateAverage()`: Calculates and returns the student's weighted average numeric score for the entire course.

- **Application Program (main()):**
  - Reads the student's name and scores from the keyboard.
  - Outputs the student's record and average numeric score for the entire course.

## Files

- `Student.h`: Header file containing the class definition and function prototypes.
- `Student.cpp`: Implementation file containing the function definitions.
- `main.cpp`: Application program demonstrating the usage of the `Student` class.

## Usage

1. **Compile the Program:**

   Open Code::Blocks, create a new project, and add the `Student.h`, `Student.cpp`, and `main.cpp` files to the project. Compile the project.

2. **Run the Program:**

   Execute the compiled program. The program will prompt you to enter the student's name and scores.

3. **Input the Student's Details:**

    Enter the following details when prompted:
    Student name: Johnny Applemac
    Quiz 1: 7
    Quiz 2: 5
    Midterm exam: 65
    Final exam: 73

4. **View the Results:**

The program will display the student's record and the calculated average numeric score for the entire course.

## Notes

- The quizzes are marked out of 10, and the midterm and final exams are marked out of 100.
- The final exam counts for 50% of the grade, the midterm counts for 25%, and the two quizzes together count for 25%. The quiz scores are normalized to a percentage before they are averaged in.
