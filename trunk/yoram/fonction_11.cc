//modular && top down design

//roots of quadratic equation


enum num_of_sols_t {NO_ROOTS,		//name of tipe
					SINGLE_ROOT,
					TWO_ROOTS,
					INFINITE_ROOTS};
int main ()
}
	double param_a, param_b, param_c, x1=0, x2=0;
	num_of_sols_t num_of_sols;
	
	read_params(param_a, param_b, param_c);
	
	if (param_a==0)				  		 //num_of_sols is the quantity of solves
		num_of_sols=solve_linear(param_b, param_c, x1); //x1 is the value of the solve
	
	else									//x1 & x2 is the value of the solves
		num_of_sols=solve_quadratic(param_a, param_b, param_c, x1, x2);
	
	print_rootst(num_of_sols, x1, x2);
	
	return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------
void read_params(double &a, double &b, double &c)
{
	cin >> a >> b >> c;		   //the fonction will read parameters from the user
}
//------------------------------------------------------------------------------
num_of_sols_t solve_linear(double m, double n, double &root)
{
	if (m==0)
		if (n==0)
			return (INFINITE_ROOTS);
		else
			return (NO_ROOTS);
	else
	{
		root=-n/m;
		return (SINGLE_ROOT);
	}
}
//------------------------------------------------------------------------------
num_of_sols_t solve_quadratic(double a, double b, double c, double x1, double x2)
{
	double disc=b*b-4*a*c;
	
	if (disc<0)
		return (NO_ROOTS);
	else if (disc==0)
	{
		x1=-b/(2*a);
		return(SINGLE_ROOT);
	}
	else
	{
		x1=(-b-sqrt(disk))/(2*a);
		x1=(-b+sqrt(disk))/(2*a);
		return(TWO_ROOTS);
	}
}
//------------------------------------------------------------------------------
void print_rootst(num_of_sols_t num_of_sols, double x1, double x2)
{
	switch (num_of_sols)
	{
		case NO_ROOTS: cout << "no roots to equation\n";
					   break;
		case INFINITE_ROOTS: cout << "every x is a root\n";
							 break;
		case TWO_ROOTS: cout << x1 << " " << x2 << endl;
					    break;
		case SINGLE_ROOT: cout << x1 << endl;
						  break;
	}
}
//------------------------------------------------------------------------------
