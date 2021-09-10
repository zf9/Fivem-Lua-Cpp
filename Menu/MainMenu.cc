#include "ui.hh"
#include "../globals.hh"
#include "../imgui/imgui.h"
#include "../imgui/imgui_internal.h"
#include "UI_Header.h"
#include "../Menus/Downloads.h"
#include <string>
#include <Windows.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")

#pragma warning(disable:4996)

void ui::render() {
    if (!globals.active) return;

    MainTheme();
	static int tabs = 0;

    ImGui::SetNextWindowPos(ImVec2(window_pos.x, window_pos.y), ImGuiCond_Once);
    ImGui::SetNextWindowSize(ImVec2(window_size.x, window_size.y));
    ImGui::SetNextWindowBgAlpha(1.0f);

    ImGui::Begin(window_title, &globals.active, window_flags);
    {
        ImGui::Columns(2);

        ImGui::SetColumnOffset(1, 223.4);
        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + -9); //
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + -9); //
        ImGui::PushStyleColor(ImGuiCol_ChildBg, ImVec4(200 / 255.f, 200 / 255.f, 200 / 255.f, 0.0f));

		if (ImGui::BeginChild("wondoa", ImVec2(223.4, 380)))
		{
			ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 9); //
			ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 13); //
			if (ImGui::Button(  "  Home", ImVec2(200, 37)))
			{
				tabs = 0;
			}

			ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 13); //
			if (ImGui::Button(  "  Page 1", ImVec2(200, 37)))
			{
				tabs = 1;
			}
			ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 13); //
			if (ImGui::Button(  "  Page 2", ImVec2(200, 37)))
			{
				tabs = 2;
			}

			ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 13); //
			if (ImGui::Button(  "  Settings", ImVec2(200, 37)))
			{
				tabs = 3;
			}


			ImGui::EndChild();

		}

		ImGui::PopStyleColor();


		ImGui::NextColumn();



		if (tabs == 0) {
			if (ImGui::Button("Open HamMafia Website"))
			{
				ShellExecute(0, 0, "https://hammafia.co/", 0, 0, SW_SHOW);
			}
			if (ImGui::Button("Join Support Discord"))
			{
				ShellExecute(0, 0, "https://discord.gg/ujA57GHnu2", 0, 0, SW_SHOW);
			}
			ImGui::Text("View Source");
			if (ImGui::Button("v1.0 C#"))
			{
				ShellExecute(0, 0, "https://github.com/zf9/HamMafia-extension", 0, 0, SW_SHOW);
			}
			ImGui::SameLine();
			if (ImGui::Button("v2.0 C++"))
			{
				ShellExecute(0, 0, "https://github.com/ScriptKiddiesTheCoderGod/HamMafia-Extension-cpp", 0, 0, SW_SHOW);
			}
			ImGui::SameLine();
			if (ImGui::Button("v3.0 C++"))
			{
				ShellExecute(0, 0, "https://github.com/zf9/Fivem-Lua-Cpp", 0, 0, SW_SHOW);
			}
			ImGui::Text("Source v1.0 C# Made by ZF9 [Console]");
			ImGui::Text("Source v2.0 C++ Made by ScriptKiddiesTheCoderGod [Console]");
			ImGui::Text("Source v3.0 C++ Made by ZF9 [GUI]");
		}

		if (tabs == 1)
		{
			if (ImGui::Button("Download Lux.lua"))
			{
				DownloadLux();
				MessageBox(0, "Downloaded Lux!", "", MB_OK);
			}
			if (ImGui::Button("Download Eulen.lua"))
			{
				DownloadEulen();
				MessageBox(0, "Downloaded Eulen!", "", MB_OK);
			}
			if (ImGui::Button("Download Fallout.lua"))
			{
				DownloadFallout();
				MessageBox(0, "Downloaded Fallout!", "", MB_OK);
			}
			if (ImGui::Button("Download ATG.lua"))
			{
				DownloadATG();
				MessageBox(0, "Downloaded ATG!", "", MB_OK);
			}
			if (ImGui::Button("Download Maestro-Avux.lua"))
			{
				DownloadMaestro();
				MessageBox(0, "Downloaded Maestro-Avux!", "", MB_OK);
			}
			if (ImGui::Button("Download HugeV.lua"))
			{
				DownloadHugeV();
				MessageBox(0, "Downloaded HugeV!", "", MB_OK);
			}
			if (ImGui::Button("Download Lynx.lua"))
			{
				DownloadLynx();
				MessageBox(0, "Downloaded Lynx!", "", MB_OK);
			}
			if (ImGui::Button("Download HamxLynx.lua"))
			{
				DownloadHamxLynx();
				MessageBox(0, "Downloaded HamxLynx!", "", MB_OK);
			}
			if (ImGui::Button("Download FiveSenseNertigel.lua"))
			{
				DownloadFiveSenseNertigel();
				MessageBox(0, "Downloaded FiveSenseNertigel!", "", MB_OK);
			}
			if (ImGui::Button("Download All Page 1"))
			{
				DownloadPage1();
				MessageBox(0, "Downloaded All menus on page 1!", "", MB_OK);
			}
		}
		/// <summary>
		/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////
		/// </summary>
		if (tabs == 2) {
			if (ImGui::Button("Download BypassChocoHax4.lua"))
			{
				DownloadBypassChocoHax4();
				MessageBox(0, "Downloaded BypassChocoHax4!", "", MB_OK);
			}
			if (ImGui::Button("Download Riot.lua"))
			{
				DownloadRiot();
				MessageBox(0, "Downloaded Riot!", "", MB_OK);
			}
			if (ImGui::Button("Download Lumia.lua"))
			{
				DownloadLumia();
				MessageBox(0, "Downloaded Lumia!", "", MB_OK);
			}
			if (ImGui::Button("Download SugarMenu.lua"))
			{
				DownloadSugarMenu();
				MessageBox(0, "Downloaded SugarMenu!", "", MB_OK);
			}
			if (ImGui::Button("Download DesudoMenu.lua"))
			{
				DownloadDesudoMenu();
				MessageBox(0, "Downloaded DesudoMenu!", "", MB_OK);
			}
			if (ImGui::Button("Download InfinityMenu.lua"))
			{
				DownloadInfinityMenu();
				MessageBox(0, "Downloaded InfinityMenu!", "", MB_OK);
			}
			if (ImGui::Button("Download BloodX.lua"))
			{
				DownloadBloodX();
				MessageBox(0, "Downloaded BloodX!", "", MB_OK);
			}
			if (ImGui::Button("Download Absolute.lua"))
			{
				DownloadAbsolute();
				MessageBox(0, "Downloaded Absolute!", "", MB_OK);
			}
			if (ImGui::Button("Download Dopaminie.lua"))
			{
				DownloadDopaminie();
				MessageBox(0, "Downloaded Dopaminie!", "", MB_OK);
			}
			if (ImGui::Button("Download All Page 2"))
			{
				DownloadPage2();
				MessageBox(0, "Downloaded All menus on page 2!", "", MB_OK);
			}
		}

		if (tabs == 3) {
			ImGui::Text("Download config coming v3.1");
			/*
			char* user = getenv("username");
			std::string gg = user;
			std::string dwnld_path1 = "C:\\ProgramData\\" + gg;
			std::string dwnld_path2 = "C:\\Users\\" + gg + "\\Downloads\\";

			if (ImGui::Button("Set Download folder to :##1"))
			{
				MessageBox(0, "Content", "Title", MB_OK);
			}
			ImGui::SameLine();
			ImGui::Text("%s", dwnld_path1.c_str());

			if (ImGui::Button("Set Download folder to :##2"))
			{
				MessageBox(0, "Content", "Title", MB_OK);
			}
			ImGui::SameLine();
			ImGui::Text("%s", dwnld_path2.c_str());
			*/
		}

		ImGui::End();
		ImGui::Render();
    }
}

void ui::init(LPDIRECT3DDEVICE9 device) {
    dev = device;
	
    ImGui::StyleColorsDark();

	if (window_pos.x == 0) {
		RECT screen_rect{};
		GetWindowRect(GetDesktopWindow(), &screen_rect);
		screen_res = ImVec2(float(screen_rect.right), float(screen_rect.bottom));
		window_pos = (screen_res - window_size) * 0.5f;
	}
}