class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // Step 1: Initialize BFS queue and set
        queue<pair<string, int>> q;
        q.push({beginWord, 1}); // Start with beginWord at step 1

        // Convert wordList to set for O(1) lookup
        unordered_set<string> st(wordList.begin(), wordList.end());
        st.erase(beginWord); // Remove to avoid revisiting

        // Step 2: BFS traversal
        while (!q.empty()) {
            // Step 3: Extract current word and steps
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            // Step 4: Check if we reached the target
            if (word == endWord)
                return steps;

            // Step 5: Generate all possible one-letter transformations
            for (int i = 0; i < word.size(); i++) {
                char original = word[i]; // Save original character

                // Try all 26 lowercase letters
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch; // Replace character

                    // Step 6: Check if transformed word is valid
                    if (st.find(word) != st.end()) {
                        st.erase(word);            // Mark as visited
                        q.push({word, steps + 1}); // Add to queue
                    }
                }

                // Step 7: Restore original character
                word[i] = original;
            }
        }

        // Step 8: No valid transformation sequence found
        return 0;
    }
};