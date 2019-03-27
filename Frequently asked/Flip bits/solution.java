import java.util.*;

class Solution {
    
    static long flippingBits(long n) {
        long limit = 4294967296L;
        return limit - n - 1;
        // more info refer cracking to coding interview book - bit manipulation
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        System.out.println(flippingBits(num));
        
    }

}
