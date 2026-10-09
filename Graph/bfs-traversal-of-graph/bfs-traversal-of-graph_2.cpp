class Solution {
    public ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj) {
        
        boolean[] visited = new boolean[adj.size()]; // to prevent loops
        ArrayList<Integer> res = new ArrayList<>();
        Queue<Integer> queue = new LinkedList<>(); // to preserve original order
        
        // always start at 0
        visited[0] = true;
        queue.add(0);

        while(!queue.isEmpty()){
            int i = queue.poll();
            res.add(i);
            ArrayList<Integer> adjacentToI = adj.get(i);
            
            // visit all unvisited neighbours
            for(int neighbour : adjacentToI){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    queue.add(neighbour);
                }
            }
        }
        
        return res;
    }
}