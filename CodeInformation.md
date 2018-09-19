# Programming Reference for Arduino
## Introduction
The Arduino development platform utilises a flavour of the C++ programming language with some variations specific to the platform. As such any general C++ syntax (e.g. variable declaration, if-else, while loops, etc.) will also work with Arduino, although many native C++ functions and classes/objects (e.g. cin, cout, printf, scanf) will not work.  
  
There are countless C++ tutorials in website, video and book form that may be used to gain the C++ background necessary for Arduino programming.  
The Arduino website also contains a reference sheet for all Arduino-specific programming information, though it may not make much sense until you are generally familiar with C++. This can be found at: https://www.arduino.cc/reference/en/

This document also aims to provide a reference for beginners to C++ and Arduino programming to assist in creating basic Arduino programs.

## C++
### Introduction
Arduino uses a flavour of the C++ programming language designed for use within the Arduino IDE. As such all native C++ syntax features are supported, though not all native libraries are supported and many new, Arduino-specific libraries are available. 

### Data representation
Any programming language must represent real-life information in some way in order to allow actions to be formed in response to this information.  
  
Data in C++ may be represented in 3 ways:
* Literals
	* Values or equations directly typed into the code
	* e.g. 4, 'a', "Hello World", 3+6, 8/2, etc.
* Variables
	* Names given to a block of memory that contains some data.
	* Exact value encoded within a variable may change during program execution
	* e.g. A variable *x* may represent the number 5 at the start of the program and the number 3 at the end
* Return values
	* The result of some *function*
	* e.g. The function *func(x)* may give a *return value* of x+5, so *func(3)* would give a *return value* of 8

These representation methods may be used more-or-less interchangeably - almost anywhere you use a literal, you can also use a variable or a return value (and vice-versa).  
  
Any data must also be given a *data type*. This *data type* tells the program what operations are allowed on that data (e.g. addition on numbers, not on letters).
C++ splits data between *simple* and *complex* types, with many different examples of each:
* Simple (AKA *primitive*):
	* Only stores one piece of information, e.g. a single number, a single character
	* The major simple data types in c++ are:
		* **int** - Whole number between 2^32^ and -2^32^ (int = *integer*)
		* **float** - Number with a decimal point (float = *floating point number*)
		*  **char** - Character on the non-extended ASCII table (see: http://www.asciitable.com/) (char = *character*)
		* **bool** - Value representing *true* or *false* (bool = *boolean*, see: https://en.wikipedia.org/wiki/Boolean_algebra)
	* These data types are used to store **all** data in a C++ program
* Complex:
	* Stores multiple pieces of information, i.e. a collection of simple data
	* Organises data to make the program easier to work with, but are not technically necessary for any program
	* The 2 major complex data types in C++ are:
		* **Arrays** - A list of data with all data being of the same type (e.g. there may be an **int** array, or a **char** array.
		* **Objects** - A set of data, which may have different types to each-other
			* Objects may also have operations associated with them (See the later section on **Objects** for more)  

### Variables
Variables are names given to a block of memory in the computer running your programming. These blocks of memory may store different data at different points during program execution, and thus the value encoded by any single variable may change.  
* **Syntax**
	*  **Declaration**
		* Variables in C++ must be declared before they are used. This is so that the program knows how much memory it should allocate for its variables
		* <*data type*> <*name*>;
			* **int** x; (Creates a variable called *x*, storing integers)
			* **bool** trueOrFalse; (Creates a variable call *trueOrFalse*, storing boolean values)
	* **Assignment**
		* The value stored in a variable may be changed by *assigning* a new value
		* The value assigned to a variable must be of the same type as the variable being assigned to (i.e. int variables should be given int values, char variables must be given char values)
		* <*name*> *=* <*new value*>; (Note that *new value* may be a literal, a primitive, or a return value)
			* x = 5; (Assigns the value of *5* to the variable x, as declared above)
			* y = x; (Assigns the value encoded by the variable x (in this case that's *5*) to the variable y, assuming y is already declared as an integer)
		
### Functions
Functions are blocks of code that may be reused in multiple places without copy-pasting, and may give *return values*, i.e. the result of that function.  
Function creation is complicated and beyond the scope of this document, so this section will cover function use.
* **Syntax**
	*  **Calling**
		* Functions in C++ may be *called*. When a function is *called* then the code within that function is executed before any code after the function call is  executed. This function-encapsulated code is often hidden from the person using the function (normally in some other file somewhere).
		* Functions may be given *parameters*. *Parameters* are the pieces of data that functions use to complete the objective of the function (often calculating some value)
			* Parameters may be variables, literals, or return values
		* <*function name*> ( <*parameter1*> , <*parameter2*>, <etc.> );
			* Print( 5 ); (Runs the *Print* function with 5 as a parameter)
			*  x = Add( 5, 2 ); (Runs the *Add* function with parameters 5 and 2, and assigns the result to the variable x)
			* x = Add( 10, Add( 5, 2 ) ) (Runs the *Add* function with parameters 5 and whatever the result of *Add( 5, 2 )* is (as per above), and assigns the final result to variable x)
	* **Importing**
		* Functions often aren't available by default, and so must be imported from some other file (known as a code library file)
		* #include < <*library file name*> >
			* #include <Math.h> (Allows you to use any function defined in the file *Math.h*


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQ2NzU2NDAwOSwtMTY3OTY3OTI4MV19
-->