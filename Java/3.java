//kth smallest element and Kth largest element
import java.util.Arrays;
import java.util.Collections;

class kthMaxMin {
    public static int kthSmallest(Integer[] arr, int k) {
        Arrays.sort(arr);
        return arr[k - 1];
    }
    public static int kthLargest(Integer[] arr, int k) {
        Arrays.sort(arr);
        int n = arr.length;
        return arr[n - k];
    }

    public static void main(String[] args) {
        Integer arr[] = new Integer[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int k = 2;
        System.out.print("K'th smallest element is " + kthSmallest(arr, k)+"\n");
        System.out.print("K'th largest element is " + kthLargest(arr, k));
    }
}
