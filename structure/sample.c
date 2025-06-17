//Read and print details books.
#include<stdio.h>
struct book{
    char Title[20];
    char author[20];
    float price;
};
int main(){
    int n,i;
    printf("no of books= ");
    scanf("%d",&n);
    struct book b[n];
    for(i=0;i<n;i++){
        printf("\nBook details %d\n", i + 1);
        printf("Title: ");
        scanf(" %s", b[i].Title);  // reads string with spaces
        printf("Author: ");
        scanf(" %s", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }
    printf("book searches---\n");
    for(i=0;i<n;i++){
        printf("Book %d: %s | %s | ₹%.2f\n", i + 1, b[i].Title, b[i].author, b[i].price);

    }
    return 0;
}
