/**
  * _isalpha - Entry point.
  * @c: argument that is checked
  * Description: checks for both lowercase and uppercase character
  * Return: Always 0 (Success)
  */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);

}
