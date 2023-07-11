
Illustrates that if QtQuick starts a QDrag, then after the drag stops, wayland will eat the 1st mouse click.

To repro, just click (press+release) the yellow rectangle, and see if "On pressed!" gets printed

Only repro with Qt5+Kwin. Qt6 is fine. Qt5+weston is also fine.

# Build

qmake5 && make

# Run

kwin_wayland &
./qdragtest
