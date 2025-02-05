package Day3.src.Task1;

public class Student {
    private String name;
    private int studentId;
    private double CGPA;
    public Student(String name, int studentId, double CGPA) {

        this.name = name;

        this.studentId = studentId;

        this.CGPA = CGPA;

    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getStudentId() {
        return studentId;
    }
    public void setStudentId(int studentId) {
        this.studentId = studentId;
    }
    public double getCGPA() {
        return CGPA;
    }
    public void setCGPA(double cGPA) {
        CGPA = cGPA;
    }
    
}
