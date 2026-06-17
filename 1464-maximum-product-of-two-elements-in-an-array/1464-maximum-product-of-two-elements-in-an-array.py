class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        pq=[-i for i in nums]
        heapq.heapify(pq)
        x=-heapq.heappop(pq)
        y=-heapq.heappop(pq)
        return (x-1)*(y-1)