# Programming Reference for Arduino
## C++
### Introduction
Arduino uses a flavour of the C++ programming language designed for use within the Arduino IDE. As such all native C++ syntax features are supported, though not all native libraries are supported and many new, Arduino-specific libraries are available. 

### Data representation
Any programming language must represent real-life information in some way in order to allow actions to be formed in response to this information.
Data in C++ may be represented in 3 ways:
* Literals
	* Values directly typed into the code
	* e.g. 4, 'a', "Hello World"
* Variables
	* Names given to a block of memory that contains some data.
	* Exact value encoded within a variable may change during program execution
	* e.g. A variable *x* may represent the number 5 at the start of the program and the number 3 at the end
* Return values
	* The result of some *function*
	* Functions are covered in the *functions* section, so look there for more information
	* e.g. The function *func(x)* may give a *return value* of x+5, so *func(3)* would give a *return value* of 8

These representation methods may be used interchangeably - anywhere you use a literal, you can also use a variable or a return value (and vice-versa).  
  
Any data must also be given a *data type*. This *data type* tells the program what operations are allowed on that data (e.g. addition on numbers, not on letters).
C++ splits data between *simple* and *complex* types, with many different examples of each:
* Simple (AKA *primitive*)
	* Only stores one piece of information, e.g. a single number, a single character
	* C++ only supports 8 such simple data types:
		* 
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTE3NTYyNjgwOCwtMTY3OTY3OTI4MV19
-->