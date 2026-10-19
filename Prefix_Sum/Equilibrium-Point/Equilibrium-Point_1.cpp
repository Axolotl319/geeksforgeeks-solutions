class Solution {
    public static int findEquilibrium(int arr[]) {
        // code here
        int total = 0;
        for(int n: arr) total += n;
        int sum = 0;
        for(int i = 0; i < arr.length; i++){
            if(2*sum == total - arr[i]){
                return i;
            }
            sum += arr[i];
        }
        return -1;
    }
}
