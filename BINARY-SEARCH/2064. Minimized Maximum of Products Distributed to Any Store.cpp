//problem link: https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/
//timeComplexity: O(n*log(n))
//spaceComplexity: o(1)


class Solution {
private:
    int findHigh(vector<int>&quantities){
        int maxi=INT_MIN;
        for(int i=0;i<quantities.size();i++){
            maxi=max(maxi,quantities[i]);
        }
        return maxi;
    }
private:
    bool isPossible(vector<int>&quantities,int n,int q){
        int reqStores=0;
        for(int i=0;i<quantities.size();i++){
            reqStores+=ceil((double)quantities[i]/q);
        }
        return reqStores<=n;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities){
        int low=1;
        int high=findHigh(quantities);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(quantities,n,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};