-- premake5.lua
workspace "PixieUI-Examples"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "SimpleUI"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

include "../Build-PixieUI.lua"

project "SimpleUI"
   location "simple-ui"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++20"
   targetdir "build/%{cfg.buildcfg}"
   staticruntime "off"

   files { "**.cpp" }

   includedirs
   {
	  "../include/",
      "../dependencies/GLAD/include/",
      "../dependencies/GLFW/include/"
   }

   links
   {
      "PixieUI",
      "glfw3.lib",
   }

   targetdir ("../build/" .. OutputDir .. "/%{prj.name}")
   objdir ("../build/Intermediates/" .. OutputDir .. "/%{prj.name}")

   libdirs { "../dependencies/GLFW/lib-vc2022-64/" }

   filter "system:windows"
       systemversion "latest"
       defines { "WINDOWS" }

   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"