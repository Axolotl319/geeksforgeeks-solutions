## [Trie Delete](https://www.geeksforgeeks.org/problems/trie-delete/1)

**Difficulty:** Medium  
**Topics:** Trie, Design-Pattern, Advanced Data Structure  

**Problem Description:**

<p><span style="font-size: 18px;">A Trie stores a collection of lowercase English strings. Given a string <strong>key</strong>, implement the deleteKey(key) function to remove key from the Trie. If key is not present, the Trie should remain unchanged.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>For input, the driver uses a string array <strong>words[]</strong>. It inserts all strings from words[] into the Trie, calls deleteKey(key), and then prints all strings that are still present in the Trie.</span></p>
<p><strong style="font-size: 18px;">Examples:</strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>words[] = ["gfg", "geeks", "practice"], key = "geeks"<br><strong>Output: </strong>["gfg", "practice"</span><span style="font-size: 14pt;"><span style="font-size: 14pt;">]<br><strong>Explanation:</strong></span><strong style="font-size: 14pt;"> </strong><span style="font-size: 14pt;">The key "geeks" is deleted from the Trie</span></span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>words[] = ["the", "a", "there", "answer", "any", "by", "bye", "their"], key = "the"<br><strong>Output: </strong>["a", "there", "answer", "any", "by", "bye", "their"</span><span style="font-size: 14pt;"><span style="font-size: 14pt;">]</span><strong style="font-size: 14pt;">  <br></strong><span style="font-size: 18.6667px;"><strong>Explanation: </strong>The key "the" is removed from the Trie. The nodes that are shared with other strings, such as "there" and "their", are preserved because those strings still exist in the Trie. </span></span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ words.size() ≤ 10<sup>4<br></sup></span><span style="font-size: 15px;">1 </span><span style="font-size: 18px;">≤ |key|&nbsp;</span><span style="font-size: 18px;">≤ 50</span></p>

**Expected Complexities:**

Time Complexity: O(|Key|)  
Auxiliary Space: O(|Key|)
