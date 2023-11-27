bool check(int n){
    int tmp;
    while(n>1){
        tmp=n%10;
        if(tmp==0)return false;
        if(n%tmp!=0) return false;
        n/=10;
    }
    return true;
}
int *selfDividingNumbers(int left, int right, int * returnSize){
    int* kq=new int [right-left+1];
    int count=0;
    for(int i=left;i<=right;i++){
        if(check(i)==true){
                 count++;
                 kq[count]=i;
             }

        }
return kq;
           }
     
    
  
