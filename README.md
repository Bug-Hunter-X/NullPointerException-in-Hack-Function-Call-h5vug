# Hack NullPointerException Example

This repository demonstrates a common runtime error in Hack: a `NullPointerException` resulting from passing a null value to a function expecting a numeric type.  Hack's strong type system prevents implicit conversions, requiring explicit null handling.

## Bug
The `bug.hh` file contains a program with two functions, `foo` and `bar`, and a `main` function that calls `bar` with a null value.  This results in a runtime exception.

## Solution
The `bugSolution.hh` file illustrates a corrected version that explicitly handles null values using an `if` statement.  This prevents the runtime error by ensuring that only valid integer values are passed to the functions. 

This example highlights the importance of careful null handling in Hack to avoid unexpected runtime exceptions.