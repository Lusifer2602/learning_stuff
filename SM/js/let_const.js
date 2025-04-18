//exp to check on git

/*let message; //variable is declared using let keyboard
message='Tera Bhai SeedheMaut'; //store 'hello' under varibale named 'Hello'

alert(message)*/

// we can also assign multiple variables within a single line using let keyword
let first='Tera', second='Bhai', third='SeedheMaut';

//or
let one='tera',
	two='bhai',
	three='SeedheMaut';
//or
let ek='tera'
,dusra='bhai' //do not use do, it is a keyword
,teen='SeedheMaut'; //older scripts use var instead of let in js
// if a new value is assigned to an older variable then the previous value it stored is disposed off and new one is now considered

/* the same variable cannot be declared twice under two different let statements
  for eg
  let message='hello';
  let message='world';
  will give SyntaxError: 'message' has already been declared */

//when naming a variable it must only contain letters, digits, or the symbols $ and _. For example :
let $=12;
let your_name=321; // these two variables have been declared
console.log($ + your_name);


//js is case sensitive so APPLE and apple are two different variables

/*there are reserved words in js and do not use them as variable names;
 * they are:
 let, class, return, function */

// 'use strict' is an unrecommended statement to be used in a code and without this statement we can also declare variables without the <let> keyword

const TBSM='Tera baap SeedheMaut'; //const is used to declare unchangeable variables, for eg after declaring this constant variabl here we cannot it again

// TBSM='Tera Bhai SeedheMaut'; //this will give error in the console the script won't be executed

/*
 Declare two variables: admin and name.
Assign the value "John" to name.
Copy the value from name to admin.
Show the value of admin using alert (must output “John”).*/

/*let admin='Jonh',
	name=admin;
alert(name);*/

//alert(1/0); //output is 'infinity'

// alert("not a number"/2); //NaN, erraneous mesasge

//reading Data Types in JS

/* learn something new about js
 it uses 'Infinity' to represent the mathematical infinity

also it says doing mathematical actions in JavaScript is absolutely safe, it will never stop a script from running, worst case scenario it will give NaN as the error.*/

/* but, here's a catch;
 
 BigInt - values larger than 2^53-1 or smaller than -(2^53-1)cannot be represented safely.
 for example 2^53-1 i.e. 9007199254740991 +1 and +2 will give the same output in console log*/

console.log(9007199254740991+1); //9007199254740991
console.log(9007199254740991+2); //9007199254740992 both give the same output

//BigInt is a data type that was recently added to the language for such numbers and you define it putting n in the end of a big number, for eg
const bigInt=123463563453124123412213n; //adding n in the end will define this variable as big int data type and it is used for highly precise time complexities or cryptographic numbers.

 //string data type : and we can also embed one string into another like this
let str="SeedheMaut";
let str2="Tera Bhai";
let str3=`${str}`; /* and here we learnt there are three types of quotes in JavaScript i.e. 
	double quotes " ", 
	single quotes ' ', 
	backticks ` ` */
console.log(str3)

let goat="SeedheMaut";
console.log(`Give a shoutout for TERA BHAI ${goat}!!!!`);

let a= 4>1, age=null;
// alert(a); //output is true
console.log(age);

let asphalt; //if you don't set a value for a variable it will be shown as undefined
console.log(asphalt);
console.log
console.log(typeof str2);
