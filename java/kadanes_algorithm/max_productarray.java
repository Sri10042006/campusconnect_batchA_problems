import java.util.*;
public class  max_productarray
 
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
        arr[i]=sc.nextInt();
        int currprod=arr[0],maxprod=arr[0];
        for(i=1;i<n;i++)
        {
            currprod=Math.max(arr[i],currprod*arr[i]);
            maxprod=Math.max(currprod,maxprod);
        }
        System.out.print(maxprod);
    }
}

