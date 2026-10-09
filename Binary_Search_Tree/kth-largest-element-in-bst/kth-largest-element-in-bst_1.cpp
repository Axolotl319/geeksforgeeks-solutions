/* Structure of a Binary Tree Node
class Node {
    public int data;
    public Node left;
    public Node right;

    public Node(int val) {
        data = val;
        left = right = null;
    }
};*/

class Solution {
    public int kthLargest(Node root, int k) {
        List<Integer> inOrder = new ArrayList<>();
        traverse(root, inOrder, k);
        return inOrder.get(k-1);
    }
    
    private static void traverse(Node root, List<Integer> list, int k){
        if(list.size() >= k){
            return; // early return - don't visit more nodes than needed
        }
        
        if(root.right != null){
            traverse(root.right, list, k);
        }
        
        list.add(root.data);
        
        if(root.left != null){
            traverse(root.left, list, k);
        }
    }
}