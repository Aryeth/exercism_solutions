/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

export function cookingStatus(remainingTime){
    if(remainingTime == undefined || remainingTime == null){
      return 'You forgot to set the timer.'
    }
    if(remainingTime === 0){
      return 'Lasagna is done.';
    }
  return 'Not done, please wait.';
}

export function preparationTime(layers, time = 2){
  return layers.length * time;
}

export function quantities(layers){
  let countNoodle = 0;
  let countSauce = 0;

  for(const c of layers){
    if(c === 'noodles'){
      countNoodle++;
    } else if(c === 'sauce'){
      countSauce++;
    }
  }

  return {noodles : countNoodle*50, sauce : countSauce*0.2};
}

export function addSecretIngredient(list1, list2){
  list2[list2.length] = list1[list1.length - 1]
}

export function scaleRecipe(recipe, portions){

  const copy = { ...recipe };

  for (let key in copy) {
    copy[key] = copy[key] / 2 * portions;
  }
  
  return copy;
}