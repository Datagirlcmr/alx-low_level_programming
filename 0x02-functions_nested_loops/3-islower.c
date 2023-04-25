/**
 * _islower - Entry point.
 * @c: argument that is checked
 * Description: a function that checks for lowercase character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);

}
