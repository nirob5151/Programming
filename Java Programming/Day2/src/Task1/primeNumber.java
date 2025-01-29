package Task1;

import java.util.Scanner;

public class primeNumber 
{
    static boolean isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
    
        return true;
    }

    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        
        int n = input.nextInt();
        
        if (isPrime(n))  
            System.out.println(n + " is prime");
        else
            System.out.println(n + " is not prime");
    }
}
