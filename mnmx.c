#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
		int N;
        scanf("%d",&N);
        int a[N];
        for(int i=0;i<N;i++)
			scanf("%d",&a[i]);
		long min=a[0];
		for(int i=1;i<N;i++){
			if(a[i]<min) min=a[i];
		}
		printf("%ld\n",min*(N-1));
    }
    return 0;
}
