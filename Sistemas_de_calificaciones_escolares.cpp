#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombreAlumno;
    int edad = 0;
    float calificacion1 = 0.0f;
    float calificacion2 = 0.0f;
    float calificacion3 = 0.0f;
@@ -14,6 +15,9 @@ int main() {
    cout << "Ingresa el nombre del alumno: ";
    getline(cin, nombreAlumno);

    cout << "Ingresa la edad del alumno: ";
    cin >> edad;

    cout << "Ingresa la primera calificacion: ";
    cin >> calificacion1;

@@ -26,6 +30,7 @@ int main() {
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0f;

    cout << "\nAlumno: " << nombreAlumno << endl;
    cout << "Edad: " << edad << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;