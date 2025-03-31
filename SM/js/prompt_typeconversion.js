// Interaction : alert, prompt, function
/* alert
shows message and waits for the user to prompt ok*/
/*
// prompt - this function prompts accepts two arguments.
console.log("Code started to execute here");
// The prompt function accepts two arguments, it shows a modal  window with a text message , an input for the visitor, and the buttons, OK/Cancel.
//[modal window the the box that appears right before viewsing the webpage just like with the alert keyword in js]

//using prompt function
let age=prompt("What is your age?");
console.log(`You are ${age} years old.`);
console.log("Prompt executed succesfully");

//confirm
result=confirm("Are you bosswhopper?"); //confirm shows output as True is selected OK and false if cancel
alert(result);
//alert prompt confirm ends here
*/

// Type conversions
/* string conversion happens when we need the string to form a value.
    alert takes any input value and converts it to strign by default.
        but we can also use String(value) to convert a value to a string

        Numeric Conversion - happens when we enter two numbers as strigns and apply a mathematical operator on them
        for eg*/
let a=12;
b=String(a);
console.log(`Type of a : ${typeof(a)};
Type of b after a getting converted): ${typeof(b)}`);

console.log(`${'12'/'2'}
${'12'/2}
${12/2}`); //in all these cases when a mathematical operator was applied on two numbers despite either or both of them beinwritten as string, it was automatically converted to intger to perform the given operand.

//we cane user Number(value) to consider a value as number and the conversion fails if it isn't explicitly a number