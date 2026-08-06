class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> result;
        int i=0,j=0;
        int aSize=a.size();
        int bSize=b.size();
        
        while(i<aSize && j<bSize){
            if(a[i]<b[j]){
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                    i++;
            }else if(b[j]<a[i]){
                if(result.empty() || result.back() != b[j]){
                    result.push_back(b[j]);
                }
                    j++;
            }else{
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                    j++;
                    i++;
            }
        }
        
        while(i<aSize){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        
        while(j<bSize){
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        }
        return result;
    }
};