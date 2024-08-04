#include <iostream>
#include <string>

using namespace std;

// Class for Student marks
class Student
{
    private:
        std::string name;
        int quiz1, quiz2, midTermExam, finalExam;

    public:
        // Constructor
        Student() {
            name = "";
            quiz1 = 0;
            quiz2 = 0;
            midTermExam = 0;
            finalExam = 0;
        }

        // Setter for name
        void setName(const std::string& newName) {
            name = newName;
        }

        // Getter for name
        std::string getName() const {
            return name;
        }

        // Setter for quiz1
        void setQuiz1Result(const int& value) {
            quiz1 = value;
        }

        // Getter for quiz1
        int getQuiz1() const {
            return quiz1;
        }

        // Setter for quiz2
        void setQuiz2Result(const int& value) {
            quiz2 = value;
        }

        // Getter for quiz2
        int getQuiz2() const {
            return quiz2;
        }

        // Setter for midTermExam
        void setMidTermExamResult(const int& value) {
            midTermExam = value;
        }

        // Getter for midTermExam
        int getMidTermExam() const {
            return midTermExam;
        }

        // Setter for finalExam
        void setFinalExamResult(const int& value) {
            finalExam = value;
        }

        // Getter for finalExam
        int getFinalExam() const {
            return finalExam;
        }

        // Member function that calculates and returns the student�s weighted average
        void calculateWeightAverage() {
            double quizAverage, quizWeightResult, finalExamWeightResult, midTermWeightResult, weightedAverage;
            // The final exam counts for 50% of the grade
            finalExamWeightResult = finalExam * 0.50;

            // The midterm counts for 25%
            midTermWeightResult = midTermExam * 0.25;

            /*
                Instructions:
                    � The two quizzes together count for a total of 25%
                    � Normalize the quiz scores. They should be converted to
                    a percentage before they are averaged in.
                Note: quiz1 + quiz2
                    The result of two integers divided will result in also an int
                    where the fractional part is discarded. Issues will occur.

                Fix: Change one of the values data type to double.
            */
            double quiz1Double = quiz1;
            quizAverage = ((quiz1Double + quiz2) / 20) * 100;
            quizWeightResult = quizAverage * 0.25;

            // Calculate the weighted average
            weightedAverage = finalExamWeightResult + midTermWeightResult + quizWeightResult;

            cout << "Student name: " << name << "\n"
            << "Applemac Quiz 1: " << quiz1 << "\n"
            << "Quiz 2: " << quiz2 << "\n"
            << "Midterm exam: " << midTermExam << "\n"
            << "Final exam: " << finalExam << "\n"
            << "Average numeric score: " << weightedAverage << "%" << "\n";
        }
};

int main()
{
    std::string name;
    int quiz1, quiz2, midTermExam, finalExam;

    // Create a Student
    Student student;

    // Get and set the student's name
    cout << "Please enter student Name: ";
    cin >> name;
    student.setName(name);

    // Get and set the student's quiz1
    cout << "Please enter Quiz1 result: ";
    cin >> quiz1;
    student.setQuiz1Result(quiz1);

    // Get and set the student's quiz2
    cout << "Please enter Quiz2 result: ";
    cin >> quiz2;
    student.setQuiz2Result(quiz2);

    // Get and set the student's midTermExam
    cout << "Please enter Mid Term result: ";
    cin >> midTermExam;
    student.setMidTermExamResult(midTermExam);

    // Get and set the student's finalExam
    cout << "Please enter Final Exam result: ";
    cin >> finalExam;
    student.setFinalExamResult(finalExam);

    cout << "\n" << endl;

    // Do calculation and display
    student.calculateWeightAverage();

    return 0;
}
