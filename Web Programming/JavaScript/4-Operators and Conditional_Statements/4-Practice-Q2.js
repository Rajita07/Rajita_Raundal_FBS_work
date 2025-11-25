//Write a code which can give rades to students according to their scores
//80-100 : A
//70-79 : B
//60-69 : C
//50-59 : D
//0-49 : F


let score = prompt("Enter your score:"); // Get user input
if (score >= 80 && score <= 100) {  
    console.log("Your grade is A."); 
} else if (score >= 70 && score < 80) {  
    console.log("Your grade is B.");  
} else if (score >= 60 && score < 70) {
    console.log("Your grade is C.");
} else if (score >= 50 && score < 60) {
    console.log("Your grade is D.");
} else if (score >= 0 && score < 50) {
    console.log("Your grade is F.");
} else {
    console.log("Invalid score. Please enter a score between 0 and 100.");
}


//hardcoded value
//let score2 = 75; // Example hardcoded score
//everything same as above except prompt