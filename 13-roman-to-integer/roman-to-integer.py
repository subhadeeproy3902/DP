class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        r = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        res = 0
        p = 0
        for ch in s:
            v = r[ch]
            if v > p: res += v - 2 * p
            else: res += v
            p = v
        return res
        