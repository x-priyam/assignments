package muj.assignment.lab_five;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView teamScore;
    private int currScore = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        teamScore = findViewById(R.id.teamScore);
        updateScore();

        Button scoreUp = findViewById(R.id.teamUp);
        scoreUp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                increaseScore();
                updateScore();
            }
        });

        Button scoreDown = findViewById(R.id.teamDown);
        scoreDown.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                decreaseScore();
                updateScore();
            }
        });
    }

    private void updateScore() {
        teamScore.setText(Integer.toString(currScore));
    }

    private void increaseScore() {
        currScore++;
    }

    private void decreaseScore() {
        if (currScore > 0) {
            currScore--;
        }
    }
}