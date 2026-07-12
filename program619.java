import java.util.Scanner;

class program619
{
    public static void main(String A[]) 
    {
        int No = 0;
        int digit = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        No = sobj.nextInt();

        while(No != 0)
        {
            digit = No % 2;
            System.out.printf("%d",digit);
            No = No / 2;
        }
    }
}