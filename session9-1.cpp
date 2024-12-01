#include<stdio.h>
int main(){
	int n, pos, value;
	int arr[100];
	do {
		printf("So phan tu muon nhap tu 1 den 100: ");
	    scanf("%d",&n);
	} while (n<=0 || n>100);
	printf("%d phan tu ban muon nhap: \n", n);
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Nhap phan tu ban muon them: ");
	scanf("%d",&value);
	printf("Nhap vi tri ban muon them tu 0 den %d: ", n);
	scanf("%d",&pos);
	if(pos>=n){
		arr[pos]=value;
	} else if(pos<n){
		for(int i=n;i>pos;i--){
			arr[i]=arr[i-1];
		}
		arr[pos]=value;
	}
	printf("Mang sau khi them la: \n");
	for (int i=0;i<n+1;i++){
		printf("%d", arr[i]);
	}
	return 0;
}
