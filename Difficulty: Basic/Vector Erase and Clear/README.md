<h2><a href="https://www.geeksforgeeks.org/problems/vector-erase-and-clear/1">Vector Erase and Clear</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given a vector <strong>arr[]</strong> containing integers, implement the following functions:</span></p>
<p><span style="font-size: 18px;"><strong>clearAll()</strong> – Remove all elements from the vector.<br></span><span style="font-size: 18px;"><strong>eraseAt()</strong> – Given an integer <strong>pos</strong>, remove the element at index pos.<br></span><span style="font-size: 18px;"><strong>eraseInRange()</strong> – </span><span style="font-size: 18px;"><span style="font-size: 18px;">Given two integers <strong>start</strong> and <strong>end</strong>, remove all elements in the range [start, end), where end is excluded.</span><br></span></p>
<p><span style="font-size: 18px;">The driver code will execute one of the following queries and print the modified vector:</span></p>
<p><strong><span style="font-size: 18px;">1 :</span></strong><span style="font-size: 18px;"> clearAll(arr)<br><strong>2 pos&nbsp;</strong>: eraseAt(arr, pos)<br><strong>3</strong> <strong>start end&nbsp;</strong>: eraseInRange(arr, start, end)<br></span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong> <strong> </strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[]= [2, 3, 4, 5, 6], query = 2 3
<strong>Output: </strong>[2, 3, 4, 6]
<strong>Explanation: </strong>Query in this case is to remove element from position 3, thus after modification elements present
in the vector are 2 3 4 6.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[]= [1, 4, 5, 4, 2], query = 3 2 4
<strong>Output: </strong>[1, 4, 2]
<strong>Explanation: </strong>Query in this case is to erase elements in range 2 to 4, thus after modification elements present
in the vector are 1 4 2.</span></pre></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>STL</code>&nbsp;