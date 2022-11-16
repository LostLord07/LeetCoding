/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int l = 1, h = n;
        int mid;
        while(l<=h){
            mid = l - (l-h)/2;
            if (guess(mid)==-1){
                h = mid-1;
            } else if (guess(mid) ==1){
                l = mid+1;
            } else{
                return mid;
            }
        }
        
        return mid;
    }
};