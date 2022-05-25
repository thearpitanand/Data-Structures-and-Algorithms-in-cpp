const string = "i.like.this.program.very.much";

const splitStringInWord = (string) => {
  const stringArray = [];
  let word = "";
  for (let i = 0; i < string.length; i++) {
    const char = string[i];
    if (i === string.length - 1) {
      word += char;
      stringArray.push(word);
      word = "";
    } else if (char !== ".") {
      word += char;
    } else {
      stringArray.push(word);
      word = "";
    }
  }
  return stringArray;
};

const reverseArray = (splittedArr) => {
  const reversedArr = [];
  for (let i = splittedArr.length - 1; i >= 0; i--) {
    const element = splittedArr[i];
    reversedArr.push(element);
  }
  return reversedArr;
};

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
