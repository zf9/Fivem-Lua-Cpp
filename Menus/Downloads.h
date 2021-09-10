#pragma once
#include <Windows.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")

#pragma warning(disable:4996)
using namespace std;

void PathCheck()
{
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\";
    if (!CreateDirectory(dwnld_path.c_str(), NULL))
    {

    }
}

void DownloadLux()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Lux.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952516277534740/Lux.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadEulen()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Eulen1.0.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952998601502730/Eulen1.0.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadFallout()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Fallout.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021884088390/Fallout.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadATG()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\atg.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953025067569162/atg.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadMaestro()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Maestro-Avux.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952987465621554/Maestro-Avux.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadHugeV()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\HugeV.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953028049723393/HugeV.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadLynx()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\lynx111.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021070393374/lynx111.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadHamxLynx()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\hamxlynx.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021183623198/hamxlynx.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadFiveSenseNertigel()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\FiveSenseNertigel.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953028896976956/FiveSenseNertigel.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadPage1()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path1 = "C:\\ProgramData\\" + g + "\\FiveSenseNertigel.lua";
    string dwnld_path2 = "C:\\ProgramData\\" + g + "\\HamLynx.lua";
    string dwnld_path3 = "C:\\ProgramData\\" + g + "\\Lynx.lua";
    string dwnld_path4 = "C:\\ProgramData\\" + g + "\\HugeV.lua";
    string dwnld_path5 = "C:\\ProgramData\\" + g + "\\Maestro-Avux.lua";
    string dwnld_path6 = "C:\\ProgramData\\" + g + "\\ATG.lua";
    string dwnld_path7 = "C:\\ProgramData\\" + g + "\\Fallout.lua";
    string dwnld_path8 = "C:\\ProgramData\\" + g + "\\Eulen.lua";
    string dwnld_path9 = "C:\\ProgramData\\" + g + "\\Lux.lua";
    string dwnld_URL1 = "https://cdn.discordapp.com/attachments/882952460572975134/882953028896976956/FiveSenseNertigel.lua";
    string dwnld_URL2 = "https://cdn.discordapp.com/attachments/882952460572975134/882953021183623198/hamxlynx.lua";
    string dwnld_URL3 = "https://cdn.discordapp.com/attachments/882952460572975134/882953021070393374/lynx111.lua";
    string dwnld_URL4 = "https://cdn.discordapp.com/attachments/882952460572975134/882953028049723393/HugeV.lua";
    string dwnld_URL5 = "https://cdn.discordapp.com/attachments/882952460572975134/882952987465621554/Maestro-Avux.lua";
    string dwnld_URL6 = "https://cdn.discordapp.com/attachments/882952460572975134/882953025067569162/atg.lua";
    string dwnld_URL7 = "https://cdn.discordapp.com/attachments/882952460572975134/882953021884088390/Fallout.lua";
    string dwnld_URL8 = "https://cdn.discordapp.com/attachments/882952460572975134/882952998601502730/Eulen1.0.lua";
    string dwnld_URL9 = "https://cdn.discordapp.com/attachments/882952460572975134/882952516277534740/Lux.lua";

    URLDownloadToFileA(NULL, dwnld_URL1.c_str(), dwnld_path1.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL2.c_str(), dwnld_path2.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL3.c_str(), dwnld_path3.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL4.c_str(), dwnld_path4.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL5.c_str(), dwnld_path5.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL6.c_str(), dwnld_path6.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL7.c_str(), dwnld_path7.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL8.c_str(), dwnld_path8.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL9.c_str(), dwnld_path9.c_str(), 0, NULL);
}
/// <summary>
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void DownloadPage2()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path1 = "C:\\ProgramData\\" + g + "\\BypassChocoHax4.lua";
    string dwnld_path2 = "C:\\ProgramData\\" + g + "\\Riot.lua";
    string dwnld_path3 = "C:\\ProgramData\\" + g + "\\Lumia.lua";
    string dwnld_path4 = "C:\\ProgramData\\" + g + "\\SugarMenu.lua";
    string dwnld_path5 = "C:\\ProgramData\\" + g + "\\DesudoMenu.lua";
    string dwnld_path6 = "C:\\ProgramData\\" + g + "\\InfinityMenu.lua";
    string dwnld_path7 = "C:\\ProgramData\\" + g + "\\BloodX.lua";
    string dwnld_path8 = "C:\\ProgramData\\" + g + "\\Absolute.lua";
    string dwnld_path9 = "C:\\ProgramData\\" + g + "\\Dopaminie.lua";
    string dwnld_URL1 = "https://cdn.discordapp.com/attachments/882952460572975134/885852301594607696/BypassChocoHax4.lua";
    string dwnld_URL2 = "https://cdn.discordapp.com/attachments/882952460572975134/885852283735253032/riot.lua";
    string dwnld_URL3 = "https://cdn.discordapp.com/attachments/882952460572975134/885852276693028885/Lumia.lua";
    string dwnld_URL4 = "https://cdn.discordapp.com/attachments/882952460572975134/885852271550791690/SugarMenu0.4.lua";
    string dwnld_URL5 = "https://cdn.discordapp.com/attachments/882952460572975134/885852267494899762/DesudoMenuV21.lua";
    string dwnld_URL6 = "https://cdn.discordapp.com/attachments/882952460572975134/885852231168065566/infinitymenu_1_1.lua";
    string dwnld_URL7 = "https://cdn.discordapp.com/attachments/882952460572975134/885852225883209728/BloodX.lua";
    string dwnld_URL8 = "https://cdn.discordapp.com/attachments/882952460572975134/885851638227681340/Absolute-2.lua";
    string dwnld_URL9 = "https://cdn.discordapp.com/attachments/882952460572975134/885851638001205258/Dopaminie.lua";

    URLDownloadToFileA(NULL, dwnld_URL1.c_str(), dwnld_path1.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL2.c_str(), dwnld_path2.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL3.c_str(), dwnld_path3.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL4.c_str(), dwnld_path4.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL5.c_str(), dwnld_path5.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL6.c_str(), dwnld_path6.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL7.c_str(), dwnld_path7.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL8.c_str(), dwnld_path8.c_str(), 0, NULL);
    URLDownloadToFileA(NULL, dwnld_URL9.c_str(), dwnld_path9.c_str(), 0, NULL);
}

void DownloadBypassChocoHax4()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\BypassChocoHax4.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852301594607696/BypassChocoHax4.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadRiot()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Riot.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852283735253032/riot.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadLumia()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Lumia.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852276693028885/Lumia.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadSugarMenu()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\SugarMenu.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852271550791690/SugarMenu0.4.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadDesudoMenu()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\DesudoMenu.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852267494899762/DesudoMenuV21.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadInfinityMenu()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\InfinityMenu.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852231168065566/infinitymenu_1_1.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadBloodX()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\BloodX.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885852225883209728/BloodX.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadAbsolute()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Absolute.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885851638227681340/Absolute-2.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}
void DownloadDopaminie()
{
    PathCheck();
    char* user = getenv("username");
    string g = user;
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Dopaminie.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/885851638001205258/Dopaminie.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
}