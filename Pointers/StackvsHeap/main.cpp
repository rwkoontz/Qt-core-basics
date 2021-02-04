#include <QCoreApplication>
#include <QDebug>

// Pointers go on the heap

void display(QString* value) // thepointer
{
    qInfo() << "The pointer: " << value;
    qInfo() << "The object: " << &value << "A copy of the pointer";
    qInfo() << "The data: " << *value; // pointing to a value
    qInfo("");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; // stack
    QString* description = new QString("Hello World");

    qInfo() << "Name len = " << name.length();
    qInfo() << "Description len = " << description->length();

    display(&name);

    display(description);

    delete description; // sets pointer to zero

    //display(description); // this crashes the program because it point to memory that has been released or freed already

    return a.exec();
}
