//Funcion de suma, retorna la suma de 2 numeros
int suma(int a, int b)
{
	return a+b;
}

//Funcion resta, retorna la resta de 2 numeros
int resta(int a, int b)
{
	return a-b;
}

//Funcion multiplicaicon, retorna el producto de 2 numeros
int multiplicacion(int a, int b)
{
	return a*b;
}

//Funcion division, retorna la diferencia entre 2 numeros, si el segundo numero es 0, informa error, y retorna 0
int division(int a, int b)
{
	if (b == 0)
	{
		printf("No se puede dividir por 0\n");
		return 0;
	}

    return a/b;

}

//Retorna el factorial de un numero
int factorial(int num)
{
	int i;
	int result = num;
	for (i = num-1; i > 0; i--)
	{
		result=result*i;
	}

	return result;
}
