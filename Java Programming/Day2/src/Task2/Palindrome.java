package Task2;

import java.util.Scanner;

public class Palindrome 
{
   
    static boolean cPalinddrome(int n)
    {

        int reverse =0;
         int temp=n;
         while (temp!=0)
         {
            reverse= (reverse*10)+(temp%10);
            temp= temp/10;
            
         }
         return (reverse==n);
    }
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int n = input.nextInt();
        if (cPalinddrome(n)) 
        {
            System.out.println(n + " Is Palindrom");
        }
        else
        {
            System.out.println(n +" not Palindrome");
        }
    }
   
}
