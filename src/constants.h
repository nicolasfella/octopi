/*
* This file is part of Octopi, an open-source GUI for pacman.
* Copyright (C) 2013 Alexandre Albuquerque Arnt
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QDir>

/*
 * Collection of Octopi constants and enums
 */

//MainWindow related
enum SystemUpgradeOptions { ectn_NO_OPT, ectn_SYNC_DATABASE_OPT, ectn_NOCONFIRM_OPT };

//UnixCommand related
const QString ctn_MIRROR_CHECK_APP("mirror-check");

enum CommandExecuting { ectn_NONE, ectn_CHECK_UPDATES, ectn_MIRROR_CHECK,
                        ectn_SYNC_DATABASE, ectn_SYSTEM_UPGRADE, ectn_INSTALL, ectn_REMOVE,
                        ectn_REMOVE_INSTALL, ectn_REMOVE_KCP_PKG,
                        ectn_RUN_SYSTEM_UPGRADE_IN_TERMINAL, ectn_RUN_IN_TERMINAL,
                        ectn_SYSINFO };

enum LinuxDistro { ectn_ANTERGOS, ectn_ARCHBANGLINUX, ectn_ARCHLINUX, ectn_CHAKRA, ectn_CONDRESOS,
                   ectn_KAOS, ectn_MANJAROLINUX, ectn_NETRUNNER, ectn_PARABOLA, ectn_SWAGARCH, ectn_UNKNOWN };

enum Language { ectn_LANG_ENGLISH, ectn_LANG_USER_DEFINED };

//PacmanExec - QTextBrowser related
enum TreatString { ectn_TREAT_STRING, ectn_DONT_TREAT_STRING };
enum TreatURLLinks { ectn_TREAT_URL_LINK, ectn_DONT_TREAT_URL_LINK };

//SettingsManager - Octopi related
enum SaveSettingsReason { ectn_AUR_PACKAGELIST, ectn_PACKAGELIST, ectn_CURRENTTABINDEX, ectn_NORMAL=30,
                          ectn_MAXIMIZE_PACKAGES=40, ectn_MAXIMIZE_PROPERTIES=50, ectn_GROUPS=5, ectn_CONSOLE_FONT_SIZE };

const QString ctn_ORGANIZATION("octopi");
const QString ctn_APPLICATION("octopi");
const QString ctn_KEY_SHOW_PACKAGE_NUMBERS_OUTPUT("Show_Package_Numbers_Output");
const QString ctn_KEY_ENABLE_TRANSACTION_DIALOG_IN_SYSTEM_UPGRADE("Enable_Transaction_Dialog_In_System_Upgrade");
const QString ctn_KEY_ENABLE_INTERNET_CHECKING("Enable_Internet_Checking");
const QString ctn_KEY_SHOW_STOP_TRANSACTION("Show_Stop_Transaction");
const QString ctn_KEY_AUR_TOOL("Aur_Tool_Name");
const QString ctn_KEY_AUR_NO_CONFIRM_PARAM("Aur_No_Confirm_Param");
const QString ctn_KEY_AUR_NO_EDIT_PARAM("Aur_No_Edit_Param");
const QString ctn_KEY_SEARCH_OUTDATED_AUR_PACKAGES("Search_Outdated_AUR_Packages");
const QString ctn_KEY_USE_ALTERNATE_ROW_COLOR("Use_Alternate_Row_Color");
const QString ctn_KEY_CONSOLE_SIZE("Console_Font_Size");
const QString ctn_KEY_BACKEND("Backend");
const QString ctn_KEY_CURRENT_TAB_INDEX("Current_Tab_Index");
const QString ctn_KEY_WINDOW_SIZE("Window_Size");
const QString ctn_KEY_TRANSACTION_WINDOW_SIZE("Transaction_Window_Size");
const QString ctn_KEY_OUTPUTDIALOG_WINDOW_SIZE("OutputDialog_Window_Size");
const QString ctn_KEY_OPTIONALDEPS_WINDOW_SIZE("OptionalDeps_Window_Size");
const QString ctn_KEY_PANEL_ORGANIZING("Panel_Organizing");
const QString ctn_KEY_PACKAGE_LIST_ORDERED_COL("PackageList_Ordered_Col");
const QString ctn_KEY_PACKAGE_LIST_SORT_ORDER("PackageList_Sort_Order");
const QString ctn_KEY_USE_DEFAULT_APP_ICON("Use_Default_App_Icon");
const QString ctn_KEY_OCTOPI_BUSY_ICON_PATH("Octopi_Busy_Icon_Path");
const QString ctn_KEY_OCTOPI_RED_ICON_PATH("Octopi_Red_Icon_Path");
const QString ctn_KEY_OCTOPI_YELLOW_ICON_PATH("Octopi_Yellow_Icon_Path");
const QString ctn_KEY_OCTOPI_GREEN_ICON_PATH("Octopi_Green_Icon_Path");
const QString ctn_KEY_AUR_PACKAGE_LIST_ORDERED_COL("Aur_PackageList_Ordered_Col");
const QString ctn_KEY_AUR_PACKAGE_LIST_SORT_ORDER("Aur_PackageList_Sort_Order");
const QString ctn_KEY_SKIP_MIRRORCHECK_ON_STARTUP("Skip_Mirror_Check_At_Startup");
const QString ctn_KEY_SPLITTER_HORIZONTAL_STATE("Splitter_Horizontal_State");
const QString ctn_KEY_SHOW_GROUPS_PANEL("Show_Groups_Panel");
const QString ctn_KEY_PACKAGE_ICON_COLUMN_WIDTH("Package_Icon_Column_Width");
const QString ctn_KEY_PACKAGE_NAME_COLUMN_WIDTH("Package_Name_Column_Width");
const QString ctn_KEY_PACKAGE_VERSION_COLUMN_WIDTH("Package_Version_Column_Width");
const QString ctn_KEY_PACKAGE_REPOSITORY_COLUMN_WIDTH("Package_Repository_Column_Width");
const QString ctn_KEY_SU_TOOL("SU_Tool_Name");
const QString ctn_KEY_TERMINAL("Terminal");
const QString ctn_KEY_INSTANT_SEARCH("Instant_Search");
const QString ctn_AUTOMATIC("automatic");

