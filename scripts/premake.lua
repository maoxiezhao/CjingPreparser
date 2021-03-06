require('vstudio')

-----------------------------------------------------------------------------------
-- DEFINITIONS
-----------------------------------------------------------------------------------
SOLUTION_NAME       = "CjingPreParser"
PARSER_NAME         = "PreParser"
ANTLR_NAME          = "Antlr4cpp"

DEBUG_FORMAT        = "c7"
TARGET_OBJ_DIR      = "/Temp"
TARGET_DIR_DEBUG    = "../bin/x64/Debug"
TARGET_DIR_RELEASE  = "../bin/x64/Release"
IGNORE_FILES		= {}

PARSER_DIR          = "../preparser"
ANTLR_DIR           = "../antlr4_runtime"

PARSER_DIR_SRC      = "../preparser/src"
ANTLR_DIR_SRC       = "../antlr4_runtime/src"
ANTLR_GENENRATED_DIR_SRC = "../generated"

-----------------------------------------------------------------------------------
-- Custom
-----------------------------------------------------------------------------------
premake.api.register {
    name = "conformanceMode",
    scope = "config",
    kind = "boolean",
    default = true
}

local function HandleConformanceMode(cfg)
    if cfg.conformanceMode ~= nil and cfg.conformanceMode == true then
        premake.w('<ConformanceMode>true</ConformanceMode>')
    end
end
  
premake.override(premake.vstudio.vc2010.elements, "clCompile", function(base, cfg)
    local calls = base(cfg)
    table.insert(calls, HandleConformanceMode)
    return calls
end)

-----------------------------------------------------------------------------------
-- SOLUTION
-----------------------------------------------------------------------------------
solution (SOLUTION_NAME)
    location ".."
    systemversion "latest"
    cppdialect "C++17"
    language "C++"
    platforms "x64"
    configurations {"Debug","Release"}

    filter { "platforms:x64" }
        system "Windows"
        architecture "x64"

    -- Debug config
    filter {"configurations:Debug"}
        flags { "MultiProcessorCompile"}
        symbols "On"

    -- Release config
    filter {"configurations:Release"}
        flags { "MultiProcessorCompile"}
        optimize "On"

    -- Reset the filter for other settings
	filter { }

-----------------------------------------------------------------------------------
-- Antlr
-----------------------------------------------------------------------------------
project (ANTLR_NAME)
    location(ANTLR_DIR)
    objdir(ANTLR_DIR .. TARGET_OBJ_DIR)
    targetname(ANTLR_NAME)
    defines { "ANTLR4CPP_EXPORTS" }
    disablewarnings { 4251, 4996 }
    kind "SharedLib"

    -- Files
	files 
	{ 
        ANTLR_DIR_SRC .. "/**.c",
		ANTLR_DIR_SRC .. "/**.cpp",
        ANTLR_DIR_SRC .. "/**.hpp",
        ANTLR_DIR_SRC .. "/**.h",
		ANTLR_DIR_SRC .. "/**.inl"
    }

    -- Includes
    includedirs { ANTLR_DIR_SRC }

    -- Debug config
    filter {"configurations:Debug"}
        targetdir (TARGET_DIR_DEBUG)
        debugdir (TARGET_DIR_DEBUG)


    -- Release config
    filter {"configurations:Release"}
        targetdir (TARGET_DIR_RELEASE)
        debugdir (TARGET_DIR_RELEASE)

-----------------------------------------------------------------------------------
-- Parser
-----------------------------------------------------------------------------------
project (PARSER_NAME)
    location(PARSER_DIR)
    objdir(PARSER_DIR .. TARGET_OBJ_DIR)
    targetname(PARSER_NAME)
    dependson { ANTLR_NAME }
    links { ANTLR_NAME }
    disablewarnings { 4251, 4996 }
    kind "ConsoleApp"
    staticruntime "Off"
    
    -- Files
	files 
	{ 
        PARSER_DIR_SRC .. "/**.c",
		PARSER_DIR_SRC .. "/**.cpp",
        PARSER_DIR_SRC .. "/**.hpp",
        PARSER_DIR_SRC .. "/**.h",
        PARSER_DIR_SRC .. "/**.inl",
        ANTLR_GENENRATED_DIR_SRC .. "/**.cpp",
        ANTLR_GENENRATED_DIR_SRC .. "/**.h",
    }
    
    -- Includes
    includedirs { PARSER_DIR_SRC }
    includedirs { ANTLR_DIR_SRC }
    includedirs { ANTLR_GENENRATED_DIR_SRC }

    -- 3rd party
    includedirs { "../3rdparty/json" }

    -- Debug config
    filter {"configurations:Debug"}
        targetdir (TARGET_DIR_DEBUG)
        debugdir (TARGET_DIR_DEBUG)
        defines { "DEBUG_ENABLE" }


    -- Release config
    filter {"configurations:Release"}
        targetdir (TARGET_DIR_RELEASE)
        debugdir (TARGET_DIR_RELEASE)
