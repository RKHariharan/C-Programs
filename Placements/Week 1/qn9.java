package placementcode;
import java.util.Arrays;
public class qn9 {
    public static void main(String[] args)
    {
        int[] arr = {1,3,4,5,9,6};
        
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length;j++)
            {
                if(arr[j] == arr[i]+1)
                {
                    System.out.print(arr[j]);
                    break;
                }
            }
            System.out.print("_");
        }
        
    }
    
}
