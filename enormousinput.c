#include<stdio.h>
int main(){
	int n,a,count=0;
	scanf("%d %d",&n,&a);
	int b[n],i;
	for(i=0;i<n;i++){
		scanf("%d\n",&b[i]);
		if (b[i]%a==0){
			count++;
		}
	}
	
	printf("%d\n",count);
	return 0;
	
}
