#include<stdio.h>

int a[9];
int main(void){
	int sum=0,k,i,j,t;
	
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}µÊ
	
	for(i=0;i<9;i++){//i°¡ 8ÀÌ¾îµµ  
		for(j=i+1;j<9;j++){
			if(a[i]+a[j]==k)
			break;
		}
		if(a[i]+a[j]==k)
		break;
	}
//	printf("%d %d\n",i,j);
	for(t=0;t<9;t++){
		if(t==i||t==j){

		}else{
			printf("%d ",a[t]);
		}
	}
	
	return 0;
}
