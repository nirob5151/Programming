/*Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
 Include member functions to calculate the grade based on the marks and display the student’s information.
 Also, print the maximum mark with the help of a Maxi() function.*/
#include <iostream>

#include <string>

class Student {
  private: std::string name;
  std::string studentClass;
  int rollNumber;
  double marks;

  public:
    // Constructor
    Student(const std::string & studentName,
      const std::string & sClass, int rollNum, double studentMarks): name(studentName),
  studentClass(sClass),
  rollNumber(rollNum),
  marks(studentMarks) {}

  // Member function to calculate the grade based on marks
  std::string calculateGrade() {
    if (marks >= 90) {
      return "A+";
    } else if (marks >= 80) {
      return "A";
    } else if (marks >= 70) {
      return "B";
    } else if (marks >= 60) {
      return "C";
    } else {
      return "D";
    }
  }

  // Member function to display student information
  void displayInformation() {
    std::cout << "\n\nName: " << name << std::endl;
    std::cout << "Class: " << studentClass << std::endl;
    std::cout << "Roll Number: " << rollNumber << std::endl;
    std::cout << "Marks: " << marks << std::endl;
    std::cout << "Grade: " << calculateGrade() << std::endl;
  }
};

int main() {
  // Create a student object
  std::string studentName;
  std::string sClass;
  int rollNum;
  double studentMarks;
  std::cout << "Student details: ";
  std::cout << "\nName: ";
  std::getline(std::cin, studentName);

  std::cout << "Class: ";
  std::getline(std::cin, sClass);

  std::cout << "Roll number: ";
  std::cin >> rollNum;

  std::cout << "Marks (0-100): ";
  std::cin >> studentMarks;

  Student student(studentName, sClass, rollNum, studentMarks);

  // Display student information
  student.displayInformation();

  return 0;
}
