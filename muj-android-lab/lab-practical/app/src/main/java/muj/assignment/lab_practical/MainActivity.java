package muj.assignment.lab_practical;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView numOneInput;
    private TextView numTwoInput;

    private TextView resultOutput;

    private int numOne;
    private int numTwo;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        numOneInput = findViewById(R.id.numOne);
        numTwoInput = findViewById(R.id.numTwo);
        resultOutput = findViewById(R.id.result);

        Button add = findViewById(R.id.add);
        Button subtract = findViewById(R.id.subtract);
        Button multiply = findViewById(R.id.multiply);
        Button divide = findViewById(R.id.divide);

        add.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(!getNums()) {
                    return;
                }

                int result = numOne + numTwo;
                resultOutput.setText(Integer.toString(result));
            }
        });

        subtract.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(!getNums()) {
                    return;
                }

                int result = numOne - numTwo;
                resultOutput.setText(Integer.toString(result));
            }
        });

        multiply.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(!getNums()) {
                    return;
                }

                int result = numOne * numTwo;
                resultOutput.setText(Integer.toString(result));
            }
        });

        divide.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(!getNums()) {
                    return;
                }

                int result = numOne / numTwo;
                resultOutput.setText(Integer.toString(result));
            }
        });
    }

    private boolean getNums() {
        if(numOneInput.getText().toString().equals("") || numTwoInput.getText().toString().equals("")) {
            resultOutput.setText("Please Enter Two Numbers");
            return false;
        } else {
            numOne = Integer.parseInt(numOneInput.getText().toString());
            numTwo = Integer.parseInt(numTwoInput.getText().toString());
            return true;
        }
    }
}