rem del template/Debug/tests.exe
del template/Release/tests.exe
for /r %%a in (*.exe) do (
  echo "%%~fa"
  call "%%~fa"
)