#include <QApplication>
#include <QIcon>
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>

void printAddedFont(int id);

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    auto imageLabel = new QLabel();
    imageLabel->setPixmap(QPixmap(":/images/paste.png"));

    auto layout = new QHBoxLayout();
    layout->addWidget(imageLabel);

    auto widget = QWidget();
    widget.setLayout(layout);

    widget.show();

    return app.exec();
}