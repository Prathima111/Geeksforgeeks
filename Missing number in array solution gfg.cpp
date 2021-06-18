class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int p=0;
        int k=(n*(n+1))/2;
        for(int i=0;i<n-1;i++){
            p=p+array[i];
        }
        return k-p;
    }
};
