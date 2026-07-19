class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastOccurence(26, -1);
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            if (lastOccurence[ch - 'a'] == -1) {
                lastOccurence[ch - 'a'] = i;
            }
        }

        vector<bool> visited(26, false);

        string ans = "";
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (visited[c - 'a']) {
                continue;
            }

            while (!ans.empty() && ans.back() > c &&
                   lastOccurence[ans.back() - 'a'] > i)
                    {
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            visited[c - 'a'] = true;
            ans.push_back(c);
        }
        return ans;
    }
};