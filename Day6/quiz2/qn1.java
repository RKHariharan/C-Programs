import java.util.Arrays;
import java.util.Scanner;

public class qn1 {

    public static void main(String[] args) {
        int size, odd = 0, even = 0, o = 0, e = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of the array:");
        size = sc.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter the numbers :");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        int[] oddarr = new int[odd];
        int[] evenarr = new int[even];
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                oddarr[o++] = arr[i];
            } else {
                evenarr[e++] = arr[i];
            }
        }
        System.out.println("Odd Array : " + Arrays.toString(oddarr));
        System.out.println("Even Array : " + Arrays.toString(evenarr));

    }

    // static boolean function(int num) {
    // if (num < 10) {
    // if (num == 1 || num == 7)
    // return true;
    // return false;
    // }
    // int a = num;
    // int sum = 0;
    // while (a > 0) {
    // int b = a % 10;
    // sum += (b * b);
    // a /= 10;
    // }
    // return function(sum);
    // }

}