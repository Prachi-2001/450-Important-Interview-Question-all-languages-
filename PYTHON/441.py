''' count set bits in an integer '''

class Solution:
	def setBits(self, N):
		count = 0
		while(N):
			count += N & 1
			N >>= 1
		return count