#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PATIENTS 200

struct Patient {
    char name[50];
    int age;
    char gender;
    float weight;
    float height;
    int roomNumber;
    char medication[50];
    char medicationTime[10];
    int medicationInterval;
    float bmi;
    char disease[50]; 
};

struct Patient hospital[MAX_PATIENTS];
int patientCount = 0;

void registerPatient() {
    if (patientCount < MAX_PATIENTS) {
        struct Patient newPatient;
        printf("Ingrese el nombre del paciente: ");
        scanf("%s", newPatient.name);
        printf("Ingrese la edad del paciente: ");
        scanf("%d", &newPatient.age);
        printf("Ingrese el género del paciente (M/F): ");
        scanf(" %c", &newPatient.gender);
        printf("Ingrese el peso del paciente: ");
        scanf("%f", &newPatient.weight);
        printf("Ingrese la estatura del paciente: ");
        scanf("%f", &newPatient.height);
        printf("Ingrese el número de cuarto designado: ");
        scanf("%d", &newPatient.roomNumber);
        printf("Ingrese el medicamento del paciente: ");
        scanf("%s", newPatient.medication);
        printf("Ingrese la hora en la que debe tomar el medicamento (HH:MM): ");
        scanf("%s", newPatient.medicationTime);
        printf("Ingrese el intervalo en horas para tomar el medicamento: ");
        scanf("%d", &newPatient.medicationInterval);
        printf("Ingrese el tipo de enfermedad del paciente: ");
        scanf("%s", newPatient.disease); 

        newPatient.bmi = newPatient.weight / ((newPatient.height / 100) * (newPatient.height / 100));

        hospital[patientCount++] = newPatient;

        printf("El paciente ha sido registrado con éxito.\n");
    } else {
        printf("No es posible registrar más pacientes. El hospital está lleno.\n");
    }
}

void dischargePatient() {
    int i, room;
    printf("Ingrese el número de cuarto del paciente a dar de alta: ");
    scanf("%d", &room);

    for (i = 0; i < patientCount; i++) {
        if (hospital[i].roomNumber == room) {
            printf("El paciente '%s' ha sido dado de alta.\n", hospital[i].name);
            
            hospital[i] = hospital[patientCount - 1];
            patientCount--;
            return;
        }
    }

    printf("No se encontró ningún paciente en el cuarto especificado.\n");
}

