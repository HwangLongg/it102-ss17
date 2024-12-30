#include <stdio.h>
#include <string.h>
void nhap(char *a){
    printf ("moi nhap vao chuoi bat ky ");
    fgets (a,100,stdin);
    a[strcspn(a, "\n")] = '\0';
   
}
 void in (char *a){
    for (int i = 0;i<strlen(a);i++){
        printf ("%c",a[i]);
    }
 }
 int chucai(char *b){
    int c = 0;
    for (int i=0 ;i<strlen(b);i++){

        if (b[i]<='z'&&b[i]>='a'){
            c++;
        } else if (b[i]>='A'&&b[i]<='Z'){
            c++;
        }
    }
    printf ("so chu cai la %d ",c);
 }
 int chuso (char *c ){
    int p = 0;
    for (int i =0; i<strlen(c) ;i++){
        if (c[i]<='9'&&c[i]>='0'){
            p++;
        }
    }
    printf (" chu so %d ",p);
 }
 int kitudacbiet (char *k){
    int c = 0;
    for (int i = 0; i<strlen(k);i++){
        if (!(k[i]>='0'&&k[i]<='9')&&!(k[i]>='a'&&k[i]<='z')&&!(k[i]>='A'&&k[i]<='Z')){
            c++;
        }
    }
    printf ("ki tu dac biet %d ",c);

 }
int main (){
    
    
    int input;
   
    char arr[100];
    
    do {
        printf ("moi nhap lua chon cua ban ");
        scanf ("%d",&input);
        getchar();
        switch (input){
            case 1 :
            nhap (arr);
            break ;
            case 2 :
            in(arr);
            break ;
            case 3 :
            chucai (arr);
            break ;
            case 4 :
            chuso (arr);
            break ;
            case 5 :
            kitudacbiet (arr);
            break ;
            case 6 :
            printf ("thoat mang ");
            return 0;
            break ;
            default :
            printf (" moi nhap lai ");
            break ;

        }
    } while (1);
    return 0;
}