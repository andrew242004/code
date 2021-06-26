#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ 
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int min = 0;
	for(int i=0;i<n;i++){
		if(min==0 ){
			min = arr[i];
		}else if(arr[i]<min ){
			min = arr[i];
		}
	}
	if(min== 0){
	}else{
		printf("So nguyen nho nhat: %d",min);
	}
}


