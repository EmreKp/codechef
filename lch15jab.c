#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
       char s[51];
       scanf("%s",s);
       int u=strlen(s);
       if(u%2==1) {
		   printf("NO\n");
		   continue;
	   }
       int count[26]={0};
       for(int i=0;i<strlen(s);i++)
		  count[s[i]-'a']++;
	   int bul=0;
	   for(int c=0;c<26;c++){
		   if(count[c]==u/2){
			   bul++;
			   break;
		   }
	   }
	   bul==1?printf("YES\n"):printf("NO\n");
    }
    return 0;
}
