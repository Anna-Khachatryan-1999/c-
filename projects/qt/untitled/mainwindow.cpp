#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->addWidget_button, &QPushButton::clicked,
                     this, &MainWindow::onAddWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAddWidget()
{
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->widgets_frame->layout());

    QString buttonText = tr("Button: #%1").arg(layout->count());
    QPushButton* button = new QPushButton(buttonText, qobject_cast<QWidget*>(ui->widgets_frame));
    layout->insertWidget(0, button);

    QObject::connect(
                button, &QPushButton::clicked,
                this, &MainWindow::onRemoveWidget);
}

void MainWindow::onRemoveWidget()
{

}

void MainWindow::on_pushButton_clicked()
{

}
