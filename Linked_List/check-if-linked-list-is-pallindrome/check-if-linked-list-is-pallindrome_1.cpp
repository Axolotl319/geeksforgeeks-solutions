/*
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}*/

class Solution {
    public boolean isPalindrome(Node head) {
        List<Integer> data = new ArrayList<>(); // traversable from both ends
        Node cur = head;
        while(cur != null){
            data.add(cur.data);
            cur = cur.next;
        }
        int n = data.size();
        for(int i = 0; i < n/2; i++){
            if(!data.get(i).equals(data.get(n-1-i))) return false;
        }
        return true;
    }
}