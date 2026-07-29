import java.util.*;
public class  min_productarray
 
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
        arr[i]=sc.nextInt();
        int currprod=arr[0],minprod=arr[0];
        for(i=1;i<n;i++)
        {
            currprod=Math.min(arr[i],currprod*arr[i]);
            minprod=Math.min(currprod,minprod);
        }
        System.out.print(minprod);
    }
}

