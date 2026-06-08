//problem link: https://leetcode.com/problems/two-out-of-three/
//timeComplexity: o(n1+n2+n3)
//spaceComplexity: O(n1+n2+n3)

class Solution {
    public List<Integer> twoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        int n1=nums1.length;
        int n2=nums2.length;
        int n3=nums3.length;
        HashMap<Integer,Integer>freq1=new HashMap<>();
        HashMap<Integer,Integer>freq2=new HashMap<>();
        HashMap<Integer,Integer>freq3=new HashMap<>();
        for(int i=0;i<n1;i++){
            freq1.put(nums1[i],freq1.getOrDefault(nums1[i],0)+1);
        }
        for(int i=0;i<n2;i++){
            freq2.put(nums2[i],freq2.getOrDefault(nums2[i],0)+1);
        }
        for(int i=0;i<n3;i++){
            freq3.put(nums3[i],freq3.getOrDefault(nums3[i],0)+1);
        }
        HashSet<Integer>st=new HashSet<>();
        for(Map.Entry<Integer,Integer>it: freq1.entrySet()){
            int val=it.getKey();
            //nums1 to nums2
            if(freq2.containsKey(val)){
                st.add(val);
            }
            //nums1 to nums3
            if(freq3.containsKey(val)){
                st.add(val);
            }
        }
        for(Map.Entry<Integer,Integer>it: freq2.entrySet()){
            int val=it.getKey();
            if(freq3.containsKey(val)){
                st.add(val);
            }
        }
        return new ArrayList<>(st);
    }
}