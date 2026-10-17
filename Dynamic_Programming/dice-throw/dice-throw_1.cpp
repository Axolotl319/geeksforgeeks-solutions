class Solution {
    static int noOfWays(int m, int n, int x) {
        int[][] memo = new int[n+1][x+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= x; j++){
                memo[i][j] = -1;
            }
        }

        return ways(m, n, x, memo);
    }
    
    private static int ways(int m, int n, int x, int[][] mat){
        
        if(n == 0 && x == 0){
            // valid combo found
            return 1;
        }
        
        if(n == 0 || x <= 0){
            // invalid combo
            return 0;
        }
        
        if(mat[n][x] != -1){
            return mat[n][x];
        }
        
        int total = 0;
        for(int i = 1; i <= m; i++){
            total += ways(m, n-1, x-i, mat);
        }
        mat[n][x] = total;
        return total;
    }
};