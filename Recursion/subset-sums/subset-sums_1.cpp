class Solution {
    public ArrayList<Integer> subsetSums(int[] arr) {
        int initialSum = 0;
        ArrayList<Integer> result = new ArrayList<>();
        result.add(initialSum);
        return sums(arr, 0, result);
        
    }
    
    private ArrayList<Integer> sums(int[] arr, int index, ArrayList<Integer> subs){
        if(index < arr.length){
            int n = subs.size();
            for(int i = 0; i < n; i++){
                subs.add(subs.get(i)+arr[index]);
            }
            sums(arr, index+1, subs);
        }
        return subs;
    }
}