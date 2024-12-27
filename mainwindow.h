#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "clamavthread.h"
#include "ScanResultModel.h"

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

private slots:
    void on_pushButton_clicked();
    void onDetected(const QString &file, bool isSafe, const QString &virname);
    void onFinished();

private:
    Ui::MainWindow *ui;
    ClamAVThread *clamavThread;
    ScanResultModel *scanResultModel;
};

#endif // MAINWINDOW_H
