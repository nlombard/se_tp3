int triple(int i)
{
	return 3*i;
}

int main()
{
	int a = 5;
	int b = 4;
	int z;

	z = a * b;

	if(z > a + b)
	{
		z = triple(z);
	}

	return 0;
}
