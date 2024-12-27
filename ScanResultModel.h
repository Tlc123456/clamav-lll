#ifndef UI_H
#define UI_H

#include <QAbstractTableModel>
#include <QList>
#include <QString>

struct ScanResult
{
    QString fileName;
    bool isSafe;
    QString virusName;
};

class ScanResultModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit ScanResultModel(QObject *parent = nullptr)
        :QAbstractTableModel(parent)
    {

    }
    // 设置扫描结果数据
    void setScanResults(const QList<ScanResult>& results)
    {
        beginResetModel(); // 通知视图重置数据
        m_results = results;
        endResetModel();
    }

    // 行数
    int rowCount(const QModelIndex &parent = QModelIndex()) const override
    {
        Q_UNUSED(parent);
        return m_results.count();
    }

    // 列数
    int columnCount(const QModelIndex &parent = QModelIndex()) const override
    {
        Q_UNUSED(parent);
        return 3; // 文件名、是否安全、病毒名称
    }

    //数据填充
    QVariant data(const QModelIndex &index, int role) const override
    {
        if (!index.isValid() || index.row() >= m_results.count())
            return QVariant();

        const ScanResult& result = m_results.at(index.row());

        if (role == Qt::DisplayRole)
        {
            switch(index.column())
            {
            case 0: return result.fileName;//文件名
            case 1: return result.isSafe? "Safe":"Infected";//是否安全
            case 2: return result.virusName; // 病毒名称
            default:return QVariant();
            }
        }
        return QVariant();
    }
private:
    QList<ScanResult> m_results;
};

#endif // UI_H
