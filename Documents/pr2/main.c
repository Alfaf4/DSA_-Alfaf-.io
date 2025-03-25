int main() {
    float marks[3][4];
    char *subjects[] = {"Physics", "Chemistry", "Math"};
    char *categories[] = {"Assignment", "Course Work", "Mid Term", "End of Term"};
    float subject_avg[3], total_avg = 0;

    // Input marks for each subject
    for (int i = 0; i < 3; i++) {
        printf("\nEnter marks for %s:\n", subjects[i]);
        for (int j = 0; j < 4; j++) {
            printf("Enter %s mark: ", categories[j]);
            scanf("%f", &marks[i][j]);
        }
    }

    printf("\n=== Subject Averages ===\n");

    // Calculate the average for each subject and the overall average
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += marks[i][j];
        }
        subject_avg[i]=sum/4;
        total_avg += subject_avg[i];
        printf("%s: %.2f\n", subjects[i], subject_avg[i]);
    }

    total_avg /= 3;
    printf("\nOverall Average: %.2f\n", total_avg);
   
}
