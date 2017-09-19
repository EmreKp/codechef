#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int ti=0;ti<T;ti++){
       int h,ts;
       float cc;
       scanf("%d%f%d",&h,&cc,&ts);
       int grade;
       //üç koşul var ilkine göre gidelim
       if(h>50){		   
		   if(cc<0.7){			 
			   if(ts>5600) grade=10; //I II III
			   else grade=9; //I II
		   }
		   else if(ts>5600) grade=7; //I III
		   else grade=6; //I
	   }
	   else if(cc<0.7){
		   if(ts>5600) grade=8; //II III
		   else grade=6; //II
	   }
	   else if(ts>5600) grade=6; //III
	   else grade=5;
	   printf("%d\n",grade);
    }
    return 0;
}
