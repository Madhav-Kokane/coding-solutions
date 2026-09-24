class Solution {
public:
    int compress(vector<char>& chars) {
        string str = "";
        int n = chars.size();
        // int count=0;

        int i = 0;
        int j = 0;
        while (j < n) {
            char ch = chars[j];
            int count = 0;

            while (j < n && ch == chars[j]) {
                count++;
                j++;
            }

            // str.push_back(ch);
            chars[i++]=ch;

            if (count > 1) {

                    string cnt = to_string(count);

                    for (auto c : cnt) {
                        // str.push_back(c);
                        chars[i++]=c;
                    }
            }
            // i = j ;
        }
        return i;
    }
};