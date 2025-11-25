//Create a game where you Star with any random number. Ask the user to keep guessing the game number until the user enters correct value.

let gameNumber = 3; // Random number between 1 and 10
let userGuess = prompt("Guess the game number (between 1 and 10):"); // Get user input

while (parseInt(userGuess) !== gameNumber) {
    userGuess = prompt("Wrong guess! Guess again:");
}
console.log("Congratulations! You guessed the correct number: " + gameNumber);


