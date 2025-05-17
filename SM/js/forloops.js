// firse seekhte hain bc loops kaise  start krte hain
//lets start with a counter machine that counts from a given number to a given number

// let lines=Number(prompt("Enter the number to start counting from : "));
    // end=Number(prompt("Enter the number to end the counting at : "));

//ok we'll learn create these patterns with respect to C kyuki waha pehle kia h na to yaha easy rhega uski respect mein seekhna

for(let i=1;i<=10;i++){
    let pattern="";
    for(let j=1;j<=i;j++){
        pattern+=j;
    }
    console.log(pattern);
}


for(i=10;i>=1;i--){
    pattern="";
    for(j=i;j>=1;j--){
        pattern+=j;
}
console.log(pattern);
}


//start patterns here
for(i=10;i>=1;i--){
    pattern="";
    for(j=i;j>=1;j--){
        pattern+="*";
}
console.log(pattern);
}


for(let a=1;a<=10;a++){
 let  pattern="";
    for(b=1;b<=a;b++){
        pattern+="*";
    }
    console.log(pattern);
}//star patterns completed



for(i=1;i<=10;i++){
    pattern="";

    for(j=1;j<=11-i;j++){
        pattern+=j;
    }
    console.log(pattern);
}

for(i=1;i<=10;i++){
    pattern="";
    for(j=1;j<=i;j++){
        pattern+=j;
    }
    console.log(pattern);
}


for(i=10;i>=1;i--){
    pattern="";
    for(j=i;j>=1;j--){
        pattern+=j;
}
console.log(pattern);
}

for(let i=1;i<=10;i++){
    let pattern="";
    for(let j=1;j<=i;j++){
        pattern+=j;
    }
    console.log(pattern);
}



