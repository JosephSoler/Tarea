#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Crear una ventana
    QWidget window;
    window.setWindowTitle("Ejemplo de Interfaz Gr�fica con Qt");
    window.setGeometry(100, 100, 300, 200); // (x, y, ancho, alto)

    // Crear un bot�n
    QPushButton button("Haz clic aqu�", &window);
    button.setGeometry(100, 50, 100, 30);

    // Conectar una funci�n al evento clicked() del bot�n
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(&window, "Mensaje", "�Hiciste clic en el bot�n!");
    });

    // Mostrar la ventana y ejecutar la aplicaci�n
    window.show();
    return app.exec();
}

