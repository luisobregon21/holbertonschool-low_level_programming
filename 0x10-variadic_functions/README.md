#The following tasks are based on variadic functions
#declaration of variadic function below:
#int check(int a, double b, ...);
//the (...) is an ellipsis as place pf last parameter.
// va_ list: type for iterating arguments
# Va_start:Start iterating arguments with a va_list.
#va_arg retrieves an arguement // data type recieve;
ie. 
// int name(int n, ...)
{
	int i; // where arguements will be placed

	va_list list; // iterates arguements

	va_list start(list, n); // similar to list = arguemnet 1
	// first arguement tells you how many arguements will take

	i= va_arg(list, int); // first arguement type int
	i= va_arg(list, int); next arguement.
	va_end(list); // "termine".
	return (i);
}
#int sum = 0; where we store the sum of arguements
#for(i = 0; i < n; i++)
sum += va_arg(list, int);
#return (sum);

