#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
		int n;
		scanf("%d",&n);
		int d[100001]={0};
		int max=0; //100000e kadar iterate etmesin
		for(int i=0;i<n;i++){
			int t;
			scanf("%d",&t);
			d[t]++;
			if(max<t) max=t;
		}
		for(int i=1;i<=max;i++){
			if(d[i]==1){
				printf("%d\n",i);
				break;
			}
		}
    }
    return 0;
}
