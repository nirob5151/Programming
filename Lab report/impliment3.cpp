/*Write a program that would print the information (name, year of joining, salary, address) of three employees by
 creating a class named, Employee The output should be as follows:
Name         Year of joining         Address
Robert               1994          64C-WallsStreat
Sam                  2000          68D-WallsStreat
John                 1999          26B- WallsStreat
*/
#include <iostream>
#include <string>
#include <vector>
class Employee {
public:
    std::string name;
    int yearOfJoining;
    double salary;
    std::string address;
    Employee(std::string n, int yoj, double sal, std::string addr) {
        name = n;
        yearOfJoining = yoj;
        salary = sal;
        address = addr;
    }
};
int main() {
    std::vector<Employee> employees;
    int numberOfEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numberOfEmployees;
    for (int i = 0; i < numberOfEmployees; i++) {
        std::string name, address;
        int yearOfJoining;
        double salary;
        std::cout << "Employee " << i + 1 << " information:" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Year of joining: ";
        std::cin >> yearOfJoining;
        std::cout << "Salary: ";
        std::cin >> salary;
        std::cout << "Address: ";
        std::cin >> address;
        employees.push_back(Employee(name, yearOfJoining, salary, address));
    }
    std::cout << "Name\tYear of joining\t\tAddress" << std::endl;
    for (const Employee& employee : employees) {
        std::cout << employee.name << "\t\t" << employee.yearOfJoining  << "\t\t\t" << employee.address << std::endl;
    }
    return 0;
}

     