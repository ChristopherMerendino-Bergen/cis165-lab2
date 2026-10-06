# CIS 165 - Lab 2: C++ Exercises

## How to Compile and Run

To run these programs from a terminal, use the following commands:

**Sum Program:**
`g++ -std=c++17 -Wall -Wextra sum.cpp -o sum`
`./sum`

**MPG Program:**
`g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg`
`./mpg`

* Note: I use a Mac, and so my terminal compiles slightly differently than a Windows machine. More specifically, I use `clang++` instead of `g++`
---
## Program Plans

**sum.cpp Plan:**
1. Declare two integer variables and assign them 50 and 100.
2. Declare an integer variable named `total` to store the result.
3. Add the first two variables together and store the result in `total`.
4. Output the `total` variable with a descriptive label.

**mpg.cpp Plan:**
1. Declare two double variables: one for miles (312.0) and one for gallons (16.0). 
2. Declare a double variable to store the calculated miles per gallon.
3. Divide the miles by the gallons and assign the result to the miles per gallon variable.
4. Output the final variable with a descriptive label and units.

## 4. Test Tables

| Program and test | Values used | Expected result before running | Actual output | Match or fix |
| :--- | :--- | :--- | :--- | :--- |
| **sum.cpp** (assigned values) | `50`, `100` | 150 | 150 | ✅ Match |
| **sum.cpp** (changed values) | `75`, `25` | 100 | 100 | ✅ Match |
| **mpg.cpp** (assigned values) | `312` miles, `16` gallons | 19.5 | 19.5 | ✅ Match |
| **mpg.cpp** (changed values) | `350` miles, `15` gallons | 23.3333 | 23.3333 | ✅ Match |

*Note: I temporarily changed the values to run the second set of tests, but have restored the originally assigned values to both .cpp files and performed a final run to confirm they work.*

*Note: I have restored the original values to both programs and re-ran them to confirm they still output the assigned data.*

---

## 5. Code Explanations

**sum.cpp**
The starting values (50 and 100) are stored in memory as integer variables. During the calculation step, the CPU retrieves these two values, adds them together to get 150, and pushes that 150 into the memory space reserved for the `total` variable. The `cout` statement then reads the value inside `total` and prints it to the screen. We store the calculation in `total` before printing to keep our processing logic separate from our output logic, which makes the code cleaner and allows us to reuse the `total` value later in the program if needed.

**mpg.cpp**
The formula for miles per gallon is total miles driven divided by total gallons of gas used. I chose the `double` data type for all variables. If C++ performs division using two integer operands (like 312 and 16), it performs "integer division." This means it calculates 19.5, but immediately truncates and throws away the decimal, leaving just 19. By using doubles, we preserve the fraction.
*Trace of changed-value test:* The program assigned 350.0 to `miles` and 15.0 to `gallons`. It divided 350.0 by 15.0, getting 23.3333. It stored 23.3333 in `miles_per_gallon`, which was then printed to the console.

---
