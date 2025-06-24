//conditional branching : if
//if evaluates a given condition and the given code block is executed if the condition is true

let a=prompt("Enter the year we are in : ");
if (a==2025) {
    console.log("CORRECT!!!");
} else {
  console.log("Incorrect HAI BHAI GAWAR HAI KYA.");
}

let access;
let age=Number(prompt("Enter your age :"));
if (age >=18) {
    console.log("Allowed");
} else {
    console.log("balak h laadle dur reh");
}

//Several conditions : "else if"
let year1=prompt("SeedheMaut or Chaar Diwaari ke concert kis date par gaya tha?");
if (year1=="29/03/2025"){
    console.log("AYYEAA SAALE YAAD HAI!!!!");
}
else if (year1==NaN){
    console.log("Abbe bhai koi response to deta!!!");
}
else {
    console.log("Bhool gaya bc!?!?")
}