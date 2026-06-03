here in the function mailny i didn't mentioned about critical cases like when x = 0&n != 0 and when both x and n are zero we can solve this issue by adding a valid if-else loop.

time complexity for this will be O(log(n)) i.e much better than O(n) where we multiply one by one manually where the run time increases when we choose exponents of high order like 2^31.

** In line 15 we should add 1.0/result rather than 1/result other wise we will not get perfect answer.

->There is an problem with this code also we will get integer overflow error when we take large base values. if we put long long data type at int places also we cant mostly solve this problem.