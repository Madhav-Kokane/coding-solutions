class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> colors(n,0);
        vector<int> result;
        int count=0;

        for(auto& q : queries){
            int index=q[0];
            int colr=q[1];

            if(colors[index] != 0){
                if(index>0 && colors[index]==colors[index-1]){
                    count--;
                }

                if(index<n-1 && colors[index]==colors[index+1]){
                    count--;
                }
            }

            colors[index]=colr;

            if(index>0 && colors[index]==colors[index-1]){
                count++;
            }

            if(index<n-1 && colors[index]==colors[index+1]){
                count++;
            }

            result.push_back(count);
        }
        return result;
    }
};