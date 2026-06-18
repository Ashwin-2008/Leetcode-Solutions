class Solution {
    public int[] leftRightDifference(int[] nums) {
        Stack<Integer>st=new Stack<>();
        Queue<Integer>pq=new LinkedList<>();
        for(int i=0;i<nums.length;i++){
            st.push(nums[i]);
            pq.add(nums[i]);
        }
        List<Integer>ls=new ArrayList<>();
        List<Integer>rs=new ArrayList<>();
        int prev=0,aft=0;
        for(int i=0;i<nums.length;i++){
            ls.add(prev);
            prev+=pq.peek();
            pq.poll();
            rs.add(aft);
            aft+=st.peek();
            st.pop();

        }
        Collections.reverse(rs);
        int[] a=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            a[i]=Math.abs(ls.get(i)-rs.get(i));
        }
        return a;
    }
}