int Solution::divide(int A, int B) {
    long long int a=A,b=B,sign=1,quo=0,tmp=0;
    if(a*b<0) sign=-1;
    if((A==INT_MIN && B==-1)||B==0) return INT_MAX;
    a=abs(a),b=abs(b);
    for(int i=31;i>=0;i--) { 
        if(tmp+(b << i)<=a) { 
            tmp+=b<<i; 
            quo|=1LL<<i; 
        }    
    }
    return (int)(sign*quo);
}
