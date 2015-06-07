#include<stdio.h>
#include<stdlib.h>
int l;
int *mer_fun(int *, int, int);
	int k;
int main()
{
	int *ele_sor,*sor_ele1, *sor_ele2, n, i;
	ele_sor = (int *)malloc(sizeof(int) * 20);
	sor_ele1 = (int *)malloc(sizeof(int) * 20);
	sor_ele2 = (int *)malloc(sizeof(int) * 20);
	printf("Enter the number of elements to be sorted elements:-\n");
	scanf("%d", &n);
	printf("Enter the unsorted elements:-\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", (ele_sor + i));
	}
	sor_ele1 = mer_fun(ele_sor, 0, n/2-1);
	printf("After the first func in main\n");
	sor_ele2 = mer_fun(ele_sor, n/2, n-1);
	 mer_sor_ele(sor_ele1, sor_ele2);
	return 0;
}

int *mer_fun(int *sor, int init, int lst)
{
	int *sor_ele, *sor_ele1;
	if(init == lst)
	{
		printf("%d...........\n", *(sor + init));
		return (sor + init);
	}
	int first, last, mid;
	first = init;
	last = lst;
	mid = (first + last)/2;
	sor_ele = mer_fun(sor, first, mid);
	sor_ele1 = mer_fun(sor, mid + 1, last);
	mer_sor_ele(sor_ele, sor_ele1);
}


