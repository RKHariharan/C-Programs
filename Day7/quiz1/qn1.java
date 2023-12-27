import java.util.Arrays;
import java.util.Scanner;

public class qn1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size :");
        int n = in.nextInt();
        int arr[] = new int[n];
        int ans[] = new int[n];
        System.out.println("Enter the elements for the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        int pr = 1, k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    pr = pr * arr[j];
                }
            }
            ans[i] = pr;
            pr = 1;
        }
        System.out.println(Arrays.toString(ans));
    }
}