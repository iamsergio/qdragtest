#include "controller.h"

#include <QDebug>
#include <QDrag>
#include <QGuiApplication>
#include <QMimeData>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQuickView>
#include <QTimer>

static QQuickView *createView() {
  auto view = new QQuickView();
  view->setResizeMode(QQuickView::SizeRootObjectToView);
  view->rootContext()->setContextProperty("_controller", new Controller());

  view->setSource(QUrl("qrc:/main.qml"));
  view->show();
  view->resize(500, 500);

  return view;
}

int main(int a, char **b) {
  QGuiApplication app(a, b);

  createView();

  return app.exec();
}
