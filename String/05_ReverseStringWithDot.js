const string = "i.like.this.program.very.much";

// Split String With Word
const splitStringInWord = (string) => {
  const stringArray = [];
  let word = "";
  for (let i = 0; i < string.length; i++) {
    const char = string[i];
    if (char === ".") {
      stringArray.push(word);
      word = "";
    } else {
      word += char;
    }
  }
  // Pushing the last word into the array
  stringArray.push(word);
  return stringArray;
};

// Reverse Array
const reverseArray = (splittedArr) => {
  const reversedArr = [];
  for (let i = splittedArr.length - 1; i >= 0; i--) {
    const element = splittedArr[i];
    reversedArr.push(element);
  }
  return reversedArr;
};

// Join Array in String
const joinReveredString = (stringArray) => {
  let string = stringArray[0];
  for (let index = 1; index < stringArray.length; index++) {
    string = string + "." + stringArray[index];
  }
  return string;
};

const splittedArray = splitStringInWord(string);
const reverseStringArray = reverseArray(splittedArray);
const joinString = joinReveredString(reverseStringArray);

const obj = { string, splittedArray, reverseStringArray, joinString };

console.log(obj);
