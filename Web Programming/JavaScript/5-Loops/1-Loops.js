//Loops in JavaScript

//1. For Loop
//when the number of iterations is known
console.log("For Loop:");
for (let i = 1; i <= 5; i++) {  // Loop from 1 to 5
    console.log("Iteration " + i); 
}

//2. While Loop
//when the number of iterations is not known
console.log("\nWhile Loop:");  // Loop from 1 to 5
let j = 1;            // Initialize counter
while (j <= 5) {      // Condition check
    console.log("Iteration " + j); // Loop body
    j++;              // Increment counter
}

//3. Do-While Loop
//executes the block at least once before checking the condition
console.log("\nDo-While Loop:");  // Loop from 1 to 5
let k = 1;                    
do {
    console.log("Iteration " + k); 
    k++;
} while (k <= 5);     // Condition check

//4. For-of Loop
//to iterate over iterable objects like arrays or strings
console.log("\nFor-of Loop:");
let fruits = ["Apple", "Banana", "Cherry"];
for (let fruit of fruits) {
    console.log(fruit);
}

//5. For-in Loop
//to iterate over the properties of an object
console.log("\nFor-in Loop:");
let person = {name: "Alice", age: 30, city: "New York"};
for (let key in person) {
    console.log(key + ": " + person[key]);
}


