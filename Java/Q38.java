import java.util.Scanner;
import java.util.Arrays;


public class Q38 {
    public static void main(String[] a){
        Scanner sc=new Scanner(System.in);
        int arr[][] ={
            {23,4,1} ,
            {18,12,3,9},
            {78,99,34,56},
            {28,12}
        };
            int target=sc.nextInt();
            int ans[]=search(arr,target); //format of return value is (row,col)
            System.out.println("Element present at :"+ Arrays.toString(ans));
    } 
    static int[] search(int[][] arr, int target){
        for(int row=0;row<arr.length;row++){
            for(int col=0;col<arr[row].length;col++){
                if(arr[row][col]==target) {
                //int[] ans1= {row,col};
                return new int[]{row+1,col+1};
                } 
            }
        }
        //int[] ans2={-1,-1};
        return new int[]{-1,-1};
    }  
}
 
    

