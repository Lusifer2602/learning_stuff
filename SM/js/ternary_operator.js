// Conditional operator ? a.k.a the ternary operator
/*this operator is used as short-hand for if-else conditions

syntax :
condition ? expression_if_true : expression_if_false;
*/

let age=prompt("Enter your age to confirm if you're an adult.");
let message=(age>=18) ? "Thik hai baawe tu adult hai" : "Balak hai laadle aukaat mein reh le";
console.log(message); // this kind of statement is best for when you don't wanna use if else or else if multiple times



//using multiple terinary operators
let umar=Number(prompt("Age batao babygirl apni."));
let show=(umar<3) ? 'Hiii baby!':
(umar<18) ? 'Hlo beta':
(umar<40) ? 'Ram Ram bhai!':
(umar<100) ? 'Namashkar ji':
"Bhaisab itni umar kaise apki ?!?!!";
alert(show)


let sm=Number(prompt("SeedheMaut kitne saal sunn rha bhai?"));
let acha=(sm<=1)? "wow hardcore ho bhai saal ke andar andar":
(sm<2)?"arre saal se upar ho gaya impressive baawe":
(sm<5)?"pagal mat bana janta bhi nahi tha tu":
"Retry bitch";
console.log(acha);
//if, else, else if conditionals over
//Logical Operators