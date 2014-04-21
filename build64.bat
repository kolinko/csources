@echo off
REM Generated by niminst
SET CC=gcc
SET LINKER=gcc
SET COMP_FLAGS=-w
SET LINK_FLAGS=
SET BIN_DIR=bin

if EXIST ..\koch.nim SET BIN_DIR=..\bin

if NOT EXIST %BIN_DIR%\nul mkdir %BIN_DIR%

REM call the compiler:

ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimrod.c -o c_code\1_2\nimrod.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimrod.c -o c_code\1_2\nimrod.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_system.c -o c_code\1_2\stdlib_system.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\testability.c -o c_code\1_2\testability.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\testability.c -o c_code\1_2\testability.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\commands.c -o c_code\1_2\commands.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\commands.c -o c_code\1_2\commands.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_os.c -o c_code\1_2\stdlib_os.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strutils.c -o c_code\1_2\stdlib_strutils.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseutils.c -o c_code\1_2\stdlib_parseutils.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_times.c -o c_code\1_2\stdlib_times.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_winlean.c -o c_code\1_2\stdlib_winlean.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\msgs.c -o c_code\1_2\msgs.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\msgs.c -o c_code\1_2\msgs.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\options.c -o c_code\1_2\options.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\options.c -o c_code\1_2\options.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lists.c -o c_code\1_2\lists.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lists.c -o c_code\1_2\lists.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_strtabs.c -o c_code\1_2\stdlib_strtabs.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_hashes.c -o c_code\1_2\stdlib_hashes.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_osproc.c -o c_code\1_2\stdlib_osproc.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_streams.c -o c_code\1_2\stdlib_streams.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sets.c -o c_code\1_2\stdlib_sets.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_math.c -o c_code\1_2\stdlib_math.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_tables.c -o c_code\1_2\stdlib_tables.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ropes.c -o c_code\1_2\ropes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ropes.c -o c_code\1_2\ropes.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\platform.c -o c_code\1_2\platform.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\platform.c -o c_code\1_2\platform.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\crc.c -o c_code\1_2\crc.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\crc.c -o c_code\1_2\crc.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sockets.c -o c_code\1_2\stdlib_sockets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sockets.c -o c_code\1_2\stdlib_sockets.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unsigned.c -o c_code\1_2\stdlib_unsigned.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unsigned.c -o c_code\1_2\stdlib_unsigned.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nversion.c -o c_code\1_2\nversion.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nversion.c -o c_code\1_2\nversion.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\condsyms.c -o c_code\1_2\condsyms.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\condsyms.c -o c_code\1_2\condsyms.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\idents.c -o c_code\1_2\idents.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\idents.c -o c_code\1_2\idents.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\extccomp.c -o c_code\1_2\extccomp.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\extccomp.c -o c_code\1_2\extccomp.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\wordrecg.c -o c_code\1_2\wordrecg.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\wordrecg.c -o c_code\1_2\wordrecg.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\babelcmd.c -o c_code\1_2\babelcmd.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\babelcmd.c -o c_code\1_2\babelcmd.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lexer.c -o c_code\1_2\lexer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lexer.c -o c_code\1_2\lexer.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimlexbase.c -o c_code\1_2\nimlexbase.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimlexbase.c -o c_code\1_2\nimlexbase.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\llstream.c -o c_code\1_2\llstream.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\llstream.c -o c_code\1_2\llstream.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimconf.c -o c_code\1_2\nimconf.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimconf.c -o c_code\1_2\nimconf.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\main.c -o c_code\1_2\main.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\main.c -o c_code\1_2\main.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ast.c -o c_code\1_2\ast.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ast.c -o c_code\1_2\ast.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_intsets.c -o c_code\1_2\stdlib_intsets.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\idgen.c -o c_code\1_2\idgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\idgen.c -o c_code\1_2\idgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\astalgo.c -o c_code\1_2\astalgo.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\astalgo.c -o c_code\1_2\astalgo.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodutils.c -o c_code\1_2\rodutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodutils.c -o c_code\1_2\rodutils.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\syntaxes.c -o c_code\1_2\syntaxes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\syntaxes.c -o c_code\1_2\syntaxes.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\parser.c -o c_code\1_2\parser.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\parser.c -o c_code\1_2\parser.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pbraces.c -o c_code\1_2\pbraces.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pbraces.c -o c_code\1_2\pbraces.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\filters.c -o c_code\1_2\filters.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\filters.c -o c_code\1_2\filters.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\renderer.c -o c_code\1_2\renderer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\renderer.c -o c_code\1_2\renderer.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\filter_tmpl.c -o c_code\1_2\filter_tmpl.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\filter_tmpl.c -o c_code\1_2\filter_tmpl.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodread.c -o c_code\1_2\rodread.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodread.c -o c_code\1_2\rodread.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\types.c -o c_code\1_2\types.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\types.c -o c_code\1_2\types.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\trees.c -o c_code\1_2\trees.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\trees.c -o c_code\1_2\trees.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_memfiles.c -o c_code\1_2\stdlib_memfiles.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodwrite.c -o c_code\1_2\rodwrite.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\rodwrite.c -o c_code\1_2\rodwrite.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\passes.c -o c_code\1_2\passes.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\passes.c -o c_code\1_2\passes.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\magicsys.c -o c_code\1_2\magicsys.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\magicsys.c -o c_code\1_2\magicsys.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsets.c -o c_code\1_2\nimsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\nimsets.c -o c_code\1_2\nimsets.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\bitsets.c -o c_code\1_2\bitsets.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\bitsets.c -o c_code\1_2\bitsets.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\importer.c -o c_code\1_2\importer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\importer.c -o c_code\1_2\importer.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lookups.c -o c_code\1_2\lookups.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lookups.c -o c_code\1_2\lookups.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semdata.c -o c_code\1_2\semdata.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semdata.c -o c_code\1_2\semdata.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\treetab.c -o c_code\1_2\treetab.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\treetab.c -o c_code\1_2\treetab.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmdef.c -o c_code\1_2\vmdef.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmdef.c -o c_code\1_2\vmdef.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sem.c -o c_code\1_2\sem.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sem.c -o c_code\1_2\sem.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semfold.c -o c_code\1_2\semfold.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semfold.c -o c_code\1_2\semfold.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\saturate.c -o c_code\1_2\saturate.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\saturate.c -o c_code\1_2\saturate.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\procfind.c -o c_code\1_2\procfind.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\procfind.c -o c_code\1_2\procfind.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pragmas.c -o c_code\1_2\pragmas.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pragmas.c -o c_code\1_2\pragmas.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semtypinst.c -o c_code\1_2\semtypinst.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semtypinst.c -o c_code\1_2\semtypinst.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sigmatch.c -o c_code\1_2\sigmatch.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sigmatch.c -o c_code\1_2\sigmatch.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\parampatterns.c -o c_code\1_2\parampatterns.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\parampatterns.c -o c_code\1_2\parampatterns.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docgen.c -o c_code\1_2\docgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docgen.c -o c_code\1_2\docgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstast.c -o c_code\1_2\docutils_rstast.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_json.c -o c_code\1_2\stdlib_json.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_lexbase.c -o c_code\1_2\stdlib_lexbase.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_unicode.c -o c_code\1_2\stdlib_unicode.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rst.c -o c_code\1_2\docutils_rst.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_rstgen.c -o c_code\1_2\docutils_rstgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docutils_highlite.c -o c_code\1_2\docutils_highlite.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sempass2.c -o c_code\1_2\sempass2.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\sempass2.c -o c_code\1_2\sempass2.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\guards.c -o c_code\1_2\guards.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\guards.c -o c_code\1_2\guards.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_xmltree.c -o c_code\1_2\stdlib_xmltree.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_macros.c -o c_code\1_2\stdlib_macros.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cgi.c -o c_code\1_2\stdlib_cgi.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_cookies.c -o c_code\1_2\stdlib_cookies.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\typesrenderer.c -o c_code\1_2\typesrenderer.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\typesrenderer.c -o c_code\1_2\typesrenderer.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_algorithm.c -o c_code\1_2\stdlib_algorithm.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_sequtils.c -o c_code\1_2\stdlib_sequtils.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pretty.c -o c_code\1_2\pretty.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\pretty.c -o c_code\1_2\pretty.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\transf.c -o c_code\1_2\transf.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\transf.c -o c_code\1_2\transf.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgmeth.c -o c_code\1_2\cgmeth.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgmeth.c -o c_code\1_2\cgmeth.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lambdalifting.c -o c_code\1_2\lambdalifting.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lambdalifting.c -o c_code\1_2\lambdalifting.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lowerings.c -o c_code\1_2\lowerings.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\lowerings.c -o c_code\1_2\lowerings.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vm.c -o c_code\1_2\vm.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vm.c -o c_code\1_2\vm.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmgen.c -o c_code\1_2\vmgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmgen.c -o c_code\1_2\vmgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmdeps.c -o c_code\1_2\vmdeps.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\vmdeps.c -o c_code\1_2\vmdeps.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\evaltempl.c -o c_code\1_2\evaltempl.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\evaltempl.c -o c_code\1_2\evaltempl.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\aliases.c -o c_code\1_2\aliases.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\aliases.c -o c_code\1_2\aliases.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\patterns.c -o c_code\1_2\patterns.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\patterns.c -o c_code\1_2\patterns.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semmacrosanity.c -o c_code\1_2\semmacrosanity.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\semmacrosanity.c -o c_code\1_2\semmacrosanity.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgen.c -o c_code\1_2\cgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgen.c -o c_code\1_2\cgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ccgutils.c -o c_code\1_2\ccgutils.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ccgutils.c -o c_code\1_2\ccgutils.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgendata.c -o c_code\1_2\cgendata.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\cgendata.c -o c_code\1_2\cgendata.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ccgmerge.c -o c_code\1_2\ccgmerge.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\ccgmerge.c -o c_code\1_2\ccgmerge.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\jsgen.c -o c_code\1_2\jsgen.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\jsgen.c -o c_code\1_2\jsgen.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\passaux.c -o c_code\1_2\passaux.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\passaux.c -o c_code\1_2\passaux.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\depends.c -o c_code\1_2\depends.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\depends.c -o c_code\1_2\depends.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docgen2.c -o c_code\1_2\docgen2.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\docgen2.c -o c_code\1_2\docgen2.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\service.c -o c_code\1_2\service.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\service.c -o c_code\1_2\service.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\stdlib_parseopt.c -o c_code\1_2\stdlib_parseopt.o
ECHO %CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\modules.c -o c_code\1_2\modules.o
%CC% %COMP_FLAGS% -Ic_code -c c_code\1_2\modules.c -o c_code\1_2\modules.o

