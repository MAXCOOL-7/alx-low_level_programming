include 
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
                           void print_number(int n)
{
                       unsigned int n1;
n                1 = n;
                  if (n < 0)
{    
_putchar('-')
n1 =          -n;                                  
}
                if (n1 / 10 != 0)
{
        print_                                         number(n1 / 10);
}
_ putchar((n1                                             % 10) + '0'       )                 
