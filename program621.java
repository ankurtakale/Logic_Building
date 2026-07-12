import java.util.Scanner;

class program621
{
    public static void main(String A[]) 
    {
        int No = 0;
        int digit = 0;
        int Countone = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        No = sobj.nextInt();

        while(No != 0)
        {
            digit = No % 2;
            
            Countone = Countone + digit;
            
            No = No / 2;
        }

        System.out.println("Count of 1 is : "+Countone);
    }
}