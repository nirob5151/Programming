package Day3.src.Task1;

public class Main {
    public static void main(String[] args) 
    {
        Student student1 = new Student("Arif", 101, 4.0);
        Student student2 = new Student("Maruf", 102, 3.8);
        
        System.out.println("Student Details");
        System.out.println(
                "Name: " + student1.getName() + " ID: " + student1.getStudentId() + " CGPA: " + student1.getCGPA());
        System.out.println(
                "Name: " + student2.getName() + " ID: " + student2.getStudentId() + " CGPA: " + student2.getCGPA());

       
        student1.setName("Mahee");
        student1.setStudentId(478);
        student2.setName("Arif");
        student2.setStudentId(495);
        student2.setCGPA(3.98);
        
        System.out.println("\nModified Student Details:");
        System.out.println(
                "Name: " + student1.getName() + " ID: " + student1.getStudentId() + " CGPA: " + student1.getCGPA());
        System.out.println(
                "Name: " + student2.getName() + " ID: " + student2.getStudentId() + " CGPA: " + student2.getCGPA());
    }
}