//SettingsManager - Notifier related
const QString ctn_KEY_LAST_CHECKUPDATES_TIME("LastCheckUpdatesTime");
const QString ctn_KEY_CHECKUPDATES_INTERVAL("CheckUpdatesInterval");
const QString ctn_KEY_CHECKUPDATES_HOUR("CheckUpdatesHour");

//SettingsManager - CacheCleaner related
const QString ctn_KEY_CACHE_CLEANER_WINDOW_SIZE("Cache_Cleaner_Window_Size");
const QString ctn_KEY_KEEP_NUM_INSTALLED("Keep_Num_Installed");
const QString ctn_KEY_KEEP_NUM_UNINSTALLED("Keep_Num_Uninstalled");

//pacman command to retrieve list of upgradable packages with name, version and size
const QString ctn_PACMAN_SUP_COMMAND = "pacman --print-format \"%n %v %s\" -Spu";

//Package related
const QString ctn_TEMP_ACTIONS_FILE ( QDir::tempPath() + QDir::separator() + ".qt_temp_octopi_" );
const QString ctn_PACMAN_DATABASE_DIR = "/var/lib/pacman";
const QString ctn_PACMAN_DATABASE_LOCK_FILE("/var/lib/pacman/db.lck");
const QString ctn_PACMAN_CORE_DB_FILE = "/var/lib/pacman/sync/core.db";

enum PackageStatus { ectn_INSTALLED, ectn_NON_INSTALLED, ectn_OUTDATED, ectn_NEWER,
                     ectn_FOREIGN, ectn_FOREIGN_OUTDATED };

enum ViewOptions { ectn_ALL_PKGS, ectn_INSTALLED_PKGS, ectn_NON_INSTALLED_PKGS };

//Supported AUR user base package tools
const QString ctn_PACAUR_TOOL("pacaur");
const QString ctn_YAOURT_TOOL("yaourt");
const QString ctn_TRIZEN_TOOL("trizen");
const QString ctn_PIKAUR_TOOL("pikaur");
const QString ctn_YAY_TOOL("yay");
const QString ctn_NO_AUR_TOOL("DO_NOT_USE_AUR");

//KaOS user base package tool
const QString ctn_KCP_TOOL("kcp");
//Chakra user base package tool
const QString ctn_CHASER_TOOL("chaser");

//TransactionDialog related
const int ctn_RUN_IN_TERMINAL(328);

//WMHelper related
const QString ctn_NO_SU_COMMAND("none");
const QString ctn_ROOT_SH("/bin/sh -c ");

