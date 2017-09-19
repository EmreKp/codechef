#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
       char X[11],Y[11];
       scanf("%s",X);
       scanf("%s",Y);
       int flag=1;
       for(int i=0;X[i]!='\0';i++){
		   if(X[i]!=Y[i] && X[i]!='?' && Y[i]!='?'){
			   flag--;
			   break;
		   }
	   }
	   flag==1 ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}
