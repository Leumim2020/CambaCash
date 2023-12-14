cls
@ECHO OFF
title PastaSegura
if EXIST "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}" goto UNLOCK
if NOT EXIST PastaSegura goto MDLOCKER
:CONFIRM
echo Tem certeza que deseja bloquear a pasta(S/N)
set/p "cho=＞"
if %cho%==S goto LOCK
if %cho%==s goto LOCK
if %cho%==n goto END
if %cho%==N goto END
echo Invalid choice.
goto CONFIRM
:LOCK
ren PastaSegura "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
attrib +h +s "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
echo Folder locked
goto End
:UNLOCK
echo Digite a Senha da pasta para DESBLOQUEAR
set/p "pass=＞"
if NOT %pass%== admincamba_ goto FAIL
attrib -h -s "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}"
ren "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}" PastaSegura
echo Folder Unlocked successfully
goto End
:FAIL
echo Invalid password
goto end
:MDLOCKER
md PastaSegura
echo Locker created successfully
goto End
:End