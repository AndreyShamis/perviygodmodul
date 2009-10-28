const int N=10;

int main ()
{
	int arr1[N],
		arr2[N],
		arr3[N/2];
	int max;
	read_data(arr1, N);
	max=find_max(arr1, N);
	if (max==100)
	{
	}
		
	
	void read_data(int arr[], int size)
	{
		for (int i=0; i<size; i++)
			cin >> arr[i];
	}
//------------	
int find_max (const int arr[], int size)
{
int max=arr[0];
	for (int i=1; i<size; i++)
		if (arr[i]>max)
			max=arr[i];
return (max);
}
