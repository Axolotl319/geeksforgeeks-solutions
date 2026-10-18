/*
class pair  {
    long first, second;
    public pair(long first, long second)
    {
        this.first = first;
        this.second = second;
    }
}
*/

class Solution {
    public pair[] allPairs(int target, int arr1[], int arr2[]) {
        Arrays.sort(arr1); // for return order
        HashMap<Integer, Integer> arr2freq = new HashMap<>(); // for fast lookup
        for(int n: arr2){
            int freq = arr2freq.getOrDefault(n, 0) + 1;
            arr2freq.put(n, freq);
        }
        List<pair> res = new ArrayList<>();
        for(int n: arr1){
            int aim = target-n;
            int freq = arr2freq.getOrDefault(aim, 0);
            for(int i = 0; i < freq; i++) res.add(new pair(n, aim));
        }
        pair[] answer = new pair[res.size()];
        for(int i = 0; i < res.size(); i++){
            answer[i] = res.get(i);
        }
        return answer;
    }
}