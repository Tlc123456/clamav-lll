#ifndef QTTEST_H
#define QTTEST_H

#include <QCoreApplication>
#include <QSignalSpy>
#include <QtTest/QtTest>

class qttest:public QObject
{
    Q_OBJECT
public:
    qttest();
signals:
    void testSignal(int value);

public slots:
    void testSlot(int value){
        qDebug()<<"Slot received value:"<<value;
    }
};

class TestSignalSlot : public QObject
{
    Q_OBJECT

private:
    void testScanSignal(){
        // 创建对象
        qttest obj;

        //使用QSignalSpy 监听testSignal 信号
        QSignalSpy spy(&obj,&qttest::testSignal);

        // 链接信号到槽
        QObject::connect(&obj,&qttest::testSignal,&obj,&qttest::testSlot);

        //触发信号
        emit obj.testSignal(42);

        //等待信号发射
        QVERIFY(spy.wait(1000));

        //验证信号是否被触发
        QCOMPARE(spy.count(),1); // 期望信号被触发一次

        // 验证信号的参数（值）是否正确
        QList<QVariant> arguments = spy.takeFirst();
        QCOMPARE(arguments.at(0).toInt(), 42);
    }
};

// QTEST_MAIN(TestSignalSlot)
#endif // QTTEST_H
