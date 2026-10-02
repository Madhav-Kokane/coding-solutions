class Solution {
public:
    vector<int> PSE(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> result(n, -1);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }

            st.push(i);
        }

        return result;
    }

    vector<int> NSE(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> result(n, n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }

            st.push(i);
        }

        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod=(int)1e9 + 7;
        long long total=0;
        vector<int> nse=NSE(arr);
        vector<int> pse=PSE(arr);

        for(int i=0;i<arr.size();i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;

            total = (total + (left * right % mod) * arr[i]) % mod;
        }
        return total;
    }
};