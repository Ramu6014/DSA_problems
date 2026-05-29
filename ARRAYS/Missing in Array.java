//problem link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    int missingNum(int arr[]) {
        // code here
        int n=arr.length;
        int xor0=0;
        int xor1=0;
        for(int i=0;i<n;i++){
            xor0^=arr[i];
            xor1^=(i+1);
        }
        xor1^=(n+1);
        return xor0^xor1;
    }
}