const QString ctn_LXQTSU("lxqt-sudo");
const QString ctn_OCTOPISUDO("/usr/lib/octopi/octopi-sudo");
const QString ctn_OCTOPI_HELPER("/usr/lib/octopi/octopi-helper");

const QString ctn_KDESU("kdesu");
const QString ctn_KDE_DESKTOP("kwin");
const QString ctn_KDE_X11_DESKTOP("kwin_x11");
const QString ctn_KDE_WAYLAND_DESKTOP("kwin_wayland");
const QString ctn_KDE_EDITOR("kwrite");
const QString ctn_KDE_FILE_MANAGER("kfmclient");
const QString ctn_KDE_TERMINAL("konsole");
const QString ctn_KDE4_OPEN("kde-open");
const QString ctn_KDE5_OPEN("kde-open5");
const QString ctn_KDE4_FILE_MANAGER("dolphin");
const QString ctn_KDE4_EDITOR("kate");

const QString ctn_TDESU("tdesu");
const QString ctn_TDE_DESKTOP("twin");
const QString ctn_TDE_EDITOR("kwrite");
const QString ctn_TDE_FILE_MANAGER("kfmclient");
const QString ctn_TDE_TERMINAL("konsole");

const QString ctn_GKSU_1("/usr/libexec/gksu");
const QString ctn_GKSU_2("gksu");

const QString ctn_ANTERGOS_FILE_MANAGER("nautilus");

const QString ctn_ARCHBANG_EDITOR("medit");
const QString ctn_ARCHBANG_FILE_MANAGER("spacefm");

const QString ctn_RXVT_TERMINAL("urxvt");

const QString ctn_GNOME_EDITOR("gedit");
const QString ctn_GNOME_FILE_MANAGER("nautilus");
const QString ctn_GNOME_TERMINAL("gnome-terminal");

const QString ctn_XFCE_DESKTOP("xfdesktop");
const QString ctn_XFCE_EDITOR("mousepad");
const QString ctn_XFCE_EDITOR_ALT("leafpad");
const QString ctn_XFCE_FILE_MANAGER("thunar");
const QString ctn_XFCE_TERMINAL("xfce4-terminal");

const QString ctn_OPENBOX_DESKTOP("openbox");
const QString ctn_LXDE_DESKTOP("lxsession");
const QString ctn_LXDE_TERMINAL("lxterminal");
const QString ctn_LXDE_FILE_MANAGER("pcmanfm");

const QString ctn_LXQT_DESKTOP("lxqt-session");
const QString ctn_LXQT_TERMINAL("qterminal");
const QString ctn_LXQT_FILE_MANAGER("pcmanfm-qt");
const QString ctn_LXQT_EDITOR("juffed");

const QString ctn_MATE_DESKTOP("mate-session");
const QString ctn_MATE_EDITOR("mate-open");
const QString ctn_MATE_FILE_MANAGER("caja");
const QString ctn_MATE_TERMINAL("mate-terminal");

const QString ctn_CINNAMON_DESKTOP("cinnamon-session");
const QString ctn_CINNAMON_EDITOR("gedit");
const QString ctn_CINNAMON_FILE_MANAGER("nemo");
const QString ctn_CINNAMON_TERMINAL("gnome-terminal");

const QString ctn_PEK_TERMINAL("sakura");
const QString ctn_XTERM("xterm");
const QString ctn_QTERMWIDGET("qtermwidget5");

enum EditOptions { ectn_EDIT_AS_ROOT, ectn_EDIT_AS_NORMAL_USER };

//Octopi-notifier related  -------------------------------------------------------------------------------

//const QString ctn_PACMANHELPER_BINARY = "/usr/lib/octopi/pacmanhelper";
const QString ctn_CHECKUPDATES_BINARY = "/usr/bin/checkupdates";
const QString ctn_DBUS_PACMANHELPER_SERVICE = "/usr/share/dbus-1/system-services/org.octopi.pacmanhelper.service";

enum ExecOpt { ectn_NORMAL_EXEC_OPT, ectn_SYSUPGRADE_EXEC_OPT, ectn_SYSUPGRADE_NOCONFIRM_EXEC_OPT, ectn_AUR_UPGRADE_EXEC_OPT };

//Octopi-helper related ----------------------------------------------------------------------------------

const int ctn_NO_TEMP_ACTIONS_FILE(1);
const int ctn_PACMAN_PROCESS_EXECUTING(2);
const int ctn_SUSPICIOUS_ACTIONS_FILE(3);

#endif // CONSTANTS
