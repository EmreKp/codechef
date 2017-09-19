#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
       char s1[101],s2[101];
       int min=0,max=0;
       scanf("%s",s1);
       scanf("%s",s2);
       for(int i=0;s1[i]!='\0';i++){
		   if(s1[i]=='?'||s2[i]=='?') max++;
		   else if(s1[i]!=s2[i]){
			   min++;
			   max++;
		   }
		   //eşitse maxı da artırma
	   }
	   printf("%d %d\n",min,max);
    }
    return 0;
}
