
//Maximum and Minimum Element
import java.io.*;

class MixMin {

    static int getMin(int arr[], int n) {
        int r = arr[0];

        for (int i = 1; i < n; i++)
            r = Math.min(res, arr[i]);
        return r;
    }

    static int getMax(int arr[], int n) {
        int r = arr[0];

        for (int i = 1; i < n; i++)
            r = Math.max(res, arr[i]);
        return r;
    }

    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int n = arr.length;
        System.out.println("Minimum element" + " of array: " + getMin(arr, n));
        System.out.println("Maximum element" + " of array: " + getMax(arr, n));
    }
}
