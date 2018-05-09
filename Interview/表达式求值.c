//https://stackoverflow.com/questions/9329406/evaluating-arithmetic-expressions-from-string-in-c

#include <stdio.h>

char* expressionToParse;

char peek();
char get();
int expression();
int number();
int factor();
int term();

int main()
{
	char str[1000];
	scanf("%s", str);
	expressionToParse = str;
	int res  = expression();
	printf("%d\n", res);
	
	return 0;
}

char peek()
{
	return *expressionToParse;
}

char get()
{
	return *expressionToParse++;
}

int number()
{
	int result = 0;
	while (peek() >= '0' && peek() <= '9'){
		result = 10 * result + get() - '0';
	}
	return result;
}

int factor()
{
	if (peek() >= '0' && peek() <= '9')
		return number();
	else if (peek() == '('){
		get();
		int result = expression();
		get();
		return result;
	}else if (peek() == '-'){
		get();
		return -factor();
	}
	return 0;
}

int term()
{
	int result = factor();
	while (peek() == '*' || peek() == '/')
		if (get() == '*')
			result *= factor();
		else 
			result /= factor();
	return result;
}

int expression()
{
	int result = term();
	while (peek() == '+' || peek() == '-')
		if (get() == '+')
			result += term();
		else 
			result -= term();
	return result;
}