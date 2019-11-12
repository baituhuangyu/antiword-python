cmake_minimum_required(VERSION 3.1)
project(antiword_0_37 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE  debug)
#set(DB  DEBUG)

include_directories(.)

# python lib for c header
include_directories(/Users/hy/miniconda2/envs/py3/include/python3.6m/)
#include_directories(NW-only)
#include_directories(Unix-only)
#configure_file(config.h.in)
add_definitions(-D NDEBUG)

add_executable(antiword_0_37
#        DOS-only/dos.c
#        DOS-only/getopt.c
#        NW-only/nw_os.h
#        Unix-only/fontinfo.h
#        Win32-only/fonts_w.c
#        Win32-only/misc.c
#        main_u_wapper.c
        antiword.h
        asc85enc.c
        blocklist.c
        chartrans.c
        datalist.c
        debug.h
        depot.c
        dib2eps.c
#        dib2sprt.c
        doclist.c
#        draw.c
#        draw.h
#        drawfile.c
#        drawfile.h
        fail.c
        fail.h
        finddata.c
        findtext.c
        fmt_text.c
        fontinfo.h
        fontlist.c
        fonts.c
#        fonts_r.c
        fonts_u.c
        hdrftrlist.c
#        icons.c
        imgexam.c
        imgtrans.c
        jpeg2eps.c
#        jpeg2sprt.c
        listlist.c
#        main_ros.c
        main_u.c
        misc.c
        notes.c
        options.c
        out2window.c
        output.c
        pdf.c
        pictlist.c
        png2eps.c
#        png2sprt.c
        postscript.c
        prop0.c
        prop2.c
        prop6.c
        prop8.c
        properties.c
        propmod.c
#        riscos.c
        rowlist.c
#        saveas.c
        sectlist.c
#        startup.c
        stylelist.c
        stylesheet.c
        summary.c
        tabstop.c
        text.c
        unix.c
        utf8.c
#        version.h
        word2text.c
#        wordconst.h
        worddos.c
        wordlib.c
        wordmac.c
        wordole.c
        wordtypes.h
        wordwin.c
        xmalloc.c
        xml.c
        )
