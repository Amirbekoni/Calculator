#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double getFirstNum() const;
    double getSecondNum() const;
    double getThirdNum() const;
    double getResult() const;
    double getEnd() const;

    void setFirstNum(double firstNum);
    void setSecondNum(double secondNum);
    void setThirdNum(double thirdNum);
    void setResult(double result);
    void setEnd(double end);

    void Addition(double first, double second, double third);
    void Substraction(double first, double second, double third);
    void Multiplication(double first, double second, double third);
    void Division(double first, double second, double third);
    void Descriminant(double first, double second, double third);

private slots:
    void on_btnAdd_clicked();

    void on_btnSubstract_clicked();

    void on_btnMultiply_clicked();

    void on_btnDivide_clicked();

    void on_Desk_clicked();

private:
    Ui::MainWindow *ui;
    double firstNum;
    double secondNum;
    double thirdNum;
    double result;
    double end;
};
#endif // MAINWINDOW_H
