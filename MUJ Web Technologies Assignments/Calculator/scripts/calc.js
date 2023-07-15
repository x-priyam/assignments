var input1 = "";
var input2 = "";
var operand = "";
var output = "";

function solveEqn() {
    var num1, num2;

    if (input1 == "") {
        input1 = '0';
    }
    if (input2 == "") {
        input2 = '0';
    }
    if (operand == "") {
        operand = '+';
    }

    num1 = Number(input1);
    num2 = Number(input2);

    switch (operand) {
        case '+':
            output = (num1 + num2).toString(10);
            break;
        case '-':
            output = (num1 - num2).toString(10);
            break;
        case '*':
            output = (num1 * num2).toString(10);
            break;
        case '/':
            output = (num1 / num2).toString(10);
            break;
    }
}

function setNum(input) {
    if (output == "") {
        if (operand == "") {
            input1 = input1 + input;
        } else {
            input2 = input2 + input;
        }
    } else {
        input1 = input;
        input2 = "";
        operand = "";
        output = "";
    }
}

function setDec(input) {
    if (output == "") {
        if (operand == "") {
            if (!input1.includes(input)) {
                if (input1 == "") {
                    input1 = '0' + input;
                } else {
                    input1 = input1 + input;
                }
            }
        } else {
            if (!input2.includes(input)) {
                if (input2 == "") {
                    input2 = '0' + input;
                } else {
                    input2 = input2 + input;
                }
            }
        }
    } else {
        input1 = input;
        input2 = "";
        operand = "";
        output = "";
    }
}

function setOperand(input) {
    if (input == '-') {
        if (operand == "") {
            if (input1 == "") {
                input1 = input;
                return;
            }
        } else {
            if (input2 == "") {
                input2 = input;
                return;
            }
        }
    }
    if (output == "") {
        if (operand == "") {
            operand = input;
        } else {
            solveEqn();
            input1 = output;
            input2 = "";
            operand = input;
            output = ""
        }
    } else {
        input1 = output;
        input2 = "";
        operand = input;
        output = "";
    }
}

function showScreen() {
    // @ts-ignore
    document.getElementById("input1").innerHTML = input1;
    // @ts-ignore
    document.getElementById("input2").innerHTML = input2;
    // @ts-ignore
    document.getElementById("operand").innerHTML = operand;
    // @ts-ignore
    document.getElementById("output").innerHTML = output;
}

function userInput(input) {
    if (input >= '0' && input <= '9') {
        setNum(input);
    }

    if (input == ".") {
        setDec(input);
    }

    if (input == '-' || input == '+' || input == '*' || input == '/') {
        setOperand(input);
    }

    if (input == '=' || input == "Enter") {
        solveEqn();
    }

    if (input == "Backspace") {
        if (output != "") {
            output = "";
        } else {
            if (operand != "") {
                if (input2 != "") {
                    input2 = input2.slice(0, -1);
                } else {
                    operand = "";
                }
            } else {
                if (input1 != "") {
                    input1 = input1.slice(0, -1);
                }
            }
        }
    }

    showScreen();
}

document.querySelectorAll("#wrapper button").forEach((button) => {
    button.addEventListener("click", (event) => {
        if (event.target.id == "backspace") {
            userInput("Backspace");
        } else {
            userInput(event.target.innerHTML);
        }
    })
});

document.addEventListener("keydown", (event) => {
    event.preventDefault();
    userInput(event.key);
});