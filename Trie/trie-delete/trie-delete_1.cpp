/* Trie Node Structure
class TrieNode {
    public TrieNode[] children = new TrieNode[26];
    public boolean isEndOfWord;

    public TrieNode() {
        for (int i = 0; i < 26; ++i) {
            children[i] = null;
        }
        isEndOfWord = false;
    }
} */

class Trie {
    private TrieNode root;
    public Trie() { root = new TrieNode(); }

    public void deleteKey(String key) {
        TrieNode curr = root;
        for(int i = 0; i < key.length(); i++){

            int index = key.charAt(i) - 'a';
            // presence check
            if(index < 0 || index > 25 || curr.children[index] == null) return;
            curr = curr.children[index];
        }
        // delete
        curr.isEndOfWord = false;
    }
    
    
    // not focus of this exercise
    public void insert(String word) {
        TrieNode curr = root;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            // assumed to be a valid English letter
            if(curr.children[index] == null){
                TrieNode child = new TrieNode();
                curr.children[index] = child;
            }
            curr = curr.children[index];
        }
        // mark last letter
        curr.isEndOfWord = true;
    }
    
    public boolean search(String word) {
        TrieNode curr = root;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            if(curr.children[index] == null) return false;
            curr = curr.children[index];
        }
        return curr.isEndOfWord;
    }

    public boolean isPrefix(String word) {
        TrieNode curr = root;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            if(curr.children[index] == null) return false;
            curr = curr.children[index];
        }
        return true;
    }
}