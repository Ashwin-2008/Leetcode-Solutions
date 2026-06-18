/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        Queue<TreeNode> r1 = new LinkedList<>();
        Queue<TreeNode> r2 = new LinkedList<>();

        r1.offer(p);
        r2.offer(q);

        while (!r1.isEmpty() && !r2.isEmpty()) {
            TreeNode f1 = r1.poll();
            TreeNode f2 = r2.poll();

            if (f1 == null && f2 == null) continue;

            if (f1 == null || f2 == null) return false;

            if (f1.val != f2.val) return false;

            r1.offer(f1.left);
            r1.offer(f1.right);

            r2.offer(f2.left);
            r2.offer(f2.right);
        }

        return r1.isEmpty() && r2.isEmpty();
    }
}