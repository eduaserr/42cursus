<h1 align="center"> ~GET_NEXT_LINE~ <br><img alt="success 125/100" src="https://img.shields.io/badge/125%2F100-green?style=plastic&logoColor=green&label=success"></h1>
<p align="justify">This proyect is about a function that returns a <code>line</code> read from a <b>file descriptor (fd)</b>. Everytime we give a call, the function return a new line, until we reach the end of the text. Every string is null terminated.<br>
As soon that we don't have more text inside the fd, our function will return <i>('NULL')</i> , and the program ends.</p>
<br>
<p align="left"><b>Allowed functions </b> : <code>malloc</code>, <code>open</code>, <code>read</code>, <code>free</code>.</p>
<br>
<a href="https://42-cursus.gitbook.io/guide/rank-01/get_next_line/open-and-read">If you dont know how to use open() and read() functions, there is an easy guide for you.</a>
<br>
<h3>What is a File Descriptor?</h3>
<p>A file descriptor is an int variable that uniquely identifies an open file.<p>
<div align="left">
	<table align="justify">
		<tr>
			<th>int Value<th>output<th>Description</th></tr>
		<tr>
			<td>0<td>stdin<td>Fd used when reading user input from the terminal.</td></tr>
		<tr>
			<td>1<td>stdout<td>Fd used when writing to the terminal.</td></tr>
		<tr>
			<td>2<td>stderr<td>Fd used when writing an error to the terminal, a program which logs errors to a file.</td></tr>
	</table>
</div>
<br>
<h3>- Static variables</h3>
<p align="justify"><b>Static variables</b> are really important, they have the property of preserving their value even after they are out of their scope, preserves its previous value in its previous scope and is not initialized again.<br>A static int variable remains in memory while the program is running.</p>