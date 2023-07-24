int isprime(long int number)
{
    long int j;
    int prime = 1;

    /* Test if the number is divisible, starting from 2 */
    for (j=2; j<number; j++)
    {
	/* Use the modulo operator to test if the
	 * number is evenly divisble, i.e., a 
	 * prime number */
	if(number%j == 0)
	{
	    prime = 0;
	}
    }
    return prime;
}
