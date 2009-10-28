void read_data(int arr[], int size);
void read_mat(int mat[][COLS]);
void swab(int &v1, int &v2);

const int ROWS=;
const int COLS=;

int main ()
{
	int matrix[ROWS][COLS];
	
	read_mat(mat);

swap(mat[0][3], mat[2][5])
swap(mat[1][2], num)	
	
}
void read_data(int arr[], int size)
{
	for (int i=0; i<size; i++)
		cin >> arr[i];
}
void read_mat(int mat[][COLS])
{
//the simple way:
	for (int row=0; row<ROWS; row++)
		for (int col=0; col<COLS; col++)
			cin>>mat[row][col];

//a better way:
	for (int row=0; row<ROWS; row++)
		read_data(mat[row], COLS);
}		
void swab(int &v1, int &v2)
{
	int temp=v1;
	v1=v2;
	v2=temp;
}
