in this code i ignored the cases where exp is negative and also when mod is negative and zero we can solve these issues by adding some if -else statements.

for the negative mod cases either we ignore them or make them positive and solve.

here also time complexity is O(log(n)) rather than O(n) which helps for larger numbers.

** | base = (base%mod + mod)%mod;| --> here in this line it easily handles negative base values and also works for positive bases .You can check taking examples like -20,7 and 20,7 .