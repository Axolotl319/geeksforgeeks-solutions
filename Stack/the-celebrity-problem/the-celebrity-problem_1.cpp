class Solution {
    public int celebrity(int mat[][]) {
        // precondition: mat[i][i] == 1 for all i in range
        int celeb = -1;
        int n = mat.length;
        if(n < 1 || n != mat[0].length) return celeb;
        
        List<Integer> onlyKnowsSelf = new ArrayList<>();
        for(int i = 0; i < n; i++){
            boolean knowsOthers = false;
            for(int j = 0; j < n; j++){
                if(i != j && mat[i][j] == 1){
                    knowsOthers = true;
                    break;
                }
            }
            if(!knowsOthers) onlyKnowsSelf.add(i);
        }
        
        if(onlyKnowsSelf.isEmpty()) return celeb;
        
        for(int j = 0; j < n; j++){
            boolean knownByOthers = true;
            for(int i = 0; i < n; i++){
                if(mat[i][j] == 0){
                    knownByOthers = false;
                    break;
                }
            }
            if(knownByOthers) return j;
        }
        
        return celeb;
    }
}