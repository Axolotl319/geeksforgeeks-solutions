class Solution {
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        // code here
        ArrayList<Integer> res = new ArrayList<>();
        boolean[] visited = new boolean[adj.size()];
        explore(adj, res, visited, 0);
        return res;
    }
    
    private void explore(ArrayList<ArrayList<Integer>> adj, ArrayList<Integer> res, boolean[] visited, int cur){
        visited[cur] = true;
        res.add(cur);
        for(int neighbour: adj.get(cur)){
            if(!visited[neighbour]){
                explore(adj, res, visited, neighbour);
            }
        }
        // backtrack when all visited
    }
}