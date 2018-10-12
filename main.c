#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validateCanh(int canh1, int canh2) {
    if (canh1 <= 0 || canh2 <= 0) {
        printf("Canh tam giac khong the be hon hoac bang 0.\n");
        return false;
    } else {
        return true;
    }
}

float tinhCanhHuyen(int canh1,int canh2) {
//    double tongBinhPhuong = (pow((double) canh1, 2) + pow((double) canh2, 2));
//    return (float) sqrt(tongBinhPhuong);
    return (float) sqrt(pow(canh1, 2) + pow(canh2, 2));
}
int main() {
    //Nhap 2 canh cua goc vuong
    int canh1, canh2;
    printf("Moi nhap canh goc vuong thu nhat.\n");
    scanf("%d", &canh1);
    getchar();
    printf("Moi nhap canh goc vuong thu hai.\n");
    scanf("%d", &canh2);
    getchar();
    //Kiem tra 2 canh
    bool isValidateCanh = validateCanh(canh1, canh2);
    //Neu dung thi in ra do dai canh huyen
    if (isValidateCanh) {
        printf("Canh huyen cua tam giac vuong la %.2f\n", tinhCanhHuyen(canh1, canh2));
    }
    return 0;
}