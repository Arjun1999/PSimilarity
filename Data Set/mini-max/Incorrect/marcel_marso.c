

const data = input => {
   const numbers = input.split(" ").map(i => parseInt(i));
   numbers.sort((a, b) => a - b)
   let minSum = 0;
   let maxSum = 0;
   for(let i = 0; i < numbers.length - 1; i++) {
       minSum += numbers[i];
       maxSum += numbers[i + 1];
   }
   console.log(minSum + " " + maxSum);
};
