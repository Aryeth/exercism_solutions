// @ts-check

/**
 * Calculates the sum of the two input arrays.
 *
 * @param {number[]} array1
 * @param {number[]} array2
 * @returns {number} sum of the two arrays
 */
export function twoSum(array1, array2) {
  let total = 0;
  for(let i = 0; i<array1.length; i++){
    total += array1[i]*(10**(array1.length-i-1));
  }
  
  for(let i = 0; i<array2.length; i++){
    total += array2[i]*(10**(array2.length-i-1));
  }
  return total;
}

/**
 * Checks whether a number is a palindrome.
 *
 * @param {number} value
 * @returns {boolean} whether the number is a palindrome or not
 */
export function luckyNumber(value) {
  const valDigits = [...String(value)].map(Number);

  for(let i = 0; i<valDigits.length/2; i++){
    if(valDigits[i] != valDigits[valDigits.length - i -1]){
      return false;
    }
  }
  return true;
}

/**
 * Determines the error message that should be shown to the user
 * for the given input value.
 *
 * @param {string|null|undefined} input
 * @returns {string} error message
 */
export function errorMessage(input) {
  if(input === null || input === undefined || input === ''){
    return 'Required field';
  } else if (isNaN(Number (input)) || (Number (input)) === 0){
    return 'Must be a number besides 0';
  }
  return '';
}
