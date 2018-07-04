rem del template/Debug/tests.exe
del C:/projects/mp1-2018-2/template/Release/tests.exe
for /r %%a in (*.exe) do (
  echo "%%~fa"
  call "%%~fa"
)