void searchPatientByName() {
    char searchName[50];
    printf("Ingrese el nombre del paciente a buscar: ");
    scanf("%s", searchName);

    int i, found = 0;
    for (i = 0; i < patientCount; i++) {
        if (strcmp(hospital[i].name, searchName) == 0) {
            printf("Paciente encontrado:\n");
            printf("Nombre: %s\n", hospital[i].name);
            printf("Edad: %d\n", hospital[i].age);
            printf("Género: %c\n", hospital[i].gender);
            printf("Peso: %.2f\n", hospital[i].weight);
            printf("Estatura: %.2f\n", hospital[i].height);
            printf("Número de cuarto: %d\n", hospital[i].roomNumber);
            printf("Medicamento: %s\n", hospital[i].medication);
            printf("Hora para tomar el medicamento: %s\n", hospital[i].medicationTime);
            printf("Intervalo para tomar el medicamento: %d horas\n", hospital[i].medicationInterval);
            printf("Índice de masa corporal (IMC): %.2f\n", hospital[i].bmi);
            printf("Tipo de enfermedad: %s\n", hospital[i].disease); 

            if (hospital[i].bmi < 18.5) {
                printf("Estado de peso: Bajo peso\n");
            } else if (hospital[i].bmi < 25.0) {
                printf("Estado de peso: Peso normal\n");
            } else if (hospital[i].bmi < 30.0) {
                printf("Estado de peso: Sobrepeso\n");
            } else {
                printf("Estado de peso: Obesidad\n");
            }

            printf("------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No se encontró ningún paciente con ese nombre.\n");
    }
}

void viewPatientRecords() {
    int i;
    printf("Registros de pacientes:\n");
    for (i = 0; i < patientCount; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", hospital[i].name);
        printf("Edad: %d\n", hospital[i].age);
        printf("Género: %c\n", hospital[i].gender);
        printf("Peso: %.2f\n", hospital[i].weight);
        printf("Estatura: %.2f\n", hospital[i].height);
        printf("Número de cuarto: %d\n", hospital[i].roomNumber);
        printf("Medicamento: %s\n", hospital[i].medication);
        printf("Hora para tomar el medicamento: %s\n", hospital[i].medicationTime);
        printf("Intervalo para tomar el medicamento: %d horas\n", hospital[i].medicationInterval);
        printf("Índice de masa corporal (IMC): %.2f\n", hospital[i].bmi);
        printf("Tipo de enfermedad: %s\n", hospital[i].disease); 

        if (hospital[i].bmi < 18.5) {
            printf("Estado de peso: Bajo peso\n");
        } else if (hospital[i].bmi < 25.0) {
            printf("Estado de peso: Peso normal\n");
        } else if (hospital[i].bmi < 30.0) {
            printf("Estado de peso: Sobrepeso\n");
        } else {
            printf("Estado de peso: Obesidad\n");
        }

        printf("------------------------\n");
    }
}

void calculateNextMedicationTime(struct Patient *patient) {
    time_t currentTime;
    struct tm *currentTimeInfo;
    time(&currentTime);
    currentTimeInfo = localtime(&currentTime);

    int currentHour = currentTimeInfo->tm_hour;
    int currentMinute = currentTimeInfo->tm_min;

    int medicationHour, medicationMinute;
    sscanf(patient->medicationTime, "%d:%d", &medicationHour, &medicationMinute);

    int hourDifference = medicationHour - currentHour;
    int minuteDifference = medicationMinute - currentMinute;

    if (hourDifference < 0 || (hourDifference == 0 && minuteDifference < 0)) {
        hourDifference += 24;
    }

    if (minuteDifference < 0) {
        minuteDifference += 60;
        hourDifference--;
    }

    int nextMedicationHours = hourDifference + (minuteDifference / 60);

    printf("El próximo medicamento para el paciente '%s' se tomará en %d horas.\n", patient->name, nextMedicationHours);

    if (patient->bmi < 18.5) {
        printf("Estado de peso: Bajo peso\n");
    } else if (patient->bmi < 25.0) {
        printf("Estado de peso: Peso normal\n");
    } else if (patient->bmi < 30.0) {
        printf("Estado de peso: Sobrepeso\n");
    } else {
        printf("Estado de peso: Obesidad\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nHospital maik - Sistema de Gestión de Pacientes\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Dar de alta a un paciente\n");
        printf("3. Buscar paciente por nombre\n");
        printf("4. Revisar archivos de pacientes\n");
        printf("5. Calcular próxima toma de medicamento y estado de peso\n");
        printf("6. Salir\n");
        printf("Ingrese su elección: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerPatient();
                break;
            case 2:
                dischargePatient();
                break;
            case 3:
                searchPatientByName();
                break;
            case 4:
                viewPatientRecords();
                break;
            case 5: {
                char searchName[50];
                printf("Ingrese el nombre del paciente para calcular la próxima toma de medicamento y estado de peso: ");
                scanf("%s", searchName);

                int i, found = 0;
                for (i = 0; i < patientCount; i++) {
                    if (strcmp(hospital[i].name, searchName) == 0) {
                        calculateNextMedicationTime(&hospital[i]);
                        found = 1;
                    }
                }

                if (!found) {
                    printf("No se encontró ningún paciente con ese nombre.\n");
                }

                break;
            }
            case 6:
                printf("Gracias por usar el sistema de gestión de pacientes.\n");
                break;
            default:
                printf("Opción inválida. Por favor, ingrese una opción válida.\n");
        }
    } while (choice != 6);

    return 0;
}
