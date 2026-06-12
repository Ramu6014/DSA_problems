//problem link: https://leetcode.com/problems/design-skiplist/
//timeComplexity:  O(logn)
//spaceComplexity: O(n)

class Skiplist {
    TreeMap<Integer,Integer>ms;
    public Skiplist() {
        ms=new TreeMap<>();
    }
    
    public boolean search(int target) {
        return ms.containsKey(target);
    }
    
    public void add(int num) {
        ms.put(num,ms.getOrDefault(num,0)+1);
    }
    
    public boolean erase(int num) {
        if(!ms.containsKey(num)){
            return false;
        }
        int freq=ms.get(num);
        if(freq==1){
            ms.remove(num);
        }
        else{
            ms.put(num,freq-1);
        }
        return true;
    }
}

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist obj = new Skiplist();
 * boolean param_1 = obj.search(target);
 * obj.add(num);
 * boolean param_3 = obj.erase(num);
 */