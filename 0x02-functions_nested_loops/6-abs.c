/**
  * _abs - Entry point.
  * @n: argument that is checked
  * Description: a function that computes the absolute value of an integer.
  * Return: Always 0 (Success)
  */
int _abs(int n)
{
if (n > 0)
return (n);

else
{
n *= -1;
return (n);
}
}
