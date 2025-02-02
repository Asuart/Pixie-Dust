project "PixieUI"
   kind "StaticLib"
   language "C++"
   cppdialect "C++20"
   targetdir "build/%{cfg.buildcfg}"
   staticruntime "off"

   files { "include/PixieUI/**.h", "src/**.cpp", "dependencies/GLAD/src/**.c" }

   includedirs
   {
      "include/PixieUI",
      "dependencies/GLAD/include/",
   }

   targetdir ("build/" .. OutputDir .. "/%{prj.name}")
   objdir ("build/Intermediates/" .. OutputDir .. "/%{prj.name}")

   filter "system:windows"
       systemversion "latest"
       defines { }

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