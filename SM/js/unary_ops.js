//Basic operators, Maths
/* lets just get over the basic stuff
 -*+/ are the fundamentals
 then % for Remainder
    ** for exponentiation
  */

//adding a number and a number under"" will just attach the numbers together, eg
console.log(`"1"+2 = ${"1"+2}\n
1+2 = ${1+2}
`);

//Numeric Conversion, unary+
 /*earlier we used the + sign in binary form
 here + carries unary form.
 The unary operator doesn't do anything to the numbers themselves,
 but if the operand is not a number, the unary plus converts it into a number 
 eg : */
 let x=1;
console.log(+x); //This didn't affect x in any way but

 //now lets see non numbers get converted
console.log(`${ +true}\n
${ +"" }`);

// = is an assignment operator that is used for returning a value

//incase of performing multiple opeartors on the same number we can do the following trick
let a=2;
a+=4; //a=a+4
a*=5; //a=a*5
a/=2; //a=a/2

let abj=44;
abj*=12;
console.log(abj); //will print 44*12

// Increment/decrement
/*Increasing or Decreasing a number by one is one of the most common practices in creating programs for which we have increment operator ++
and similarly for decreasing by one we have --
used with "counter++" and "counter--"
for eg */
let me=9;
me++;//after this if we apply decrement to the variable the output will still be given considering decrement as highschool.
console.log(`adding two plus after var me's name gives the output ${me++}`)
let you=10;
you--;
console.log(`adding two minus after var you's name gives the output ${you--}`)
//we can also assigh variables to incremented variables
let ass = 99;
thigh = ++ass; 
console.log(thigh);