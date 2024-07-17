<h1 align="center"> ~PRINTF~ <br><img alt="Static Badge" src="https://img.shields.io/badge/100%2F100-green?style=plastic&logoColor=green&label=success"></h1>
<div align="justify">The <code>printf</code> function is a command to display a formatted output string on the standart output. <i>'Formatted'</i> means that format specifiers, which begin with the % character, indicate the location and method of converting a data element (such as a number) into characters.<br>
Each character is written into the output until we reach '%'. When the function finds a format specifier, checks for it and output a new string with the new lenght of the string formatted.</div>

<h3> How to ... Printf</h3>

<div>You must include first "stdio.h" library.</div>
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
		<td align="center">%i %d</td>
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