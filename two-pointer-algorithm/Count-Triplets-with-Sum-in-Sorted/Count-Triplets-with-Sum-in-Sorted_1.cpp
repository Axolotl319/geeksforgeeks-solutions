class Solution {
    public int countTriplets(int[] arr, int target) {
        int triplets = 0;
        for(int i = 0; i < arr.length-2; i++){
            int fixed = arr[i];
            int aim = target - arr[i];
            int j = i+1; int k = arr.length-1;
            while(j < k){
                // skip fixed element
                if(k==i){
                    k--;
                    continue;
                }
                int sum = arr[j] + arr[k];
                if(sum < aim){
                    j++;
                }else if(sum > aim){
                    k--;
                }else{
                    // add triplets with same values
                    if(arr[j] == arr[k]){
                        int n = k-j+1;
                        triplets += n*(n-1)/2;
                        break;
                    }else{
                        int atJ = arr[j];
                        int jCount = 0;
                        while(j < k && arr[j] == atJ){
                            jCount++;
                            j++;
                        }
                        int atK = arr[k];
                        int kCount = 0;
                        while(k >= j && arr[k] == atK){
                            kCount++;
                            k--;
                        }
                        triplets += jCount * kCount;
                    }
                }
            }
        }
        return triplets;
    }
}