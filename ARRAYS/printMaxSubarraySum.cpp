//problem link: https://leetcode.com/problems/maximum-subarray/description/ 
//extended version of this above  problem
//timeComplexity: O(n)
//spaceComplexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    int sum=0;
    int maxSum=INT_MIN;
    int stIndx=-1,endIndx=-1,indx=-1;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxSum){
            maxSum=sum;
            if(indx==-1){
                stIndx=i;
                indx=i;
            }
            endIndx=i;
        }
        if(sum<0){
            sum=0;
            indx=-1;
        }
    }
    int subLen=endIndx-stIndx+1;
    cout<<"Maximum subarry: "<<maxSum<<endl;
    cout<<"Maximum length: "<<subLen<<endl;
    cout<<"Maximum subarray:"<<endl;
    for(int i=stIndx;i<=endIndx;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

