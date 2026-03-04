//
// This is only a SKELETON file for the 'Line Up' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const format = (firstName, number) => {
  let numberEnding = number%10;
  let numberString = '' + number;
  //ts a bit ugly maybe other tech if I redid it
  if(numberEnding == 1){
    if(number % 100 == 11){
      numberString += 'th'
    }else{
      numberString += 'st'
    }
    
  }else if(numberEnding == 2){
    if(number % 100 == 12){
      numberString += 'th'
    }else{
      numberString += 'nd'
    }

  }else if(numberEnding == 3){
    if(number % 100 == 13){
      numberString += 'th'
    }else{
      numberString += 'rd'
    }
  }else{
    numberString += 'th'
  }
  return firstName + ', you are the ' + numberString + ' customer we serve today. Thank you!';
};
