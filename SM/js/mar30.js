console.log(23>43, //false
20<23, //true
12==12); //equal to (different from single = which is an assignment operator)
//continuing learning also on mar31

//one can also compare strings in js
console.log("FLStudio"<"flstudio","glow">"glee",
    "fast"<"Fast", //false - uppercase letters are indexed before lowercase so they're true when uppercase>smallercase first letter
    "khullarg"<"seedheMaut", //its all about what the first letter is and then the next one if the first on is
    "batman">"superman",
    "BUllshit"<"catshit",
    "seedhemaut"=="seedhemaut"
);

//comparidon of different types
console.log(false==0,
    true==1,
    "-1"==-1, // pe fefde check SM reference lol
    "one">4,
    ''==false
);

//comparsion in undefined and null
console.log(0== null,
    undefined==0, 
    null==undefined,
); //so undefined and null are the same since both these values are just lost in abyss or may say the abyss itself

let a=22/0, b=0/313;
console.log(a); //this will give infinity as the result

