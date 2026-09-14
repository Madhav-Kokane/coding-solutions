class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashMap;
        for(auto it : strs){
            string word=it;
            sort(word.begin(),word.end());
            hashMap[word].push_back(it);
        }

        vector<vector<string>> result;
        for(auto it : hashMap){
            result.push_back(it.second);
        }
        return result;
    }
};