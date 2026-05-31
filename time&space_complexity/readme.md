
-------------------------TIME COMPLEXITY------------------------------

1.time complexity: it is not an actual run time for a code but it is the taking about behaviour of time taken for the code with the function of size of the input I(n).
 ->as the same c++ code can take different run times in mac,windows,linux for same input.
 ->it is denoted by "O()" like some program will have O(log(n)),O(n^3) etc.. where  those resemble a       worst  case scenario to run the code.
 -> here O(n) represents worst case scenario, Θ(n) represents average case scenario, omega(n) represents the best case scenario.

-----------------------------SPACE COMPLEXITY--------------------------------

2.space complexity: it is a behaviour amount of space taken by algorithm with the input size.
-> there are two types of spaces 1.input space[size of array,string,vector etc. which as taken as input] 2. auxilary space[it is the space taken by algorithm for getting a desired output ]like if u gave an array of size n as an input in one code the output may take same space as input in another it may take a  as constant space.

** In interviews they may ask mostly for time complexity as value for managing space getting cheaper **

---> Time complexity in recursion:
        1.recurrence relation,2.n.o of recurrence calls x work in each cell.
  examples of 1. is like finding time complexity of f(n) = k + f(n-1) and 2. is finding  TC for factorial as here there is calls 
--->Space complexity in recursion:
   is found like (depth of the call stack) x (memory occupied in each cell) 




-->   In most systems to get a run time of 1sec almost 10^8 opertions are done,if it exceeds 1sec we will get (Time exceeded error).
 
    |____n_____|most appropriate Time complexity |
    |         |__________________________________|
 1  |>10^8    |    O(log(n)),O(1)                |
 2  |<= 10^8  |    O(n)                          |
 3  |<= 10^6  |    O(nlong(n))                   |
 4  |<= 10^4  |    O(n^2)                        |
 5  |<=500    |    O(n^3)                        |
 6  |<= 25    |     O(2^n)                       |
 7  |<= 12    |      O(n!)                       |   

here we can decide even before writing the code by checking constraints to know what type of way we should use based on our previous experience like is it double nested loops or to use sorting etc..

like see here in number 3 line O(nlog(n)) we can use sorting and number 6 O(2^n) we can use recursion brute approach ,they may not compulsorly useful but they may use in some cases.












