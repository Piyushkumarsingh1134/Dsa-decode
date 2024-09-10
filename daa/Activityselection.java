import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;


class Activity {
    int start, end;

    Activity(int start, int end) {
        this.start = start;
        this.end = end;
    }
}

public class Activityselection {

   
    static class EndTimeComparator implements Comparator<Activity> {
        @Override
        public int compare(Activity activity1, Activity activity2) {
            if (activity1.end < activity2.end) {
                return -1;
            } else if (activity1.end > activity2.end) {
                return 1;
            } else {
                return 0;
            }
        }
    }


    static int maxActivities(Activity[] activities) {
   
        Arrays.sort(activities, new EndTimeComparator());

        int count = 1;  
        int prevEnd = activities[0].end;

        
        for (int i = 1; i < activities.length; i++) {
           
            if (activities[i].start >= prevEnd) {
                count++;
                prevEnd = activities[i].end;
            }
        }

        return count;
    }

   
   
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of activities: ");
        int n = scanner.nextInt();

        Activity[] activities = new Activity[n];
        System.out.println("\nEnter the start and end day of each activity:\n");

        for (int i = 0; i < n; i++) {
            System.out.print("Activity " + (i + 1) + " - Start day: ");
            int start = scanner.nextInt();
            System.out.print("Activity " + (i + 1) + " - End day: ");
            int end = scanner.nextInt();
            activities[i] = new Activity(start, end);
        }

        int maxCount = maxActivities(activities);
        System.out.println("\nThe maximum number of activities that can be performed is: " + maxCount);

        scanner.close();
    }
}
