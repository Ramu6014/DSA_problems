//problem link: https://www.geeksforgeeks.org/problems/sum-array-puzzle/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
//timeCompelxity: O(n)
//spaceComplexity: O(1)


class Solution {
    public void sumArray(List<Integer> arr) {

        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr.get(i);
        }

        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int val = sum - arr.get(i);
            arr.set(i,val);
        }
    }
}