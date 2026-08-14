//problem link: https://leetcode.com/problems/create-target-array-in-the-given-order/
//timeComplexity: o(n^2)
//spaceComplexity: o(1)

class Solution {
private:
    void rightShift(vector<int>&tar,int indx,int val){
        for(int i=indx;i<tar.size();i++){
            int temp=tar[i];
            tar[i]=val;
            val=temp;
        }
        return;
    }
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=index.size();
        vector<int>tar(n);
        for(int i=0;i<n;i++){
            tar[i]=-1;
        }
        for(int i=0;i<n;i++){
            int indx=index[i];
            if(tar[indx]==-1){
            tar[indx]=nums[i];
            }
            else{
                int val=tar[indx];
                tar[indx]=nums[i];
                rightShift(tar,indx+1,val);
            }
        }
        return tar;
    }
};