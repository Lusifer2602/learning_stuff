// firse seekhte hain bc loops kaise  start krte hain
//lets start with a counter machine that counts from a given number to a given number

let start=Number(prompt("Enter the number to start counting from : ")),
    end=Number(prompt("Enter the number to end the counting at : "));

if(start>end){
    for(let i=start; i>=end; i--){
        console.log(i);
    }
}

else if(start<end){
    for(let i=start; i<=end; i++){
        console.log(i);
    }
}

else if(start=end){
    alert("Start and End are equal");
}

else{console.log("INVALID INPUT");}
