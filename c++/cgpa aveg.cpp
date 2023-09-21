#include <iostream>
#include <string>
using namespace std;
class Student {
private:
string name;
int id;
double cgpa;
public:
Student(string n, int i, double c) 
{
    name=n;
    id=i;
    cgpa=c;
}
double getCGPA() {
return cgpa;
}
};
double averageCGPA( Student& s1,  Student& s2) {
return (s1.getCGPA() + s2.getCGPA()) / 2.0;
}
double averageCGPA( Student& s1,  Student& s2,  Student& s3) {
return (s1.getCGPA() + s2.getCGPA() + s3.getCGPA()) / 3.0;
}
int main() {
Student student1("Alice", 1, 3.8);
Student student2("Bob", 2, 3.6);
Student student3("Charlie", 3, 4.0);
double avg1 = averageCGPA(student1, student2);
cout << "Average CGPA of two students: " << avg1 << std::endl;
double avg2 = averageCGPA(student1, student2, student3);
cout << "Average CGPA of three students: " << avg2 << std::endl;
return 0;
}
