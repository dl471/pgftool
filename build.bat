cl /O2 /Fe:dump_pgf.exe dump_pgf.c libpgf.c save_pgf.c
cl /O2 /Fe:mix_pgf.exe save_pgf.c libpgf.c mix_pgf.c

cl /O2 /LD /Fe:libpgfdll.dll libpgfdll.c /link libpgf.obj save_pgf.obj