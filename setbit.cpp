class Solution {
public:
    static int setbits(int n){
        int count = 0;
        
        while(n){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        return count ;
    }
    
    static bool compare(int a, int b){
        int p = setbits(a);
        int q = setbits(b);
        if(p == q){
            return a < b;
        }
        return p < q;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;

    }
};
