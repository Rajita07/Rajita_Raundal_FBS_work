//Rule 1: Variable names are case sensitive
//fullname and FULLNAME are two different variables
fullname = "Rajita Raundal"; //fullname 
FULLNAME = "Om Raundal"; //FULLNAME

console.log(fullname);  //prints "Rajita Raundal"
console.log(FULLNAME);  //prints "Om Raundal"
//-----------------------------------------------------------------

//Rule 2: 
//only letters, digits, underscores(_), and dollar signs($) are allowed in variable names.
//not even spaces are allowed in variable names.

//full name = "X"; 
//123fullname = "Y";   //Incorrect variable name with space
//full-name = "Z";


full_name = "A";
full$name = "B";    //Correct
fullname1 = "C";


console.log(full_name); //prints "A"
console.log(full$name); //prints "B"
console.log(fullname1); //prints "C
//---------------------------------------------------------------

//Rule 3: Only letters, digits, underscores(_), and dollar signs($) are allowed in variable names.
//Variable names cannot start with a digit.
//123fullname = "Y";

//Rule 4: Reserved words (keywords) cannot be used as variable names.
//var = 10;  //Incorrect as 'var' is a reserved word
//function = 20; //Incorrect as 'function' is a reserved word
//console = 30; //Incorrect as 'console' is a reserved word

myVar = 30 ; //Correct
console.log(myVar); //prints 30
//---------------------------------------------------------------