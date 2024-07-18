<h1 align="center"> ~PRINTF~ <br><img alt="Static Badge" src="https://img.shields.io/badge/100%2F100-green?style=plastic&logoColor=green&label=success"></h1>
<div align="justify">The <code>printf</code> function is a command to display a formatted output string on the standart output. <i>'Formatted'</i> means that format specifiers, which begin with the % character, indicate the location and method of converting a data element (such as a number) into characters.<br>
Each character is written as output until we reach '%'. When the function finds any format specifier, looks for it and output the same string with the new length of the formatted string. This is possible thanks to the use of <b>variadics functions</b>.</div>

### How to ... [Printf](/ft_printf)

<div align="justify">You must include first " stdio.h " library.</div>

	#include <stdio.h>

	int main()
	{
		printf("hi, my name is %s, and I'm %i", "Eduardo", 25);
		return ;
	}
<div align="justify">Here we are passing 29 bytes characters in the first string, the output will be 34. Printf type is int , we are counting everytime how many bytes exist.</div>
<h3>- Format specifiers</h3>
<table align="center">
	<tr>
		<th>Character</th>
		<th align="center">Description</th>
	</tr>
	<tr>
		<td align="center">%</td>
		<td>Prints a '%' character.</td>
	</tr>
		<tr>
		<td align="center">%c</td>
		<td>Prints a character (char).</td>
	</tr>
		<tr>
		<td align="center">%s</td>
		<td>Prints a null-terminated '\0' string ("str").</td>
	</tr>
		<tr>
		<td align="center">%p</td>
		<td>Prints the address of a pointer or any other variable. The output is displayed in hexadecimal value. It's a format specifier which is used if we want to print data of type (void *).</td>
	</tr>
		<tr>
		<td align="center">%i, %d</td>
		<td>Prints an int as a signed integer. %d and %i are synonymous for output (int).</td>
	</tr>
		<tr>
		<td align="center">%u</td>
		<td>Prints decimal unsigned int.</td>
	</tr>
		<tr>
		<td align="center">%x, %X</td>
		<td>Prints an unsigned int as a hexadecimal number. x uses lower-case and X uses upper-case letters.</td>
	</tr>
</table>

<h3>- Variadics functions</h3>
<div align="justify">Variadics functions are functions that can receive a variable number of arguments.</div>

	int	ft_printf(char str, ...)
<div align="justify">In this case our <a href="https://github.com/eduaserr/42cursus/blob/master/ft_printf/ft_printf.c"><u>ft_printf</u></a> receive a string as a first argument, and this (...) means that the function has variadic arguments.</div><br><br>
<p align="center"><a href="https://learn.microsoft.com/es-es/cpp/preprocessor/variadic-macros?view=msvc-170"> What are variadic macros?</a></p><br>
	<div align="left" style="text-indent: 25px;"><ul><li><b>va_start</b> : Macro used to initialize a <i>'va_list'</i> object to start accessing the additional arguments from the last fixed argument received by the function. It must be called before using <i>'va_arg'</i>.</ul></div>
	<div align="left" style="text-indent: 25px;"><ul><b><li>va_list</b> : Is a data type used to access the additional arguments of a variadic function. A variable of this type is declared in the function that will receive the variable arguments.</ul></div>
	<div align="left" style="text-indent: 25px;"><ul><b><li>va_arg</b> : Macro used to access each additional argument. It takes the <i>'va_list'</i> object and the data type of the next argument. Each call to <i>'va_arg'</i> retrieves the next argument in the list.</ul></div>
	<div align="left" style="text-indent: 25px;"><b><ul><li>va_end</b> : Macro used to clean up the va_list object when it is no longer needed.</ul></div>