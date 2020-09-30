#include<stdio.h>
//일곱난쟁이 강사풀이
int arr[10];
int main(){
	int i,j,sum=0,tmp;
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	//두명을 뽑는 작업 
	for(i=0;i<8;i++){
		for(j=i+1;j<9;j++){
			tmp=sum-(arr[i]+arr[j]);
			if(tmp==100){
				arr[i]=-1;
				arr[j]=-1;용 
				break;
			}
		}
		if(tmp==100) break;
	}
	for(i=0;i<9;i++){ 
		if(arr[i]>0) printf("%d ",arr[i]);
		//음수만 해당하는 수에서 제외시켜서
		//출력에서 제외시키면 된다는 방법을 이 
	}
	return 0;
}

