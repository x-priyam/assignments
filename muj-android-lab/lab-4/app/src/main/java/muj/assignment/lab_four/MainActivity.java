package muj.assignment.lab_four;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView teamScore;
    private int currScore = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        teamScore = findViewById(R.id.teamScore);
        updateScoreText();
    }

    public void scoreUp(View view) {
        currScore++;
        updateScoreText();
    }

    public void scoreDown(View view) {
        if(currScore > 0) {
            currScore--;
        }
        updateScoreText();
    }

    private void updateScoreText() {
        teamScore.setText(Integer.toString(currScore));
    }
}