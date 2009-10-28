//is_prime whit primery filter system
int main()
}
if (is_prime(num))
bla
bla
{
bool is_prime(int num)
{
static bool primes[MAX_PRIME]; 	   //it know if it is filled whit garbage or not
static bool first=true;		//it's the only first time what the fonction started
	if (first)
	{
		int i, j;						 			 //the primery filter system
	
		for (i=2; i<size; i++)
			primes[i]=true;
	
		for (i=2; i<size/2; i++)
		{
			if (primes[i])
			{
				for (j=2; j*i<size; j++)
					primes[i*j]=false;
			}
		}	
	first=false;
	}
	if (num<MAX_PRIME)
		return(primes[num]);
	else	
		return(false);
}
