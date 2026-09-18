class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*
        vector<int> negSquare;
        // int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                negSquare.push_back(nums[i]*nums[i]);
            }
        }

        

        vector<int> posSquare;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                posSquare.push_back(nums[i]*nums[i]);
            }
        }

        if(negSquare.empty()){
            return posSquare;
        }
    

        int i=0,j=0;
        int n=nums.size();
        int k=0;


        vector<int> result(n);
        while(i<n && j<n){
            if(negSquare[i]<=posSquare[j]){
                result[k++]=negSquare[i];
                i++;
            }else{
                result[k++]=posSquare[j];
                j++;
            }
        }

        while(i<n){
            result[k++]=negSquare[i++];
        }

        while(j<n){
            result[k++]=posSquare[j++];
        }
        
        return result;
        */

        int n=nums.size();
        vector<int> neg;
        vector<int> pos;
        int i=0;
        while(i<n && nums[i]<0){
            neg.push_back(nums[i]*nums[i]);
            i++;
        }

        while(i<n && nums[i]>=0){
            pos.push_back(nums[i]*nums[i]);
            i++;
        }

        int negSize=neg.size();
        int posSize=pos.size();

        int currIndex=n-1;
        int k=pos.size()-1;
        int j=0;
        vector<int> result(n);
        while(j<negSize && k>=0 &&  currIndex>=0){
            if(pos[k] > neg[j]){
                result[currIndex]=pos[k];
                k--;
                currIndex--;
            }else{
                result[currIndex]=neg[j];
                j++;
                currIndex--;
            }
        }

        while(j<negSize){
            result[currIndex]=neg[j];
            j++;
            currIndex--;
        }

        while(k>=0){
            result[currIndex]=pos[k];
            k--;
            currIndex--;
        }

        return result;

    }
};