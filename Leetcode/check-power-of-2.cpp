//method 1
/* If you subtract 1 from a power of two, all the bits flip:

4 (100) - 1 = 3 (011)

8 (1000) - 1 = 7 (0111)

The Trick:
If you perform a Bitwise AND (&) between n and n-1, a power of two will always result in 0.

Example with 8:

Plaintext
  1000  (8)
& 0111  (7)
-------
  0000  (0) -> True, it is a power of 2
Example with 6 (Not a power of 2):

Plaintext
  0110  (6)
& 0101  (5)
-------
  0100  (4) -> Result is not 0, so False.*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};



//method 2 - RECURSION
/*.  This logic is simple: keep dividing by 2.
     If you hit 1, it's a power of two.
     If you hit an odd number before 1, it's not.   
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Base cases
        if (n <= 0) return false;
        if (n == 1) return true;
        
        // If odd, it can't be a power of 2 (except 1, handled above)
        if (n % 2 != 0) return false;
        
        // Recursive step: check the next number down
        return isPowerOfTwo(n / 2);
    }
};