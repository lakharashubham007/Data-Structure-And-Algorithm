/* Design a Calulator interface for 2 number 
inputs which can perform sum, difference,
 product and dividend whenever invoked on the same 
interface */

function Calculator(num1, num2){
    function sum() {
        return num1 + num2;
    }
    function diff() {
        return num1 - num2;
    }
    function dot() {
        return num1 * num2;
    }
    function div() {
        return num1 / num2;
    }

    return { sum, diff, dot , div };
}

const calc12And5 = Calculator(12, 5);
calc12And5.sum();
calc12And5.diff();
calc12And5.dot();
calc12And5.div();