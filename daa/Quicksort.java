public class Quicksort {
    static void quickSort(int[] arr, int st, int end){
        if(st >= end) return;
        int pi = partition(arr, st, end);
        quickSort(arr, st, pi-1);
        quickSort(arr, pi+1, end);
    }
   static int partition(int[] arr, int st, int end) {
                       
        return 0;
    }
public static void main(String[] args) {
    int a[]={1,2,3,5};
    quickSort(a,0, 0);
   
   } 
}
