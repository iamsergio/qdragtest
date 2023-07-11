
Illustrates that if QtQuick starts a QDrag, then after the drag stops, wayland will eat the 1st mouse click.

To repro, just click (press+release) the yellow rectangle, and see if "On pressed!" gets printed

# Build

qmake5 && make

# Run

kwin_wayland &
./qdragtest
