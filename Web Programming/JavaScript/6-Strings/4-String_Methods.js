//String Metheods
//there are built-in functions to manipulate a String.

//str.toUpperCase() - converts the string to uppercase
let str = "hello world";
console.log(str.toUpperCase()); // Output: "HELLO WORLD"

//str.toLowerCase() - converts the string to lowercase
console.log(str.toLowerCase()); // Output: "hello world"

//str.trim() - removes whitespace from both ends of the string
let strWithSpaces = "   Hello, World!   ";
console.log(strWithSpaces.trim()); // Output: "Hello, World!"

//str.replace(searchValue, newValue) - replaces occurrences of searchValue with newValue
let newStr = str.replace("world", "JavaScript");
console.log(newStr); // Output: "hello JavaScript"

//str.split(separator) - splits the string into an array of substrings based on the separator
let fruits = "apple,banana,cherry";
let fruitArray = fruits.split(",");
console.log(fruitArray); // Output: ["apple", "banana", "cherry"]

//str.includes(substring) - checks if the string contains the specified substring
console.log(str.includes("world")); // Output: true

//str.startsWith(substring) - checks if the string starts with the specified substring
console.log(str.startsWith("hello")); // Output: true

//str.endsWith(substring) - checks if the string ends with the specified substring
console.log(str.endsWith("world")); // Output: true

//str.concat(string2, string3, ...) - concatenates multiple strings
let greeting = "Hello, ";
let name = "Alice";
let fullGreeting = greeting.concat(name, "!");
console.log(fullGreeting); // Output: "Hello, Alice!"

//str.repeat(count) - repeats the string a specified number of times
let repeatedStr = "ha".repeat(3);
console.log(repeatedStr); // Output: "hahaha"

//str.substring(startIndex, endIndex) - extracts a substring from startIndex to endIndex (not inclusive)
let substring = str.substring(0, 5);
console.log(substring); // Output: "hello"

//str.slice(startIndex, endIndex) - extracts a section of the string and returns it as a new string
let slicedStr = str.slice(6, 11);
console.log(slicedStr); // Output: "world"

//str.charAt(index) - returns the character at the specified index
console.log(str.charAt(4)); // Output: "o"

//str.indexOf(substring) - returns the index of the first occurrence of the substring
console.log(str.indexOf("world")); // Output: 6

//str.lastIndexOf(substring) - returns the index of the last occurrence of the substring
console.log(str.lastIndexOf("o")); // Output: 7

