let a = 2 + 2;

switch (a) {
  case 3:
    console.log( 'Too small' );
    break;
  case 4:
    console.log( 'Exactly!' );
    break;
  case 5:
    console.log( 'Too big' );
    break;
  default:
    console.log( "I don't know such values" );
}

let shaktiman=prompt("Enter the name").toLowerCase();
switch (shaktiman){
  case "batman":
    console.log(`Shaktiman hi ${shaktiman} hai.`);
    break;

    case "aam admi party":
      console.log("haddiyaan todo inki");
      break;
    default:
      console.log("Input not recognised");
}