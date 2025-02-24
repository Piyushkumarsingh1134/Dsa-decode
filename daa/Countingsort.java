import java.util.Scanner;

public class Countingsort {
    static int findMax(int[] arr) {
        int mx = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > mx) {
                mx = arr[i];
            }
        }
        return mx;
    }

    static void countsort(int arr[]) {
        int n = arr.length;
        int[] B = new int[n];
        int mx = findMax(arr);
        int[] Count = new int[mx + 1];
        for (int i = 0; i < arr.length; i++) {
            Count[arr[i]]++;
        }
        for (int i = 1; i < Count.length; i++) {
            Count[i] = Count[i] + Count[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            int idx = Count[arr[i]] - 1;
            B[idx] = arr[i];
            Count[arr[i]]--;
        }

        // Print the modified array B directly
        display(B);
    }

    static void display(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Modified array B:");
        countsort(arr);
    }
}

