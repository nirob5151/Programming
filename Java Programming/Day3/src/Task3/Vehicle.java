package Day3.src.Task3;

public class Vehicle {
    private String vehicleType;
    private String licensePlate;
    private double hourlyRate;
    private double hoursRented;

    public Vehicle(String vehicleType, String licensePlate, double hourlyRate, double hoursRented) {
        this.vehicleType = vehicleType;
        this.licensePlate = licensePlate;
        this.hourlyRate = hourlyRate;
        this.hoursRented = hoursRented;
    }

    public String getVehicleType() {
        return vehicleType;
    }


    public void setVehicleType(String vehicleType) {
        this.vehicleType = vehicleType;
    }


    public String getLicensePlate() {
        return licensePlate;
    }


    public void setLicensePlate(String licensePlate) {
        this.licensePlate = licensePlate;
    }


    public double getHourlyRate() {
        return hourlyRate;
    }
    public double getHoursRented() {
        return hoursRented;
    }


    public void setHoursRented(double hoursRented) {
        this.hoursRented = hoursRented;
    }
    public double calculateRentalCost() {
        return hourlyRate * hoursRented;
    }

}
