import java.util.*;

public class Dijakstaa {
    
    static void initialize(int graph[][], int s, int[] distance) {
        Arrays.fill(distance, Integer.MAX_VALUE);
        distance[s] = 0;
    }
    static int relaxation(int v, int w[][], int u){
        int[] d= new int[v];
        for (int i = 0; i < v; i++){
           if(d[v]>d[u]+w[u][v]){
             d[v]=d[u]+w[u][v];
           }
           

        }
        return d[v];
    }
    static void dijkstra(int graph[][], int s) {
        int V = graph.length;
        int[] distance = new int[V];
        initialize(graph, s, distance);
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(s);
        
        while (!pq.isEmpty()) {
            int node = pq.poll();
            
            for (int i = 0; i < V-1; i++) {
                if (graph[node][i] > 0 && distance[i] > distance[node] + graph[node][i]) {
                    distance[i] = distance[node] + graph[node][i];
                    pq.add(i);
                    relaxation(V, graph, 0);
                }
            }
        }
        
      
        for (int i = 0; i < V-1; i++) {
            System.out.println("Distance from node " + s + " to node " + i + " is " + distance[i]);
        }
    }

    
    public static void main(String[] args) {
        int[][] graph = {
            {0, 4, 0, 0, 0, 0, 0, 8, 0},
            {4, 0, 8, 0, 0, 0, 0, 11, 0},
            {0, 8, 0, 7, 0, 4, 0, 0, 2},
            {0, 0, 7, 0, 9, 14, 0, 0, 0},
            {0, 0, 0, 9, 0, 10, 0, 0, 0},
            {0, 0, 4, 14, 10, 0, 2, 0, 0},
            {0, 0, 0, 0, 0, 2, 0, 1, 6},
            {8, 11, 0, 0, 0, 0, 1, 0, 7},
            {0, 0, 2, 0, 0, 0, 6, 7, 0}
        };
        
        dijkstra(graph, 0); 
    }
}
