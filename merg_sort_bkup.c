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
	mer_fun(ele_sor, 0, n/2-1);
	//sor_ele1 = mer_fun(ele_sor, 0, n/2-1);
	printf("After the first func in main\n");
	mer_fun(ele_sor, n/2, n-1);
	//sor_ele2 = mer_fun(ele_sor, n/2, n-1);
	//mer_sor_ele(sor_ele1, sor_ele2);
	return 0;
}

int *mer_fun(int *sor, int init, int lst)
{
	int i, s, j, f, z;
	printf("init == %d   lst == %d\n", init , lst);
	sleep(1);
	for(i = init; i <= lst; i++)
	{
		printf("%d elements received\n",*(sor + i));
	}
	int *sor_ele1, *sor_ele2, *sor_ele3;
	sor_ele1 = (int *)malloc(sizeof(int) * 20);
	sor_ele2 = (int *)malloc(sizeof(int) * 20);
	if(*(sor + init ) == *(sor + lst))
	{
		z = init;
		printf("%d ===== %d\n", init, lst);
		printf("%d.....\n",*(sor + init));
		return (sor + lst);	
	}
	if(lst%2 == 0)
	{
		f = lst/2 + 1;
	}
	else
	{
		f = lst/2;
		if(init > f)
		f++;
	}
	sor_ele1 = mer_fun(sor, init, f);
	
		s = lst/2+1;
		j = lst;
	if(s == init)
		s++;	
	if(j < s)
		j++;
	printf("Before second func ....init == %d ... lst == %d\n", s, j);
	sor_ele2 = mer_fun(sor, s, j);
	printf("%d....%d\n", *sor_ele1, *sor_ele2);
	return sor_ele2;
	OUT:
		return 0;
	//sor_ele3 = mer_sor_ele(sor, sor_ele1, sor_ele2);
	//return (sor_ele3);
}


