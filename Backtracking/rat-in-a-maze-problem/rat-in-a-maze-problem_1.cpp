class Solution {
    private static void recCheck(int[][] maze, boolean[][] visited, StringBuilder s, int x, int y, ArrayList<String> res){
        if(y < 0 || x < 0 || x >= maze[0].length || y >= maze.length) return;
        
        int n = maze.length;
        if(x == n-1 && y == n-1){
            res.add(s.toString());
            return;
        }
        
        visited[y][x] = true;
        
        boolean up = y > 0 && 
                        maze[y-1][x] == 1 && 
                        !visited[y-1][x];
                        
        boolean down = y < n-1 &&
                        maze[y+1][x] == 1 &&
                        !visited[y+1][x];
                        
        boolean left = x > 0 && 
                        maze[y][x-1] == 1 && 
                        !visited[y][x-1];
                        
        boolean right = x < n-1 && 
                            maze[y][x+1] == 1 && 
                            !visited[y][x+1];
                            
        if(up){
            s.append("U");
            recCheck(maze, visited, s, x, y-1, res);
            s.deleteCharAt(s.length() - 1);
        }
        
        if(down){
            s.append("D");
            recCheck(maze, visited, s, x, y+1, res);
            s.deleteCharAt(s.length() - 1);
        }
        
        if(left){
            s.append("L");
            recCheck(maze, visited, s, x-1, y, res);
            s.deleteCharAt(s.length() - 1);
        }
        
        if(right){
            s.append("R");
            recCheck(maze, visited, s, x+1, y, res);
            s.deleteCharAt(s.length() - 1);
        }

        visited[y][x] = false;
        
    }
    
    public ArrayList<String> ratInMaze(int[][] maze) {
        // code here
        ArrayList<String> res = new ArrayList<>();
        
        if(maze.length < 1 || maze[0].length != maze.length) return res;
        
        int n = maze.length;
        if(maze[0][0] == 0 || maze[n-1][n-1] == 0) return res;
        boolean[][] visited = new boolean[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = false;
            }
        }
        
        recCheck(maze, visited, new StringBuilder(), 0, 0, res);
        
        Collections.sort(res);
        
        return res;
        
    }
}