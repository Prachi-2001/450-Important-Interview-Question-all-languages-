//Reverse an array
public class reverseArray {
    static void reverse(int a[], int n) {
        int[] s = new int[n];
        int j = n;
        for (int i = 0; i < n; i++) {
            s[j - 1] = a[i];
            j = j - 1;
        }
        // Printing Reversed Array
        System.out.println("Reversed array is: \n");
        for (int k = 0; k < n; k++) {
            System.out.println(s[k]);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
        reverse(arr, arr.length);
    }
}
