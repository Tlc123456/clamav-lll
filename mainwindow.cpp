#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "clamavthread.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include "ScanResultModel.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , clamavThread(new ClamAVThread(this))
    , scanResultModel(new ScanResultModel(this))  // 创建 ScanResultModel 实例
{
    ui->setupUi(this);

    // 创建一个标准模型
    // model = new QStandardItemModel(this);

    // 设置表头
    // model->setHorizontalHeaderLabels(QStringList() << "序号" << "内容" <<"类型");

    //设置表格的模型
    ui->resultTableView->setModel(scanResultModel);

    // 设置表格的列宽
    ui->resultTableView->setColumnWidth(0,100);
    ui->resultTableView->setColumnWidth(1,200);
    ui->resultTableView->setColumnWidth(2,150);

    // 连接按钮的点击信号
    // connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::on_pushButton_clicked);

    //连接clamAVThread的信号，用于更新表格
    connect(clamavThread,&ClamAVThread::detected,this,&MainWindow::onDetected);
    connect(clamavThread,&ClamAVThread::finished,this,&MainWindow::onFinished);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int rowCount = scanResultModel->rowCount();

    // 在表格末尾添加一行
    scanResultModel->insertRow(rowCount);

    // 在新行的每一列中添加数据
    scanResultModel->setData(scanResultModel->index(rowCount, 0), rowCount + 1); // 序号列：自动递增
    scanResultModel->setData(scanResultModel->index(rowCount, 1), QString("内容 %1").arg(rowCount + 1)); // 内容列：添加内容
    scanResultModel->setData(scanResultModel->index(rowCount, 2), QString("类型 %1").arg(rowCount + 1)); // 类型列：添加类型

    // 开始扫描（你可以传入特定路径，或为空进行全盘扫描）
    clamavThread->start(QUrl("file:///D:/clamav-1.4.1/clamav-1.4.1.win.x64/test_webshell_file/test_webshell_file"));  // 启动全盘扫描

}

void MainWindow::onDetected(const QString &file, bool isSafe, const QString &virname)
{
    // 创建扫描结果结构体
    ScanResult result;
    result.fileName = file;
    result.isSafe = isSafe;
    result.virusName = virname;
    qDebug() << "Scan result for file:" << result.fileName;
    qDebug() << "Status:" << (result.isSafe ? "Safe" : "Infected");
    if (!result.isSafe) {
        qDebug() << "Virus name:" << result.virusName;
    }

    // 获取当前表格的行数
    int rowCount = scanResultModel->rowCount();

    // 在表格末尾添加一行
    scanResultModel->insertRow(rowCount);

    // 将扫描结果数据添加到模型的每一列
    scanResultModel->setData(scanResultModel->index(rowCount, 0), rowCount + 1);  // 序号列
    scanResultModel->setData(scanResultModel->index(rowCount, 1), result.fileName);  // 文件名列
    scanResultModel->setData(scanResultModel->index(rowCount, 2), result.isSafe ? "Safe" : "Infected");  // 安全列
}

void MainWindow::onFinished()
{
    qDebug() << "Scan finished!";
    // 如果需要，做一些扫描完成后的清理或提示
}
