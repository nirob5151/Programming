package Day3.src.Task3;

public class Main {
    public static void main(String[] args) {


        Vehicle[] vehicles = new Vehicle[2];


        vehicles[0] = new Vehicle("Car", "ABC-123", 15.50, 10);
        vehicles[1] = new Vehicle("Bike", "XYZ-789", 5.50, 5);


        for (int i = 0; i <= 1; i++) {
            System.out.println("Vehicle Type: " + vehicles[i].getVehicleType() + ", License Plate: "
                    + vehicles[i].getLicensePlate() + ", Total Rental Cost: $" + vehicles[i].calculateRentalCost());
            System.out.println();
        }


    }

}
