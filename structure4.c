#include<stdio.h>
struct item {
	int itemno;
	char itemname[51];
	float price;
};
main(){
	struct item x1;
	struct item  *x2=malloc(sizeof(struct item));
	printf("Item no : ");scanf("%d",&x1.itemno);
	printf("Item name : ");fflush(stdin);gets(x1.itemname);
	printf("Price : ");scanf("%f",&x1.price);
	
	printf("Item info is %d %s %f",x1.itemno,x1.itemname,x1.price);
	
	printf("\nItem no : ");scanf("%d",&x2->itemno);
	printf("Item name : ");fflush(stdin);gets(x2->itemname);
	printf("Price : ");scanf("%f",&x2->price);
	
	printf("Item info is %d %s %f",x2->itemno,x2->itemname,x2->price);
}
