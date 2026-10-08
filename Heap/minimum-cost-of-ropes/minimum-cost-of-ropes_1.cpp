class Solution {
    public int minCost(int[] arr) {
        PriorityQueue<Integer> queue = new PriorityQueue<>();
        for(int i = 0; i < arr.length; i++){
            queue.add(arr[i]);
        }
        int total = 0;
        while(queue.size() > 1){
            int sum = queue.poll() + queue.poll(); // 2 smallest ropes
            queue.add(sum);
            total += sum;
        }
        return total;
    }
}