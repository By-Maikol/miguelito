#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

struct Patient {
    char name[50];
    int age;
    char gender;
    float weight;
    float height;
    int roomNumber;
    char medication[50];
    char medicationTime[10];
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
            // Movemos el último paciente a la posición vacía
            hospital[i] = hospital[patientCount - 1];
            patientCount--;
            return;
        }
    }

    printf("No se encontro ningun paciente en el cuarto especificado.\n");
}

void viewPatientRecords() {
    int i;
    printf("Registros de pacientes:\n");
    for (i = 0; i < patientCount; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", hospital[i].name);
        printf("Edad: %d\n", hospital[i].age);
        printf("Genero: %c\n", hospital[i].gender);
        printf("Peso: %.2f\n", hospital[i].weight);
        printf("Estatura: %.2f\n", hospital[i].height);
        printf("Numero de cuarto: %d\n", hospital[i].roomNumber);
        printf("Medicamento: %s\n", hospital[i].medication);
        printf("Hora para tomar el medicamento: %s\n", hospital[i].medicationTime);
        printf("------------------------\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nHospital Azul - Sistema de Gestion de Pacientes\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Dar de alta a un paciente\n");
        printf("3. Revisar archivos de pacientes\n");
        printf("4. Salir\n");
        printf("Ingrese su eleccion: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerPatient();
                break;
            case 2:
                dischargePatient();
                break;
            case 3:
                viewPatientRecords();
                break;
            case 4:
                printf("Gracias por usar el sistema de gestion de pacientes.\n");
                break;
            default:
                printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
        }
    } while (choice != 4);

    return 0;
}
