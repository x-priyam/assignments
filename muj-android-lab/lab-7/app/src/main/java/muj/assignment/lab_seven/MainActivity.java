package muj.assignment.lab_seven;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView teamOneScore;
    private TextView teamTwoScore;
    private int currOneScore = 0;
    private int currTwoScore = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        teamOneScore = findViewById(R.id.teamOneScore);
        teamOneScore.setText(Integer.toString(currOneScore));

        teamTwoScore = findViewById(R.id.teamTwoScore);
        teamTwoScore.setText(Integer.toString(currTwoScore));

        Button teamOneUp = findViewById(R.id.teamOneUp);
        teamOneUp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                currOneScore++;
                teamOneScore.setText(Integer.toString(currOneScore));
            }
        });

        Button teamOneDown = findViewById(R.id.teamOneDown);
        teamOneDown.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(currOneScore > 0) {
                    currOneScore--;
                    teamOneScore.setText(Integer.toString(currOneScore));
                }
            }
        });

        Button teamTwoUp = findViewById(R.id.teamTwoUp);
        teamTwoUp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                currTwoScore++;
                teamTwoScore.setText(Integer.toString(currTwoScore));
            }
        });

        Button teamTwoDown = findViewById(R.id.teamTwoDown);
        teamTwoDown.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(currTwoScore > 0) {
                    currTwoScore--;
                }
                teamTwoScore.setText(Integer.toString(currTwoScore));
            }
        });
    }
}