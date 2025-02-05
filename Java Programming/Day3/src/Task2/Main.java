package Day3.src.Task2;

public class Main {
    
    public static void main(String[] args) 
    {
        Employee employee1 = new Employee("Maruf", 467, 10.5, 100.50);
        Employee employee2 = new Employee("Bulbul", 455, 10.5, 100.50);
        
        System.out.println("Name:" + employee1.getName() + " ID:" + employee1.getEmployeeId() + " Total Salary: $"
                + employee1.calculateSalary());
        System.out.println();
        System.out.println("Name:" + employee2.getName() + " ID:" + employee2.getEmployeeId() + " Total Salary: $"
                + employee2.calculateSalary());

    }

}

