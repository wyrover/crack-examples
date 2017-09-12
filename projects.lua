BOOK_CODE_PATH = "H:/rover/rover-self-work/cpp/book-code"
THIRD_PARTY = "H:/rover/rover-self-work/cpp/book-code/3rdparty"
WORK_PATH = os.getcwd()
includeexternal (BOOK_CODE_PATH .. "/premake-vs-include.lua")




workspace(path.getname(os.realpath(".")))
    language "C++"
    location "build/%{_ACTION}/%{wks.name}"    
    if _ACTION == "vs2015" then
        toolset "v140_xp"
    elseif _ACTION == "vs2013" then
        toolset "v120_xp"
    end

    --include (BOOK_CODE_PATH .. "/common.lua")   
    

   
        

    group "crack"       


        matches = os.matchdirs("src/crack-*")
        for i = #matches, 1, -1 do
            --p.w(path.getname(matches[i]))  
            create_console_project(path.getname(matches[i]), "src")
        end


        create_wtl_project("crack-24", "src")