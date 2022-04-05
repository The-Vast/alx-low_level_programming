# C - Static libraries
Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. 
Practice of:
* How static libraries work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

## Tasks
0. A library is not a luxury but one of the necessities of life:
	Create the static library libmy.a containing all the functions listed below
1. Without libraries what have we? We have no past and no future:
	Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
