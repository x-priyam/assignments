package muj.assignment.two

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.DatePicker
import android.widget.EditText
import android.widget.RadioButton
import android.widget.RadioGroup
import android.widget.Spinner
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val fullName = findViewById<EditText>(R.id.full_name)
        val email = findViewById<EditText>(R.id.email)
        val genderGroup = findViewById<RadioGroup>(R.id.gender_group)
        val password = findViewById<EditText>(R.id.password)
        val passwordConfirm = findViewById<EditText>(R.id.password_confirm)
        val mobileNo = findViewById<EditText>(R.id.mobile)
        val dobPicker = findViewById<DatePicker>(R.id.dob)
        val address = findViewById<EditText>(R.id.address)
        val locationSpinner = findViewById<Spinner>(R.id.location)

        val btnSubmit = findViewById<Button>(R.id.submit)
        val btnClear = findViewById<Button>(R.id.clear)

        val outputText = findViewById<TextView>(R.id.output)

        btnClear.setOnClickListener{
            fullName.setText("")
            email.setText("")
            genderGroup.clearCheck()
            password.setText("")
            passwordConfirm.setText("")
            mobileNo.setText("")
            address.setText("")
            outputText.text = ""
        }

        btnSubmit.setOnClickListener{
            if(fullName.length() == 0) {
                fullName.error = "Name is required"
                return@setOnClickListener
            }
            if(!fullName.text.matches("^[A-Za-z]+(?: [A-Z][a-z]+)*".toRegex())) {
                fullName.error = "Enter a valid name"
                return@setOnClickListener
            }

            if(email.length() == 0) {
                email.error = "Email is required"
                return@setOnClickListener
            }
            if(!email.text.matches("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}".toRegex())) {
                email.error = "Enter a valid Email ID"
                return@setOnClickListener
            }

            if(genderGroup.checkedRadioButtonId == -1) {
                Toast.makeText(this, "Select a Gender", Toast.LENGTH_LONG).show()
                return@setOnClickListener
            }
            val inputGender = findViewById<RadioButton>(genderGroup.checkedRadioButtonId).text

            if(password.length() == 0) {
                password.error = "Password is required"
                return@setOnClickListener
            }
            if(passwordConfirm.length() == 0) {
                passwordConfirm.error = "Confirm your password"
                return@setOnClickListener
            }
            if(password.text.toString() != passwordConfirm.text.toString()) {
                passwordConfirm.error = "Passwords do not match!"
                return@setOnClickListener
            }

            if(mobileNo.length() == 0) {
                mobileNo.error = "Mobile Number is required"
                return@setOnClickListener
            }
            if(!mobileNo.text.matches("^(?:\\+\\d{1,2}\\s?)?(?:\\(\\d{3}\\)|\\d{3})[-.\\s]?\\d{3}[-.\\s]?\\d{4}".toRegex())) {
                mobileNo.error = "Enter a valid Mobile Number"
                return@setOnClickListener
            }

            if(address.length() == 0) {
                address.error = "Address is required"
                return@setOnClickListener
            }

            val inputLocation = locationSpinner.selectedItem

            var userMessage = "Hey "
            userMessage += if(inputGender == "Male") {
                "Bro "
            } else {
                "Girlie "
            }
            userMessage += "from ${inputLocation},\n"

            userMessage += "We'll wish you a Happy Birthday on ${dobPicker.dayOfMonth}/${dobPicker.month + 1} at ${email.text} and ${mobileNo.text}.\n\n"
            userMessage += "We'll also send a postcard to ${address.text} (just remember your password: ${password.text})\n\n"
            userMessage += "And don't worry ${fullName.text}, we won't forget :)"

            outputText.text = userMessage
        }
    }
}
