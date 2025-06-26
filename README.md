# File-Handling-program

COMPANY:CODTEC IT SOLUTIONS

NAME:PUJA RANI

INTERN ID:CT04DN1860

DOMAIN:C LANGUAGE

DURATION:4 WEEKS

MENTOR:NEELA SANTOSH

This C program demonstrates fundamental file handling operations such as creating, writing to, appending to, and reading from a file. It uses the standard C library functions like fopen(), fclose(), fgets(), fputs(), and fgetc() to perform various file operations. Below is a detailed breakdown of the code.

Overview
The program is designed to interact with a user through the command line interface, allowing them to choose from five operations: creating a file, writing data to a file, appending data to a file, reading the contents of a file, and exiting the program. The file used for these operations is named "sample.txt", and the program handles errors gracefully if any operation fails, providing appropriate error messages.

Functions
createFile()
This function creates a new file or overwrites an existing file named "sample.txt". It opens the file in "write" mode ("w"), which will create the file if it does not exist or truncate it to zero length if it does. The function checks if the file was opened successfully by testing the return value of fopen(). If the file pointer (fp) is NULL, an error message is printed. If the file is opened successfully, it closes the file using fclose() and informs the user that the file has been created or overwritten.

writeToFile()
This function allows the user to write data into the file. The file is opened in "write" mode ("w") again, which ensures that any existing content in the file is erased. The user is prompted to enter data, which is captured using fgets(), and then written into the file using fputs(). After the data is written, the file is closed, and the user is notified that the data has been successfully written.

appendToFile()
This function works similarly to writeToFile(), but it opens the file in "append" mode ("a"), meaning the new data will be added at the end of the file without altering the existing content. This function prompts the user to input data, which is appended to the file. Afterward, the file is closed, and a success message is displayed to the user.

readFile()
This function reads the contents of the file "sample.txt". It opens the file in "read" mode ("r") and checks if the file exists. If the file cannot be found, an error message is displayed. If the file exists, the function uses fgetc() to read one character at a time from the file until it reaches the end (EOF). The characters are printed to the standard output using putchar(). Once the file has been read, the file is closed, and the contents are displayed to the user.

Main Program Loop
The main function continuously prompts the user to choose an operation through a menu interface. The menu offers five choices:

Create a new file.

Write data to the file.

Append data to the file.

Read and display the contents of the file.

Exit the program.

The user's input is taken using scanf() and the corresponding case in the switch statement is executed. If the user enters an invalid choice, a message is displayed, and the menu is shown again.

Error Handling
Error handling is an important aspect of file operations, and this program ensures that if any operation fails (such as if a file cannot be created, opened, or read), an appropriate error message is displayed. For example, when creating or writing to a file, if fopen() returns NULL, an error message is printed, indicating that the file could not be opened.

In the case of reading the file, if the file does not exist, the program informs the user and stops the operation. This prevents the program from crashing or producing unexpected behavior.

Input Handling
The program uses fgets() to capture user input for writing to or appending to the file. This function is preferred over scanf() for string input because it can handle spaces in the input and prevents buffer overflow issues by specifying the maximum size of the input buffer.

Additionally, before reading data from the user, the program uses getchar() to consume the newline character (\n) left in the input buffer by the previous scanf(). This ensures that the user’s input is read properly without any unintended behavior.

Conclusion
This simple C program demonstrates essential file handling operations and user interaction. By using functions like fopen(), fclose(), fgets(), and fputs(), the program allows the user to create, write, append, and read files, while also handling common errors such as file access failure. This type of program is fundamental for anyone learning C, as it teaches the basics of file I/O and error management in an interactive, user-friendly way. The use of functions to encapsulate different file operations also promotes code modularity and reusability.





