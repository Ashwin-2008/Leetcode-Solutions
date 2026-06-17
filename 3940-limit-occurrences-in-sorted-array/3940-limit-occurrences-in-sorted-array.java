class Solution {
    public int[] limitOccurrences(int[] nums, int k) {
        List<Integer> s=new ArrayList<>();
        int prev=Integer.MIN_VALUE;
        int c=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=prev){
                c=1;
                prev = nums[i];
            }
            else{
                c++;
            }
            if(c<=k){
                s.add(nums[i]);
            }
        }
        int[] result = new int[s.size()];
        for (int i = 0; i < s.size(); i++) {
            result[i] = s.get(i);
        }
        return result;
    }
}