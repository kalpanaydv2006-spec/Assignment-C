#include<stdio.h>
#define MAX_BOOKS 100
struct Book{
    int ID;
    char name[500];
    char author[500];
    float price;
};
int main(){
    printf("Kalpana Yadav, 125113003\n");
    struct Book book[MAX_BOOKS];
    int n,i;
    printf("Enter number of books:");
    scanf("%d", &n);
    for(i=1; i<n; i++){
printf("Enter details of book:\n");
printf("ID:");
scanf("%d", &book[i].ID);

printf("\nName:");
scanf("%s", book[i].name);
printf("\nAuthor:");
scanf("%s", book[i].author);
printf("\nPrice:");
scanf("%f", &book[i].price);
    }
    printf("Books with price above 500\n");
    for(i=1; i<n; i++){
        if(book[i].price >500)
        printf(" ID of book is %d\n", book[i].ID);
    printf(" Name of the book is %s\n", book[i].name);
printf("Author of the book is %s\n", book[i].author);
printf("Price of the book is %f", book[i].price);

    }
    return 0;

}
