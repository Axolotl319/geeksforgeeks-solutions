class Solution {
    public ArrayList<Integer> kLargest(int[] arr, int k) {
        // code here
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
        for(int n: arr){
            pq.add(n);
        }
        ArrayList<Integer> res = new ArrayList<>();
        while(!pq.isEmpty() && k > 0){
            res.add(pq.poll());
            k--;
        }
        return res;
    }
}
