class Solution {
    public int reverseExponentiation(int n) {
        int power = 0;
        int num = n;
        int reverse = 0;
        while(num > 0){
            num /= 10;
            power++;
        }

        num = n;
        for(int i = 0; i < power; i++){
            int digit = num / (power-i);
            reverse += digit;
            reverse *= 10;
            for(int j = 0; j < power-i; j++) digit *= 10;
            num -= digit;
        }
        // undo last shift
        reverse /= 10;

        int result = n;
        for(int i = 1; i < reverse; i++){
            result *= n;
        }
        return result;
    }
}
