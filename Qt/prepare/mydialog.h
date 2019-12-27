#ifndef MYDIALOG_H
#define MYDIALOG_H

#define MYDIALOG_H
#include <QDialog>
class QTabWidget;
class MyDialog : public QDialog
{
 Q_OBJECT
public:
 explicit MyDialog(QWidget *parent = 0);
signals:
public slots:
private:
 QTabWidget *tabWidget;
};

#endif // MYDIALOG_H
