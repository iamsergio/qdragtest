#include "controller.h"

#include <QDebug>
#include <QDrag>
#include <QMimeData>

Controller::Controller(QObject *parent) : QObject(parent) {}

void Controller::startQDrag() {
  QDrag drg(this);
  auto mime = new QMimeData();
  drg.setMimeData(mime);
  qDebug() << "Started drag";
  auto result = drg.exec();
  qDebug() << "Finished drag" << result;
}