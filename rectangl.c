#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if ((a==b && c==d) || (a==c && b==d) || (b==c && a==d)){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}