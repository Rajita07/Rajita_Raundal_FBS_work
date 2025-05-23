//7. Accept the age and check if the person is: Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above) 

void main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Child\n");
    }
    else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    }
    else if (age >= 60) {
        printf("Senior\n");
    }
    else {
        printf("Invalid age input\n");
    }

}
