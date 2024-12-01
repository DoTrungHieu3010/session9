#include<stdio.h>
int main(){
	int n, pos;
	int arr[100];
	do {
		printf("So phan tu muon nhap tu 1 den 100: ");
	    scanf("%d",&n);
	} while (n<=0 || n>100);
	printf("%d phan tu ban muon nhap: \n", n);
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Nhap vi tri ban xoa tu 1 den %d: ", n);
	scanf("%d",&pos);
	if(pos=n){
		printf("Mang sau khi xoa la: \n");
	    for (int i=0;i<n-1;i++){
		    printf("%d", arr[i]);
	    }
	} else if(pos<n){
		for(int i=pos-1;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		printf("Mang sau khi xoa la: \n");
	    for (int i=0;i<n;i++){
		    printf("%d", arr[i]);
	    }
	}
	return 0;
}
