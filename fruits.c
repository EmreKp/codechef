#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
       int n,m,k;
       scanf("%d%d%d",&n,&m,&k);
       int fark;
       if(n>m){
		   m+=k;
		   fark=n-m;
	   }
	   else{
		   n+=k;
		   fark=m-n;
       }
       if(fark<0) fark=0;
       printf("%d\n",fark);
    }
    return 0;
}
