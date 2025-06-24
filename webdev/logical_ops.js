//Logical Operators

//OR represented with ||
console.log(true||false, //true
    false||true, //true
    false||false, //false
    true||false); //true

let a=12, b=24,c="Batman";

if (1||0){console.log("teri mummy")}; //code will be executed if the given statement is satisfied

if (0||0==false){console.log("dono false hai bhai.")}; //code will be executed if both values are false

if (0||0==true){console.log("dono false hai bhai.")} //code will be executed if either of the values is true otherwise no output or the output under else statement
else{console.log("neither is true")};

if(a||b==24){console.log("a ya b mein se ek ki value 24 hai.")};

if(a=="Batman"||b=="Batman"){console.log("Batman hai a ya b mein.")} else{console.log("a  ya b nahi, c ki value mein Batman Save h")};

// || OR finds the first truthly value if more than two OR cases
if (a==12||b==3121||c=="Batman"){console.log(`${a, b, b, c, c, a}`)};

 //else if in JS is just like elif in python no biggie

let firstname="", lastname="", nickname=false;
console.log(firstname||lastname||nickname||"ANONYMOUS");

// Short-Circuit Evaluation - OR || operator is so-called short-circuit evaluation
//it means that || processes the arguments until the forst true value isi reached, and the value is returned immediately without touching the other
// OR finds the first truthy value. 