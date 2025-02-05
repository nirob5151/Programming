package Day3.src.Task2;

public class Employee {
    private String name;
    private int employeeId;
    private double hourlyWage;
    private double totalHoursWorked;


    public Employee(String name, int employeeId, double hourlyWage,double totalHoursWorked) {

        this.name = name;
        this.employeeId = employeeId;
        this.hourlyWage = hourlyWage;
        this.totalHoursWorked=totalHoursWorked;

    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getEmployeeId() {
        return employeeId;
    }

    public void setEmployeeId(int employeeId) {
        this.employeeId = employeeId;
    }
    public double getHourlyWage() {
        return hourlyWage;
    }
    public void setHourlyWage(double hourlyWage) {
        this.hourlyWage = hourlyWage;
    }
    public double getTotalHoursWorked() {
        return totalHoursWorked;
    }
    public void setTotalHoursWorked(double totalHoursWorked) {
        this.totalHoursWorked = totalHoursWorked;
    }
    public double calculateSalary(){
        return(hourlyWage * totalHoursWorked);
    }

    

}
