#include<stdio.h>
//�ϰ������� ����Ǯ��
int arr[10];
int main(){
	int i,j,sum=0,tmp;
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	//�θ��� �̴� �۾� 
	for(i=0;i<8;i++){
		for(j=i+1;j<9;j++){
			tmp=sum-(arr[i]+arr[j]);
			if(tmp==100){
				arr[i]=-1;
				arr[j]=-1;�� 
				break;
			}
		}
		if(tmp==100) break;
	}
	for(i=0;i<9;i++){ 
		if(arr[i]>0) printf("%d ",arr[i]);
		//������ �ش��ϴ� ������ ���ܽ��Ѽ�
		//��¿��� ���ܽ�Ű�� �ȴٴ� ����� �� 
	}
	return 0;
}

