//the memory stack
int main()
{
	int m1=0, m2=0, m3=0 m4;
	m4=f(m1, m2, m3);
	cout << m1 << m2 << m3;
	
}
//---------------
int f(int &f1, int &f2, int f3)
{
	int f4=1;
	f1=f2=f3=1;
	g(f1, f2);
	return (f1+f4);
}
//---------------
void g(int &g1, int g2)
{
	int g3=2;
	g1=g2=2;
}
