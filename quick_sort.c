#include<stdio.h>
#include<stdlib.h>

int *ent_num();
int *quick_sort(int *, int , int);
int quick_display(int *);

int main()
{
	int *quick_arr, i;
	quick_arr = ent_num();
	quick_arr = quick_sort(quick_arr, 0, 7);
	quick_display(quick_arr);
	return 0;
}

int *ent_num()
{
	int *quick_arr, i;
	quick_arr = (int *)malloc(sizeof(int) * 20);
	printf("Enter the array %s:-\n", __func__);
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &quick_arr[i]);
	}
	return quick_arr;
}

int *quick_sort(int *quick_arr, int init, int last)
{

	int lar_ind, smal_ind, pvt, temp, first;
	lar_ind = init;
	smal_ind = last;
	pvt = init;
	first = 0;
	
	if(init >= last)
	{
		return quick_sort;	
	}
	while(lar_ind < smal_ind)
	{
		if(first > 0)
		{
			lar_ind = 0;
			smal_ind = last;
		}
		first++;
		while(*(quick_arr + pvt) >= *(quick_arr + lar_ind) && lar_ind <= last)
		{
			lar_ind++;
		}
		while(*(quick_arr + pvt) < *(quick_arr + smal_ind) && smal_ind >= init)
		{
			smal_ind--;
		}		
		if(lar_ind < smal_ind)
		{
			temp = *(quick_arr + lar_ind );
			*(quick_arr + lar_ind ) = *(quick_arr + smal_ind );
			*(quick_arr + smal_ind) = temp;	
		}
	}
	
	if(*(quick_arr + smal_ind) < *(quick_arr + pvt))
	{
	temp = *(quick_arr + smal_ind );	
	*(quick_arr + smal_ind) = *(quick_arr + pvt);
	*(quick_arr + pvt) = temp;	
	}
	else if(init < smal_ind)
	{
		smal_ind--;
	}
	quick_sort(quick_arr, init, smal_ind);
	quick_sort(quick_arr, smal_ind + 1, last);
	return quick_arr;
}

int quick_display(int *quick_arr)
{
	int i;
	printf("Array after the Quick Sort \n");
	for(i = 0; i < 8; i++)
	{
		printf("%d\n", quick_arr[i]);
	}

	return 0;	
}
