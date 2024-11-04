#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::getFirstNum() const{
    return firstNum;
}

double MainWindow::getSecondNum() const{
    return secondNum;
}

double MainWindow::getThirdNum() const{
    return thirdNum;
}

double MainWindow::getResult() const{
    return result;
}

double MainWindow::getEnd() const{
    return end;
}

void MainWindow::setFirstNum(double firstNum){
    this->firstNum = firstNum;
}
void MainWindow::setSecondNum(double secondNum){
    this->secondNum = secondNum;
};

void MainWindow::setThirdNum(double thirdNum){
    this->thirdNum = thirdNum;
}

void MainWindow::setResult(double result){
    this->result = result;
};

void MainWindow::setEnd(double end){
    this->end = end;
}

void MainWindow::Addition(double first, double second, double third)
{
    setFirstNum(first);
    setSecondNum(second);
    setThirdNum(third);

    int temp = firstNum + secondNum + thirdNum;

    setResult(temp);
};

void MainWindow::Substraction(double first, double second, double third)
{
    setFirstNum(first);
    setSecondNum(second);
    setThirdNum(third);

    int temp = firstNum - secondNum - thirdNum;

    setResult(temp);
};

void MainWindow::Multiplication(double first, double second, double third)
{
    setFirstNum(first);
    setSecondNum(second);
    setThirdNum(third);

    int temp = firstNum * secondNum * thirdNum;

    setResult(temp);
};

void MainWindow::Division(double first, double second, double third)
{
    setFirstNum(first);
    setSecondNum(second);
    setThirdNum(third);

    int temp = firstNum / secondNum / thirdNum;

    setResult(temp);
};

void MainWindow::Descriminant(double first, double second, double third)
{
    setFirstNum(first);
    setSecondNum(second);
    setThirdNum(third);

    double descriminant = sqrt((secondNum * secondNum) - (4 * firstNum * thirdNum));

    if(descriminant < 0){
        setResult(-1000000);
        setEnd(-1000000);
    } else if(descriminant == 0){
        double temp1 = ((-1 * secondNum) + descriminant) / (2 * firstNum);
        setResult(temp1);
        setEnd(1000000);
    } else{
        double temp1 = ((-1 * secondNum) + descriminant) / (2 * firstNum);
        double temp2 = ((-1 * secondNum) - descriminant) / (2 * firstNum);
        setResult(temp1);
        setEnd(temp2);
    }
};


void MainWindow::on_btnAdd_clicked()
{
    Addition(ui->txtFirstNum->text().toDouble(),
             ui->txtSecondNum->text().toDouble(),
             ui->txtThirdNum->text().toDouble());

    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnSubstract_clicked()
{
    Substraction(ui->txtFirstNum->text().toDouble(),
             ui->txtSecondNum->text().toDouble(),
                 ui->txtThirdNum->text().toDouble());

    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    Multiplication(ui->txtFirstNum->text().toDouble(),
                   ui->txtSecondNum->text().toDouble(),
                   ui->txtThirdNum->text().toDouble());

    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnDivide_clicked()
{
    Division(ui->txtFirstNum->text().toDouble(),
             ui->txtSecondNum->text().toDouble(),
             ui->txtThirdNum->text().toDouble());

    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_Desk_clicked()
{
    Descriminant(ui->txtFirstNum->text().toDouble(),
                 ui->txtSecondNum->text().toDouble(),
                 ui->txtThirdNum->text().toDouble());


    ui->txtResult->setText(QString::number(result));
    if (result == -1000000 && end == -1000000){
        ui->txtResult->setText("None");
        ui->txtEnd->setText("None");
    }
    else if(end == 1000000){
        ui->txtEnd->setText("None");
    } else {
    ui->txtEnd->setText(QString::number(end));
    }
}

