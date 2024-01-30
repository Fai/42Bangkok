Program name: bsq
Turn in files: Makefile and all the necessary files
Makefile: Yes
Arguments: File(s) in which to read the square
Allow External functs: open, close, read, write, malloc, free, exit
Libft authorized: Not applicable
Description: Write a program that draws and print the biggest possible square in the given area•

The biggest square :
- The aim of this project is to find the biggest square on a map, avoiding obsta-cles.
- A file containing the map will be provided.  It’ll have to be passed as anargument for your program.
- The first line of the map contains information on how to read the map :
1. The number of lines on the map;
2. The "empty" character;
3. The "obstacle" character;
4. The "full" character.
- The map is made up of’"empty" characters’, lines and’"obstacle" characters’.
- The aim of the program is to replace’"empty" characters’by’"full"characters’in order to represent the biggest square possible.
- In the case that more than one solution exists, we’ll choose to represent thesquare that’s closest to the top of the map, then the one that’s most to the left.
- Your program must handle 1 to n files as parameters.
- When your program receives more than one map in argument, each solutionormap errormust be followed by a line break.
- Should there be no passed arguments, your program must be able to read onthe standard input.
- You should have a valid Makefile that’ll compile your project. Your Makefile mustn’t relink.

Definition of a valid map :
- All lines must have the same length.
- There’s at least one line of at least one box.
- At each end of line, there’s a line break.
- The characters on the map can only be those introduced in the first line.
- The map is invalid if a character is missing from the first line, or if two char-acters (of empty, full and obstacle) are identical.
- The characters can be any printable character, even numbers.
- In case of an invalid map, your program should displaymap erroron the erroroutput followed by a line break. Your program will then move on to the nextmap.