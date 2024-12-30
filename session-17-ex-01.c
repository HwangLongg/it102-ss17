#include <stdio.h>
int nhap (int *a,int n){
   
    printf ("moi nhap tung phan tu ");
    for (int i = 0;i<n;i++){
        printf ("phan tu a[%d] la ",i);
        scanf ("%d",&*(a+i));

    }
}
int hienthi (int *b,int n){
    for (int i =0;i<n;i++){
        printf ("phan tu so %d la %d ",i,*(b+i));
    }
}
int size(int *c,int n ){
    printf ("do dai mang la %d ",n);
}
int sum(int *d,int n){
    int tong = 0;
    for (int i = 0;i<n;i++){
        tong = tong + d[i];
    }
    printf ("tong cua mang la %d ",tong);
}
int max(int *e,int n ){
    int max = *e ;
    for (int i = 0;i<n;i++){
        if (max < *(e +i)){
            max = *(e+i);
        }
    }
    printf ("so lon nhat mang la %d ",max);
}

int main (){
    int arr[10];
    int m;
    printf ("moi nhap vao so phan tu ");
    scanf ("%d",&m);
    do {
        int input = 1 ;
        printf ("moi nhap lua chon ");
        scanf ("%d",&input);
        switch (input) {
            case 1 :
            nhap (arr,m);
            break ;
            case 2 :
            hienthi (arr,m);
            break ;
            case 3 :
            size (arr,m);
            break ;
            case 4 :
            sum (arr,m);
            break ;
            case 5 :
            max (arr,m);
            break;
            case 6 :
            printf ("thoat chuong trinh ");
            return 0;
            break;
            default :
            printf ("moi nhap lai lua chon ");
            break ;
        }
    }while (1);
    return 0;
}