#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/*
  OSMScout - a Qt backend for libosmscout and libosmscout-map
  Copyright (C) 2010  Tim Teulings

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include <QQmlApplicationEngine>

#include <osmscoutclient/Settings.h>

#include <osmscoutclientqt/MapWidget.h>

class MainWindow : public QQmlApplicationEngine
{
  Q_OBJECT

public slots:
  void InitialisationFinished(const osmscout::DatabaseLoadedResponse& response);

private:
  osmscout::DBThreadRef dbThread;

public:
  explicit MainWindow(const osmscout::DBThreadRef& dbThread);
};

#endif
