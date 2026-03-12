@echo off
echo Building KBAssetEditor...

if not exist build mkdir build
cd build

cmake ..
cmake --build . --config Release

echo.
echo =========================
echo Build finished!
echo EXE: build/Release/KBAssetEditor.exe
echo =========================
pause