ECHO %LINKER% -o %BIN_DIR%\nimrod.exe  c_code\1_2\nimrod.o c_code\1_2\stdlib_system.o c_code\1_2\testability.o c_code\1_2\commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\msgs.o c_code\1_2\options.o c_code\1_2\lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_tables.o c_code\1_2\ropes.o c_code\1_2\platform.o c_code\1_2\crc.o c_code\1_2\stdlib_sockets.o c_code\1_2\stdlib_unsigned.o c_code\1_2\nversion.o c_code\1_2\condsyms.o c_code\1_2\idents.o c_code\1_2\extccomp.o c_code\1_2\wordrecg.o c_code\1_2\babelcmd.o c_code\1_2\lexer.o c_code\1_2\nimlexbase.o c_code\1_2\llstream.o c_code\1_2\nimconf.o c_code\1_2\main.o c_code\1_2\ast.o c_code\1_2\stdlib_intsets.o c_code\1_2\idgen.o c_code\1_2\astalgo.o c_code\1_2\rodutils.o c_code\1_2\syntaxes.o c_code\1_2\parser.o c_code\1_2\pbraces.o c_code\1_2\filters.o c_code\1_2\renderer.o c_code\1_2\filter_tmpl.o c_code\1_2\rodread.o c_code\1_2\types.o c_code\1_2\trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\rodwrite.o c_code\1_2\passes.o c_code\1_2\magicsys.o c_code\1_2\nimsets.o c_code\1_2\bitsets.o c_code\1_2\importer.o c_code\1_2\lookups.o c_code\1_2\semdata.o c_code\1_2\treetab.o c_code\1_2\vmdef.o c_code\1_2\sem.o c_code\1_2\semfold.o c_code\1_2\saturate.o c_code\1_2\procfind.o c_code\1_2\pragmas.o c_code\1_2\semtypinst.o c_code\1_2\sigmatch.o c_code\1_2\parampatterns.o c_code\1_2\docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_lexbase.o c_code\1_2\stdlib_unicode.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\sempass2.o c_code\1_2\guards.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_macros.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\typesrenderer.o c_code\1_2\stdlib_algorithm.o c_code\1_2\stdlib_sequtils.o c_code\1_2\pretty.o c_code\1_2\transf.o c_code\1_2\cgmeth.o c_code\1_2\lambdalifting.o c_code\1_2\lowerings.o c_code\1_2\vm.o c_code\1_2\vmgen.o c_code\1_2\vmdeps.o c_code\1_2\evaltempl.o c_code\1_2\aliases.o c_code\1_2\patterns.o c_code\1_2\semmacrosanity.o c_code\1_2\cgen.o c_code\1_2\ccgutils.o c_code\1_2\cgendata.o c_code\1_2\ccgmerge.o c_code\1_2\jsgen.o c_code\1_2\passaux.o c_code\1_2\depends.o c_code\1_2\docgen2.o c_code\1_2\service.o c_code\1_2\stdlib_parseopt.o c_code\1_2\modules.o %LINK_FLAGS%
%LINKER% -o %BIN_DIR%\nimrod.exe  c_code\1_2\nimrod.o c_code\1_2\stdlib_system.o c_code\1_2\testability.o c_code\1_2\commands.o c_code\1_2\stdlib_os.o c_code\1_2\stdlib_strutils.o c_code\1_2\stdlib_parseutils.o c_code\1_2\stdlib_times.o c_code\1_2\stdlib_winlean.o c_code\1_2\msgs.o c_code\1_2\options.o c_code\1_2\lists.o c_code\1_2\stdlib_strtabs.o c_code\1_2\stdlib_hashes.o c_code\1_2\stdlib_osproc.o c_code\1_2\stdlib_streams.o c_code\1_2\stdlib_sets.o c_code\1_2\stdlib_math.o c_code\1_2\stdlib_tables.o c_code\1_2\ropes.o c_code\1_2\platform.o c_code\1_2\crc.o c_code\1_2\stdlib_sockets.o c_code\1_2\stdlib_unsigned.o c_code\1_2\nversion.o c_code\1_2\condsyms.o c_code\1_2\idents.o c_code\1_2\extccomp.o c_code\1_2\wordrecg.o c_code\1_2\babelcmd.o c_code\1_2\lexer.o c_code\1_2\nimlexbase.o c_code\1_2\llstream.o c_code\1_2\nimconf.o c_code\1_2\main.o c_code\1_2\ast.o c_code\1_2\stdlib_intsets.o c_code\1_2\idgen.o c_code\1_2\astalgo.o c_code\1_2\rodutils.o c_code\1_2\syntaxes.o c_code\1_2\parser.o c_code\1_2\pbraces.o c_code\1_2\filters.o c_code\1_2\renderer.o c_code\1_2\filter_tmpl.o c_code\1_2\rodread.o c_code\1_2\types.o c_code\1_2\trees.o c_code\1_2\stdlib_memfiles.o c_code\1_2\rodwrite.o c_code\1_2\passes.o c_code\1_2\magicsys.o c_code\1_2\nimsets.o c_code\1_2\bitsets.o c_code\1_2\importer.o c_code\1_2\lookups.o c_code\1_2\semdata.o c_code\1_2\treetab.o c_code\1_2\vmdef.o c_code\1_2\sem.o c_code\1_2\semfold.o c_code\1_2\saturate.o c_code\1_2\procfind.o c_code\1_2\pragmas.o c_code\1_2\semtypinst.o c_code\1_2\sigmatch.o c_code\1_2\parampatterns.o c_code\1_2\docgen.o c_code\1_2\docutils_rstast.o c_code\1_2\stdlib_json.o c_code\1_2\stdlib_lexbase.o c_code\1_2\stdlib_unicode.o c_code\1_2\docutils_rst.o c_code\1_2\docutils_rstgen.o c_code\1_2\docutils_highlite.o c_code\1_2\sempass2.o c_code\1_2\guards.o c_code\1_2\stdlib_xmltree.o c_code\1_2\stdlib_macros.o c_code\1_2\stdlib_cgi.o c_code\1_2\stdlib_cookies.o c_code\1_2\typesrenderer.o c_code\1_2\stdlib_algorithm.o c_code\1_2\stdlib_sequtils.o c_code\1_2\pretty.o c_code\1_2\transf.o c_code\1_2\cgmeth.o c_code\1_2\lambdalifting.o c_code\1_2\lowerings.o c_code\1_2\vm.o c_code\1_2\vmgen.o c_code\1_2\vmdeps.o c_code\1_2\evaltempl.o c_code\1_2\aliases.o c_code\1_2\patterns.o c_code\1_2\semmacrosanity.o c_code\1_2\cgen.o c_code\1_2\ccgutils.o c_code\1_2\cgendata.o c_code\1_2\ccgmerge.o c_code\1_2\jsgen.o c_code\1_2\passaux.o c_code\1_2\depends.o c_code\1_2\docgen2.o c_code\1_2\service.o c_code\1_2\stdlib_parseopt.o c_code\1_2\modules.o %LINK_FLAGS%


ECHO SUCCESS

