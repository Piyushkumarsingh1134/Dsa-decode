import java.util.Scanner;

public class Longest {
    
    static int lcs(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();

        int dp[][] = new int[n + 1][m + 1];
        char pi[][] = new char[n + 1][m + 1];

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                    pi[i][j] = ' ';
                } else if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    pi[i][j] = '*'; 
                } else {
                    if (dp[i - 1][j] > dp[i][j - 1]) {
                        dp[i][j] = dp[i - 1][j];
                        pi[i][j] = '|'; 
                    } else {
                        dp[i][j] = dp[i][j - 1];
                        pi[i][j] = '-'; 
                    }
                }
            }
        }
        
      
        System.out.println("Dynamic Programming Array (dp):");
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                System.out.printf("%2d ", dp[i][j]);
            }
            System.out.println();
        }
        
  
        System.out.println("\nSymbol Matrix:");
        for (int i = 1; i <n; i++) {
            for (int j = 1; j <m; j++) {
                System.out.print(" " + pi[i][j] + " ");
            }
            System.out.println();
        }
        System.out.print("\nThe Longest Common Subsequence with Symbols is: ");
        int i = n, j = m;
        while (i > 0 && j > 0) {
            if (pi[i][j] == '*') {
                System.out.print(s1.charAt(i - 1));
                i--;
                j--;
            } else if (pi[i][j] == '|') {
                i--;
            } else {
                j--;
            }
        }

        return dp[n][m]; 
    }

   

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String s1 = sc.nextLine();

        System.out.println("Enter the second string:");
        String s2 = sc.nextLine();
        
        System.out.println("\nThe Length of Longest Common Subsequence is " + lcs(s1, s2));
    }
} 




