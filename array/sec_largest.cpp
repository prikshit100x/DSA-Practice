class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int larg= arr[0];
        int slarg =-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>larg){
                slarg=larg;
                larg=arr[i];
            }
            else if(arr[i]<larg && arr[i]>slarg){
                slarg =arr[i];
            }
        }
        return slarg;
    }
};
