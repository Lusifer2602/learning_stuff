console.log("lets begin ! ")
//continuing bitwise operators
/* pichhli file mein hain already names of bitwise operators
already done with comma ( , ) operator that helps in performing multiple
evaluations within a single line but lets just get it done with an example here.*/

console.log(12+45, 45*321, 12/32);

//post-fix and pre-fix forms
let a=1,
c=++a,
d=a++;
console.log(`a after a++ is ${c}
a after ++a  is ${d}`); //as pbserved both are giving the same output helping us see ++a and a++ mean the same.

//Assignment Result
let b=2,
x=1+(b*=2); //this will first multiple b with 2 then add 1 to it
console.log(x); //result will be 5

console.log(`lets perform some calculations :
1. ${"" + 1 + 0} guess : 2 
2. ${"" - 1 + 0} guess : 0
3. ${true + false} guess : 1
4. ${6 / "3"} guess : 2
5. ${"2" * "3"} guess : 6
6. ${4 + 5 + "px"} guess : 9px
7. ${"$" + 4 + 5} guess : NaN
8. ${"4" - 2} guess : 2
9. ${"4px" - 2} guess : error
10. ${"-9" + 5} guess : -4
11. ${"-9" - 5} guess : -14
12. ${null + 1} guess : 1
13. ${undefined + 1} guess : NaN
14. ${" \t \n" - 2} guess : NaN
15. ${1+0}
`);
/* ${"" + 1 + 0}  gives 10 as an output because "" is empty and because of using $,
the very next value to "" fills the empty space in it and is assigned as a stinged value.
Therefore it is then "1"+0 is 10 here.

but in second one -1 despite being assigned to the empty string "" is read as a number
because the - sign before 1 forces numeric conversion before performing subtraction.

in 6. 9px is the output because after numerically adding 4 and 5,
px is the next string that will get attached to this numeric value because of + sign's priority to convert into string first.
*/

/*
let a0 = prompt("First number?", 1),
b0 = prompt("Second number?", 2);
console.log(a0 +b0); //will give the output of a+b as per what the input was otherwise by default join 1 and 2 together and give 12 as the output.
//to give the output as addition of numbers
let a1 = prompt("First number?", 1),
b1 = prompt("Second number?", 2);
console.log(Number(a1) +Number(b1));
*/

