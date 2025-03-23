// learning Type Conversions today
// source javascript.info/type-conversions

/*generally values as per their content get covnerted to their respective types as the js compiler identifies them.
for eg alert automatically converts any value to a string to show it.
Mathematical operators convert values to number*/

//example
let a=true; //remember true here is entirely in lowercase unlike in python or C
value=String(a); //also String type is mentioned with S in uppercase
console.log(`data type of a pre conversion is : ${a}
             and post conversion is : ${value}`); //this was an example of String Conversion

// Number Conversion - happens automatically even if we have defined numbers as string, for eg -
let num1="12",
    num2="21";
console.log(`Type of num1&2 is ${typeof num2}, ${typeof num2}`);

console.log("here we divide 2 and 4 under double inverted commas : ", "2"/"4");
console.log("here we subract 2 and 4 under double inverted commas : ", "2"-"4");
console.log("here we multiply 2 and 4 under double inverted commas : ", "2"*"4");
//this same thing when done with addition sign doesn't happen because it is also an operator for directly joining two strings together just like in python
console.log(`2 and 4 added is ${2+4}
    multiplied is ${2*4}
    subracted is ${2-4}`);

let num_1=Number(num1), num_2=Number(num2);
console.log(`Now as we converted types of num1 and num2
their type respectively is ${typeof num_1} & ${typeof num_2}
while earlier num1 and num2 were ${num1}&${num2}.`);

// when conversion fails for eg incase of trying to make a string a number while the string contains anything other than number/s, it will give the error NaN that stands for Not Assigned.
let sample=("some random shit");
console.log(Number(sample)); /*but on other end if you do the same with making the variable a number after assigning the it to a new variable then the conversion would be defined but a direct attempt like this would straightup throw a NaN.*/

//Boolean when converted to number will show 1 as true and 0 as false.
/*reverse of this where we try to show 1 as boolean will throw true as output 
and for 0 it will throw false as output*/
//incase of 0 under "" will give true because of boolean being under the impression of it being a string
//blank "" will throw false as output

//NaN stands for undefined

