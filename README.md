# Test Cases Generators

A collection of generators for fast and easy creation of test cases.


All generators are written in C++. Each file is properly commented with the format of output generated.

## Usage

Each file produces output on to the standard output. To write this to file, use pipelining in shell to ridirect the output to some file. For ex:-

```

$	g++ file.cpp -o file
$	./file > input.txt

```

Above commands will write the output of the program to `input.txt` file.


In case of no test cases, just make `testcases` variable as 1 and comment the `printf("%d", testcases)` line.


To change the format of output, simply modify the print statements in the source code.


To change the constraints of output, just change the values of constants such as `lim1`, `lim2`, etc.


# Contributing

Any sort of contribution is welcome. Feel free to make a pull request. Make sure that you folow the format.