class Solution {
    public int maxProduct(int[] nums) {
        PriorityQueue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int i:nums){
            pq.offer(i);
        }
        int x=pq.poll();
        int y=pq.poll();
        return (x-1)*(y-1);
    }
}