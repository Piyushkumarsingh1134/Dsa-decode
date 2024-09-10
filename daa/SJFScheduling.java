import java.util.Arrays;

public class SJFScheduling {

    public static void sjfScheduling(String[] processes, int[] arrivalTimes, int[] burstTimes) {
        int n = processes.length;

        // Sort processes based on arrival time
        int[][] sortedProcesses = new int[n][3];
        for (int i = 0; i < n; i++) {
            sortedProcesses[i][0] = i;
            sortedProcesses[i][1] = arrivalTimes[i];
            sortedProcesses[i][2] = burstTimes[i];
        }

        Arrays.sort(sortedProcesses, (a, b) -> Integer.compare(a[1], b[1]));

        int waitingTime = 0;
        int turnaroundTime = 0;
        int completionTime = 0;

        System.out.println("Gantt Chart:");
        System.out.println("--------------------------------------------------");

u uu             int process = sortedProcesses[i][0];
            int arrival = sortedProcesses[i][1];
            int burst = sortedProcesses[i][2];

            // Waiting time for the current process
            waitingTime += completionTime - arrival;
            System.out.print("| " + processes[process] + " ");

            // Update completion time
            completionTime += burst;
            turnaroundTime += completionTime - arrival;
        }
        System.out.println("|");
        System.out.println("--------------------------------------------------");

        // Calculate averages
        double averageWaitingTime = (double) waitingTime / n;
        double averageTurnaroundTime = (double) turnaroundTime / n;

        System.out.println("\nTotal Waiting Time: " + waitingTime);
        System.out.println("Average Waiting Time: " + String.format("%.2f", averageWaitingTime));
        System.out.println("Total Turnaround Time: " + turnaroundTime);
        System.out.println("Average Turnaround Time: " + String.format("%.2f", averageTurnaroundTime));
    }

    public static void main(String[] args) {
        String[] processes = {"P1", "P2", "P3", "P4"};
        int[] arrivalTimes = {0, 2, 4, 6};
        int[] burstTimes = {8, 5, 7, 3};

        sjfScheduling(processes, arrivalTimes, burstTimes);
    }
}
