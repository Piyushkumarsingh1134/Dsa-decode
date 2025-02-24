public class Mergesort {
    static void display(int []a){
        for(int i=0; i<a.length; i++){
            System.out.println(a[i]);
        }
    }
    
 static void Mergesorts(int[]arr,int l,int r){
    if(l>r) return;
    int mid=l+r/2;
    Mergesorts(arr,l,mid-1);
    Mergesorts(arr,mid+1,r);
    merge(arr,l,r,mid);
 }
    private static void merge(int[] arr, int l, int r, int mid) {
        int n=arr.length;
    int n1=n-l+1;
    for(int i=0; i<n1; i++){
        
    }
     
}
    public static void main(String[] args) {
        int arr[]={3,4,7,8,9};
        int n=arr.length;
        Mergesorts(arr);
        display(arr);
       
    }
}
