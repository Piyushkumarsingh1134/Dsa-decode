import java.util.*;
public class knapsack
{
     public static void Kanpsack(double m, int n)
        {
        Scanner s=new Scanner(System.in);
        double wt[]=new double[n];
        double prof[]=new double[n];
        double c[]=new double[n];
        double x[]=new double[n];
        int items[]=new int[n];
        double U=m;
        int j;
        System.out.println("Enter the Weights of items:- ");
        for(int i=0;i<n;i++){
            wt[i]=s.nextInt();
        }
        System.out.println("Enter the Profits of items:- ");
        for(int i=0;i<n;i++){
            prof[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            x[i]=0.0;
        }
        for(int i=0;i<n;i++){
            items[i]=i+1;
        }
        System.out.println("\n Entered Wieght of items are:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+wt[i]);
        }
        System.out.println("\n\n Entered Profits of items are:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+prof[i]);
        }
        for(int i=0;i<n;i++){
           c[i]=prof[i]/wt[i];
        }
        System.out.println("\n\n Items array is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t Item"+items[i]);
        }
        System.out.println("\n\n prof[i]/wt[i] ratio is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+c[i]);
        }
        double temp,temp1,temp2;
        int temp3;
       for(int i=1;i<n;i++){
            if(c[i]>c[i-1]){
                temp=c[i];
                c[i]=c[i-1];
                c[i-1]=temp;
                temp1=prof[i];
                prof[i]=prof[i-1];
                prof[i-1]=temp1;
                temp2=wt[i];
                wt[i]=wt[i-1];
                wt[i-1]=temp2;
                temp3=items[i];
                items[i]=items[i-1];
                items[i-1]=temp3;
            }
        } 
        System.out.println("\n\n Sorted prof[i]/wt[i] ratio is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+c[i]);
        }
        System.out.println("\n\n Items array after Sorting is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t Item"+items[i]);
        }
        System.out.println("\n\n Profit array according to sorted prof[i]/wt[i] ratio is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+prof[i]);
        }
        System.out.println("\n\n Weight array according to sorted prof[i]/wt[i] ratio is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t "+wt[i]);
        }
        for(j=0;j<n;j++){
            if(wt[j]>U) break;
            x[j]=1.0;
            U=U-wt[j];
        }
        x[j]=U/wt[j];
        System.out.println("\n\n Optimal Solution is:- ");
        for(int i=0;i<n;i++){
            System.out.print("\t Item"+items[i]+"-"+x[i]);
        }
        double profit=0;
        
        for(int i=0;i<n;i++){
            profit=profit+(prof[i]*x[i]);
        }
        System.out.println("\n\n Maximum Profit Earned is:- "+profit);
        }
	public static void main(String[] args) {
	    double m;
	    int n;
	    System.out.println("Enter the capacity of the kanpsack:- ");
	    Scanner s=new Scanner(System.in);
	    m=s.nextDouble();
	    System.out.println("Enter the number of items:- ");
	    n=s.nextInt();
	    Kanpsack(m,n);
	}
}
