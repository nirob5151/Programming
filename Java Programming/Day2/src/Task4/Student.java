package Task4;

public class Student {


    String name;
    int age;
    String studentID;
    double grade;


    public void setName(String name) {
        this.name = name;
    }


    public String getName() {
        return name;
    }


    public void setAge(int age) {
        this.age = age;
    }


    public int getAge() {
        return age;
    }


    public void setStudentID(String studentID) {
        this.studentID = studentID;
    }


    public String getStudentID() {
        return studentID;
    }


    public void setGrade(double grade) {
        this.grade = grade;
    }


    public double getGrade() {
        return grade;
    }


    public void displayInfo() {
        System.out.println(name + " " + age + " " + studentID + " " + grade);
    }


    public void displayGrade() {
        if (grade < 50 && grade >= 0) {
            System.out.println("Failed");
        } else {
            System.out.println("Passed");
        }
    }
}
