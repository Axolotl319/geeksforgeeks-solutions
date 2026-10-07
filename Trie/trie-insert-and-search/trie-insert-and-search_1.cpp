class Trie {
    boolean isEndOfWord;
    Trie[] children;

    public Trie() {
        isEndOfWord = false;
        children = new Trie[26]; // one per letter
    }

    // Insert a word into the Trie
    public void insert(String word) {
        Trie curr = this;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            // assumed to be a valid English letter
            if(curr.children[index] == null){
                Trie child = new Trie();
                curr.children[index] = child;
            }
            curr = curr.children[index];
        }
        // mark last letter
        curr.isEndOfWord = true;
    }

    // Search for a word in the Trie
    public boolean search(String word) {
        Trie curr = this;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            if(curr.children[index] == null) return false;
            curr = curr.children[index];
        }
        return curr.isEndOfWord;
    }

    // Check if a prefix exists in the Trie
    public boolean isPrefix(String word) {
                Trie curr = this;
        for(int i = 0; i < word.length(); i++){
            int index = word.toLowerCase().charAt(i) - 'a';
            if(curr.children[index] == null) return false;
            curr = curr.children[index];
        }
        return true;
    }
}