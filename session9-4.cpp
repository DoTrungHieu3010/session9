#include <stdio.h>
int main() {
    int choice, check, n, pos, value;
    int arr[100];
    check=0;
    while (1) {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1: 
            check++;
            printf("Nhap so phan tu mang: ");
            scanf("%d", &n);
            if (n < 0 ||n > 100) {
                printf("So phan tu khong hop le\n");
                n = 0;
                break;
            }
            for (int i = 0; i < n; i++) {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
            break;
        case 2: 
            if (check == 0) {
                printf("Chua nhap mang\n");
                break;
            }
            printf("Mang hien tai:\n");
            for (int i = 0; i < n; i++) {
                printf("arr[%d]: %d\n", i, arr[i]);
            }
            break;
        case 3:
            if (check == 0) {
                printf("Chua nhap mang\n");
                break;
            }
            printf("Vi tri them phan tu: ");
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Vi tri them phan tu khong hop le\n");
                break;
            }
            printf("Nhap gia tri phan tu them: ");
            scanf("%d", &value);
            for (int i = n; i > n; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;
            break;
        case 4:
            if (check == 0) {
                printf("Chua nhap mang\n");
                break;
            }
            printf("Nhap vi tri can sua: ");
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Vi tri sua khong hop le\n");
                break;
            }
            printf("Nhap gia tri moi: ");
            scanf("%d", &value);
            arr[pos] = value;
            printf("Da sua phan tu\n");
            break;
        case 5: 
            if (check == 0) {
                printf("Chua nhap mang\n");
                break;
            }
            printf("Nhap vi tri can xoa phan tu: ");
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Vi tri xoa khong hop le\n");
                break;
            }
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Da xoa phan tu\n");
            break;
        case 6:
            return 0;
        default:
            printf("Lua chon khong hop le\n");
        }
    }
    return 0;
}
