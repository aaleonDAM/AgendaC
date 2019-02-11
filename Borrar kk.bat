@echo off
rem ***************************************************
rem * Autor: Alberto León
rem * Funcionalidad: Borrar archivos out y exe
rem * Version: 1.0
rem * Fecha creacion: 05/02/2019
rem * Fecha modificacion: 07/02/2019
rem ***************************************************

del *.o /f /q
del *.exe /f /q
del compiling_error.txt