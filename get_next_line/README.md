<h1 align="center"> ~GET_NEXT_LINE~ <br><img alt="success 125/100" src="https://img.shields.io/badge/125%2F100-green?style=plastic&logoColor=green&label=success"></h1>
<div align="justify">This proyect is about a function that returns a <code>line</code> read from a <b>file descriptor (fd)</b>. Everytime we give a call, the function return a new line, until we reach the end of the text. Every string is null terminated.<br>
As soon that we don't have more text inside the fd, our function will return <i>('NULL')</i> , and the program ends.</div>
<br>
<div align="left"><b>Allowed functions </b> : <code><code>malloc</code>, <code>open</code> <code>read</code>, <code>free</code>.</code></div>
<br>
<h3>What is a File Descriptor?</h3>
<p>A file descriptor is an int variable that uniquely identifies an open file.<p>
<div>
	<table align="center">
		<tr>
			<th>int Value<th>output</th>
		</tr>
		<tr>
			<td>0<td>stdin</td>
		</tr>
		<tr>
			<td>1<td>stdout</td>
		</tr>
		<tr>
			<td>2<td>stderr</td>
		</tr>
	</table>
</div>
<h3>- Static variables</h3>
<div align="justify"></div>