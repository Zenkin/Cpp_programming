#include <QThread>
#include <QtCore/QtCore>
#include <QApplication>
#include <iostream>

using namespace std;

class ExampleThread : public QThread {
public:
    explicit ExampleThread(char *str);
    void run();
private:
    char *name;
};

ExampleThread::ExampleThread(char *str){
    name = str;
}

void ExampleThread::run() {
    for (int i = 0; i <= 100; i++) {
        cout << name << " " << i << endl;
    }
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    ExampleThread threadA("threadA");

    threadA.run();

    return a.exec();
}
