public class Fifo {
   
    static void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
  
        wt[0] = 0;
       
        for (int i = 1; i < n; i++)
            wt[i] = bt[i - 1] + wt[i - 1];
    }

    
    static void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
        
        for (int i = 0; i < n; i++)
            tat[i] = bt[i] + wt[i];
    }

   
    static void findAvgTime(int processes[], int n, int bt[]) {
        int wt[] = new int[n];
        int tat[] = new int[n];
        int total_wt = 0, total_tat = 0;
       
        findWaitingTime(processes, n, bt, wt);
        
        findTurnAroundTime(processes, n, bt, wt, tat);
        System.out.println("Processes Burst time Waiting time Turn around time");
        
        for (int i = 0; i < n; i++) {
            total_wt = total_wt + wt[i];
            total_tat = total_tat + tat[i];
            System.out.print(" " + (i + 1) + " ");
            System.out.print(" " + bt[i] + " ");
            System.out.print(" " + wt[i] + " ");
            System.out.println(" " + tat[i]);
        }
        int s = (int) ((float) total_wt / (float) n);
        int t = (int) ((float) total_tat / (float) n);
        System.out.println("Average waiting time = " + s);
        System.out.println("Average turn around time = " + t);
    }

    public static void main(String[] args) {
        int processes[] = {1, 2, 3};
        int n = processes.length;
       
        int burst_time[] = {10, 5, 8};
        findAvgTime(processes, n, burst_time);
    }
}

