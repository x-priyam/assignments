function checkInput(userInput, inputType) {
    var checkRegex, emptyErrMsg, invalidErrMsg;

    if (inputType == "name") {
        checkRegex = /^[A-Za-z\s]+$/;    // True if alphabets or space
        emptyErrMsg = "your Name";
        invalidErrMsg = "only alphabets";
    } else if (inputType == "email") {
        checkRegex = /[\w]+@[A-Za-z]+\.[A-Za-z]+/; // true if matches email format
        emptyErrMsg = "your Email ID";
        invalidErrMsg = "a valid email format";
    } else if (inputType == "phone") {
        checkRegex = /^[\d]{10}$/;  // true if 10 digit number
        emptyErrMsg = "your Phone Number";
        invalidErrMsg = "a valid phone number";
    }
    userInput = userInput.value;
    var errMsgBox = document.querySelector("#form-" + inputType + " .err");

    if (userInput.length == 0) {
        errMsgBox.innerHTML = "&times; Please enter " + emptyErrMsg;
        errMsgBox.classList.add("show");
        return false;
    } else if (!userInput.match(checkRegex)) {
        errMsgBox.innerHTML = "&times; Please enter " + invalidErrMsg;
        errMsgBox.classList.add("show");
        return false;
    } else {
        errMsgBox.classList.remove("show");
        return true;
    }
}

function checkPref() {
    var errMsgBox = document.querySelector("#pref .err");
    var prefCount = document.querySelectorAll("#pref input:checked").length;

    if (prefCount == 0) {
        errMsgBox.classList.add("show");
        return false;
    } else {
        errMsgBox.classList.remove("show");
        return true;
    }
}

document.getElementById("name").addEventListener("input", (event) => {
    checkInput(event.target, "name");
});
document.getElementById("email").addEventListener("input", (event) => {
    checkInput(event.target, "email");
});
document.getElementById("phone").addEventListener("input", (event) => {
    checkInput(event.target, "phone");
});

document.querySelectorAll("#pref input").forEach((pref) => {
    pref.addEventListener("input", checkPref);
});

function showResponse() {
    var time = getComputedStyle(document.documentElement).getPropertyValue("--animation-time");
    var signUp = document.getElementById("sign-up");
    var response = document.getElementById("response");

    signUp.classList.add("zoom-out");

    response.classList.add("show");
    response.classList.add("fly-in");

    time = time.slice(0, -2);
    setTimeout(function () {
        signUp.classList.add("hide");
    }, time * 2);

    return;
}

function fillResponse() {
    var inputName = document.getElementById("name").value;
    var inputEmail = document.getElementById("email").value;
    var inputPhone = document.getElementById("phone").value;
    var responsePrefMsg = "";

    var inputCheckGames = document.getElementById("games").checked;
    var inputCheckSports = document.getElementById("sports").checked;
    var inputCheckMusic = document.getElementById("music").checked;

    if (inputCheckGames) {
        responsePrefMsg += "Games";
    }
    if (inputCheckSports && inputCheckMusic) {
        if (inputCheckGames) {
            responsePrefMsg += ",";
        }
        responsePrefMsg += " Sports and Music";
    } else if (inputCheckSports || inputCheckMusic) {
        if (inputCheckGames) {
            responsePrefMsg += " and ";
        }
        if (inputCheckSports) {
            responsePrefMsg += "Sports";
        } else {
            responsePrefMsg += "Music";
        }
    }

    var responseName = document.getElementById("response-name");
    var responseEmail = document.getElementById("response-email");
    var responsePhone = document.getElementById("response-phone");
    var responsePref = document.getElementById("response-pref");

    responseName.innerHTML = inputName;
    responseEmail.innerHTML = inputEmail;
    responsePhone.innerHTML = inputPhone;
    responsePref.innerHTML = responsePrefMsg;

    return;
}

function submitForm() {
    var inputName = document.getElementById("name");
    var inputEmail = document.getElementById("email");
    var inputPhone = document.getElementById("phone");

    if (checkInput(inputName, "name") && checkInput(inputEmail, "email") && checkInput(inputPhone, "phone") && checkPref()) {
        fillResponse();
        showResponse();
    }
    return;
}

document.querySelector("form").addEventListener("submit", (event) => {
    event.preventDefault();
    submitForm();
});