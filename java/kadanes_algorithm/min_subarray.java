import java.util.*;
public class min_subarray{


    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int i;
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int currentsum=arr[0],minsum=arr[0];
        for(i=1;i<n;i++){
            currentsum=Math.min(arr[i],currentsum+arr[i]);
            minsum=Math.min(currentsum,minsum);

        }
        System.out.println(minsum);



    }
}