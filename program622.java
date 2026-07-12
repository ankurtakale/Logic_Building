import java.util.Scanner;

class program622
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

/*
    Decimal             Hexadecimal             Binary
        0                   0                   0000    
        1                   1                   0001                       
        2                   2                   0010
        3                   3                   0011
        4                   4                   0100
        5                   5                   0101
        6                   6                   0110
        7                   7                   0111
        8                   8                   1000
        9                   9                   1001
        10                  a                   1010
        11                  b                   1011
        12                  c                   1100
        13                  d                   1101
        14                  e                   1110
        15                  f                   1111

*/