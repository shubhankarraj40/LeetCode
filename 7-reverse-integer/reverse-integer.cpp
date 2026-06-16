class Solution {
public:
    int reverse(int x) {
        int revNumber = 0;
        while(x != 0){
        int dig = x%10;
        if(revNumber > INT_MAX/10 || revNumber < INT_MIN/10){
            return 0;
        }
        revNumber = revNumber * 10 + dig;
        x = x/10;
       
    }
    return revNumber;
}
};