#include<stdio.h>
int main(){
	int n, pos, value;
	int arr[n];
	printf("So phan tu ban muon: ");
	scanf("%d",&n);
	printf("Nhap phan tu trong mang: ");
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Nhap phan tu ban muon sua: ");
	scanf("%d", &value);
	printf("Vi tri ban muon sua: ");
	scanf("%d", &pos);
	arr[pos-1]=value;
	printf("Mang sau khi sua la: ");
	for (int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
