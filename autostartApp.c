////////////////////////////////////////////////////////////
// CREATE AUTOSTART APPLICATION/COMMAND IN MANJARO DEEPIN //
////////////////////////////////////////////////////////////

//METHOD 1: CREATE YOUR OWN COMMAND-BASED ICON
// Make a file (e.g. Ibus.desktop) in ~/.config/autostart with content as below:
[Desktop Entry]
Encoding=UTF-8
Name = Ibus
Type=Application
Terminal=false
Exec =ibus-daemon -drx

//METHOD 2: Copy/paste a .desktop file
// Go to 
/usr/share/applications
// copy/paste the desired application to 
~/.config/autostart

// source
https://arcolinux.com/how-to-autostart-any-application-on-any-linux-desktop/

// June 3rd 2019
// lttung1197
