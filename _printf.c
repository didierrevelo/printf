/**
 * prin_char - print char.
 * @valist: char to print.
 */
void prin_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * prin_integer - print integer.
 * @valist: int to print.
 */
void prin_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * prin_float - print float.
 * @valist: float to print.
 */
void prin_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * prin_string - print string.
 * @valist: string to print.
 */
void prin_string(va_list valist)
{