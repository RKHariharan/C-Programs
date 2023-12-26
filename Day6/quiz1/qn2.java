import java.util.Scanner;

public class qn2 
{
    public static void main(String[] args) 
    {
        int n1, n2;
        char op;
        int ans = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1: ");
        n1 = sc.nextInt();
        System.out.println("Enter number 2: ");
        n2 = sc.nextInt();
        System.out.println("Enter operator: ");
        op = sc.next().charAt(0);
        switch (op) 
        {
            case '+':
             {
                ans = n1 + n2;
                break;
            }
            case '-': 
            {
                ans = n1 - n2;
                break;
            }
            case '*': 
            {
                ans = n1 * n2;
                break;
            }
            case '/':
             {
                if (n2 == 0) {
                    System.out.println("Invalid input");
                    break;
                }
                ans = n1 / n2;
                break;
            }
            default:
                System.out.println("Invalid operator");
        }
        System.out.println("Answer: " + ans);
    }

}