//problem link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions
//timeComplexity: O(n)
//spaceCompelxity: o(1)

class Solution {
    public int search(int arr[], int x) {
        // code here
        for(int i=0;i<arr.length;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
}
