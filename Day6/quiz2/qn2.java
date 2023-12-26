import java.util.Arrays;
import java.util.Scanner;

public class qn2 {
    public static void main(String[] args) {
        String str, ans = "";
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String:");
        str = sc.nextLine();
        char[] arr = str.toCharArray();
        int count = 1;
        char temp = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == temp) {
                count++;
            } else {
                ans = ans + Character.toString(temp);
                ans = ans + Integer.toString(count);
                temp = arr[i];
                count = 1;
            }
        }
        ans = ans + Character.toString(temp);
        ans = ans + Integer.toString(count);
        System.out.println(ans);
    }
}