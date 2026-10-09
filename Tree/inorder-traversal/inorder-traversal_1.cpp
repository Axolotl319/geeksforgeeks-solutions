/* Structure of Binary Tree Node
class Node {
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
}*/

class Solution {
    public ArrayList<Integer> inOrder(Node root) {
        ArrayList<Integer> result = new ArrayList<>();
        traverse(root, result);
        return result;
    }
    
    private static void traverse(Node cur, ArrayList<Integer> result){
        if(cur.left != null){
            traverse(cur.left, result);
        }
        result.add(cur.data);
        if(cur.right != null){
            traverse(cur.right, result);
        }
    }
}