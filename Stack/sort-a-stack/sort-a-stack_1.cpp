class Solution {
    public void sortStack(Stack<Integer> st) {
        // code here
        PriorityQueue<Integer> q = new PriorityQueue<>();
        while(!st.isEmpty()){
            q.add(st.pop()); // priority queue sorts as added
        }
        while(!q.isEmpty()){
            st.push(q.poll()); // add back in ascending order
        }
    }
}