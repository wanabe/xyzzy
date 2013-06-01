#include "gen-stdafx.h"
#include "ucs2tab.h"

/* http://www.opengroup.or.jp/jvc/cde/ibmext-table.html */
static const struct {int sjis, eucjp;} sjis2eucjp[] =
{
  {0xfa40, 0x8ff3f3},
  {0xfa41, 0x8ff3f4},
  {0xfa42, 0x8ff3f5},
  {0xfa43, 0x8ff3f6},
  {0xfa44, 0x8ff3f7},
  {0xfa45, 0x8ff3f8},
  {0xfa46, 0x8ff3f9},
  {0xfa47, 0x8ff3fa},
  {0xfa48, 0x8ff3fb},
  {0xfa49, 0x8ff3fc},
  {0xfa4a, 0x8ff3fd},
  {0xfa4b, 0x8ff3fe},
  {0xfa4c, 0x8ff4a1},
  {0xfa4d, 0x8ff4a2},
  {0xfa4e, 0x8ff4a3},
  {0xfa4f, 0x8ff4a4},
  {0xfa50, 0x8ff4a5},
  {0xfa51, 0x8ff4a6},
  {0xfa52, 0x8ff4a7},
  {0xfa53, 0x8ff4a8},
  {0xfa54, 0xa2cc},
  {0xfa55, 0x8fa2c3},
  {0xfa56, 0x8ff4a9},
  {0xfa57, 0x8ff4aa},
  {0xfa58, 0x8ff4ab},
  {0xfa59, 0x8ff4ac},
  {0xfa5a, 0x8ff4ad},
  {0xfa5b, 0xa2e8},
  {0xfa5c, 0x8fd4e3},
  {0xfa5d, 0x8fdcdf},
  {0xfa5e, 0x8fe4e9},
  {0xfa5f, 0x8fe3f8},
  {0xfa60, 0x8fd9a1},
  {0xfa61, 0x8fb1bb},
  {0xfa62, 0x8ff4ae},
  {0xfa63, 0x8fc2ad},
  {0xfa64, 0x8fc3fc},
  {0xfa65, 0x8fe4d0},
  {0xfa66, 0x8fc2bf},
  {0xfa67, 0x8fbcf4},
  {0xfa68, 0x8fb0a9},
  {0xfa69, 0x8fb0c8},
  {0xfa6a, 0x8ff4af},
  {0xfa6b, 0x8fb0d2},
  {0xfa6c, 0x8fb0d4},
  {0xfa6d, 0x8fb0e3},
  {0xfa6e, 0x8fb0ee},
  {0xfa6f, 0x8fb1a7},
  {0xfa70, 0x8fb1a3},
  {0xfa71, 0x8fb1ac},
  {0xfa72, 0x8fb1a9},
  {0xfa73, 0x8fb1be},
  {0xfa74, 0x8fb1df},
  {0xfa75, 0x8fb1d8},
  {0xfa76, 0x8fb1c8},
  {0xfa77, 0x8fb1d7},
  {0xfa78, 0x8fb1e3},
  {0xfa79, 0x8fb1f4},
  {0xfa7a, 0x8fb1e1},
  {0xfa7b, 0x8fb2a3},
  {0xfa7c, 0x8ff4b0},
  {0xfa7d, 0x8fb2bb},
  {0xfa7e, 0x8fb2e6},
  {0xfa80, 0x8fb2ed},
  {0xfa81, 0x8fb2f5},
  {0xfa82, 0x8fb2fc},
  {0xfa83, 0x8ff4b1},
  {0xfa84, 0x8fb3b5},
  {0xfa85, 0x8fb3d8},
  {0xfa86, 0x8fb3db},
  {0xfa87, 0x8fb3e5},
  {0xfa88, 0x8fb3ee},
  {0xfa89, 0x8fb3fb},
  {0xfa8a, 0x8ff4b2},
  {0xfa8b, 0x8ff4b3},
  {0xfa8c, 0x8fb4c0},
  {0xfa8d, 0x8fb4c7},
  {0xfa8e, 0x8fb4d0},
  {0xfa8f, 0x8fb4de},
  {0xfa90, 0x8ff4b4},
  {0xfa91, 0x8fb5aa},
  {0xfa92, 0x8ff4b5},
  {0xfa93, 0x8fb5af},
  {0xfa94, 0x8fb5c4},
  {0xfa95, 0x8fb5e8},
  {0xfa96, 0x8ff4b6},
  {0xfa97, 0x8fb7c2},
  {0xfa98, 0x8fb7e4},
  {0xfa99, 0x8fb7e8},
  {0xfa9a, 0x8fb7e7},
  {0xfa9b, 0x8ff4b7},
  {0xfa9c, 0x8ff4b8},
  {0xfa9d, 0x8ff4b9},
  {0xfa9e, 0x8fb8ce},
  {0xfa9f, 0x8fb8e1},
  {0xfaa0, 0x8fb8f5},
  {0xfaa1, 0x8fb8f7},
  {0xfaa2, 0x8fb8f8},
  {0xfaa3, 0x8fb8fc},
  {0xfaa4, 0x8fb9af},
  {0xfaa5, 0x8fb9b7},
  {0xfaa6, 0x8fbabe},
  {0xfaa7, 0x8fbadb},
  {0xfaa8, 0x8fcdaa},
  {0xfaa9, 0x8fbae1},
  {0xfaaa, 0x8ff4ba},
  {0xfaab, 0x8fbaeb},
  {0xfaac, 0x8fbbb3},
  {0xfaad, 0x8fbbb8},
  {0xfaae, 0x8ff4bb},
  {0xfaaf, 0x8fbbca},
  {0xfab0, 0x8ff4bc},
  {0xfab1, 0x8ff4bd},
  {0xfab2, 0x8fbbd0},
  {0xfab3, 0x8fbbde},
  {0xfab4, 0x8fbbf4},
  {0xfab5, 0x8fbbf5},
  {0xfab6, 0x8fbbf9},
  {0xfab7, 0x8fbce4},
  {0xfab8, 0x8fbced},
  {0xfab9, 0x8fbcfe},
  {0xfaba, 0x8ff4be},
  {0xfabb, 0x8fbdc2},
  {0xfabc, 0x8fbde7},
  {0xfabd, 0x8ff4bf},
  {0xfabe, 0x8fbdf0},
  {0xfabf, 0x8fbeb0},
  {0xfac0, 0x8fbeac},
  {0xfac1, 0x8ff4c0},
  {0xfac2, 0x8fbeb3},
  {0xfac3, 0x8fbebd},
  {0xfac4, 0x8fbecd},
  {0xfac5, 0x8fbec9},
  {0xfac6, 0x8fbee4},
  {0xfac7, 0x8fbfa8},
  {0xfac8, 0x8fbfc9},
  {0xfac9, 0x8fc0c4},
  {0xfaca, 0x8fc0e4},
  {0xfacb, 0x8fc0f4},
  {0xfacc, 0x8fc1a6},
  {0xfacd, 0x8ff4c1},
  {0xface, 0x8fc1f5},
  {0xfacf, 0x8fc1fc},
  {0xfad0, 0x8ff4c2},
  {0xfad1, 0x8fc1f8},
  {0xfad2, 0x8fc2ab},
  {0xfad3, 0x8fc2a1},
  {0xfad4, 0x8fc2a5},
  {0xfad5, 0x8ff4c3},
  {0xfad6, 0x8fc2b8},
  {0xfad7, 0x8fc2ba},
  {0xfad8, 0x8ff4c4},
  {0xfad9, 0x8fc2c4},
  {0xfada, 0x8fc2d2},
  {0xfadb, 0x8fc2d7},
  {0xfadc, 0x8fc2db},
  {0xfadd, 0x8fc2de},
  {0xfade, 0x8fc2ed},
  {0xfadf, 0x8fc2f0},
  {0xfae0, 0x8ff4c5},
  {0xfae1, 0x8fc3a1},
  {0xfae2, 0x8fc3b5},
  {0xfae3, 0x8fc3c9},
  {0xfae4, 0x8fc3b9},
  {0xfae5, 0x8ff4c6},
  {0xfae6, 0x8fc3d8},
  {0xfae7, 0x8fc3fe},
  {0xfae8, 0x8ff4c7},
  {0xfae9, 0x8fc4cc},
  {0xfaea, 0x8ff4c8},
  {0xfaeb, 0x8fc4d9},
  {0xfaec, 0x8fc4ea},
  {0xfaed, 0x8fc4fd},
  {0xfaee, 0x8ff4c9},
  {0xfaef, 0x8fc5a7},
  {0xfaf0, 0x8fc5b5},
  {0xfaf1, 0x8fc5b6},
  {0xfaf2, 0x8ff4ca},
  {0xfaf3, 0x8fc5d5},
  {0xfaf4, 0x8fc6b8},
  {0xfaf5, 0x8fc6d7},
  {0xfaf6, 0x8fc6e0},
  {0xfaf7, 0x8fc6ea},
  {0xfaf8, 0x8fc6e3},
  {0xfaf9, 0x8fc7a1},
  {0xfafa, 0x8fc7ab},
  {0xfafb, 0x8fc7c7},
  {0xfafc, 0x8fc7c3},
  {0xfb40, 0x8fc7cb},
  {0xfb41, 0x8fc7cf},
  {0xfb42, 0x8fc7d9},
  {0xfb43, 0x8ff4cb},
  {0xfb44, 0x8ff4cc},
  {0xfb45, 0x8fc7e6},
  {0xfb46, 0x8fc7ee},
  {0xfb47, 0x8fc7fc},
  {0xfb48, 0x8fc7eb},
  {0xfb49, 0x8fc7f0},
  {0xfb4a, 0x8fc8b1},
  {0xfb4b, 0x8fc8e5},
  {0xfb4c, 0x8fc8f8},
  {0xfb4d, 0x8fc9a6},
  {0xfb4e, 0x8fc9ab},
  {0xfb4f, 0x8fc9ad},
  {0xfb50, 0x8ff4cd},
  {0xfb51, 0x8fc9ca},
  {0xfb52, 0x8fc9d3},
  {0xfb53, 0x8fc9e9},
  {0xfb54, 0x8fc9e3},
  {0xfb55, 0x8fc9fc},
  {0xfb56, 0x8fc9f4},
  {0xfb57, 0x8fc9f5},
  {0xfb58, 0x8ff4ce},
  {0xfb59, 0x8fcab3},
  {0xfb5a, 0x8fcabd},
  {0xfb5b, 0x8fcaef},
  {0xfb5c, 0x8fcaf1},
  {0xfb5d, 0x8fcbae},
  {0xfb5e, 0x8ff4cf},
  {0xfb5f, 0x8fcbca},
  {0xfb60, 0x8fcbe6},
  {0xfb61, 0x8fcbea},
  {0xfb62, 0x8fcbf0},
  {0xfb63, 0x8fcbf4},
  {0xfb64, 0x8fcbee},
  {0xfb65, 0x8fcca5},
  {0xfb66, 0x8fcbf9},
  {0xfb67, 0x8fccab},
  {0xfb68, 0x8fccae},
  {0xfb69, 0x8fccad},
  {0xfb6a, 0x8fccb2},
  {0xfb6b, 0x8fccc2},
  {0xfb6c, 0x8fccd0},
  {0xfb6d, 0x8fccd9},
  {0xfb6e, 0x8ff4d0},
  {0xfb6f, 0x8fcdbb},
  {0xfb70, 0x8ff4d1},
  {0xfb71, 0x8fcebb},
  {0xfb72, 0x8ff4d2},
  {0xfb73, 0x8fceba},
  {0xfb74, 0x8fcec3},
  {0xfb75, 0x8ff4d3},
  {0xfb76, 0x8fcef2},
  {0xfb77, 0x8fb3dd},
  {0xfb78, 0x8fcfd5},
  {0xfb79, 0x8fcfe2},
  {0xfb7a, 0x8fcfe9},
  {0xfb7b, 0x8fcfed},
  {0xfb7c, 0x8ff4d4},
  {0xfb7d, 0x8ff4d5},
  {0xfb7e, 0x8ff4d6},
  {0xfb80, 0x8ff4d7},
  {0xfb81, 0x8fd0e5},
  {0xfb82, 0x8ff4d8},
  {0xfb83, 0x8fd0e9},
  {0xfb84, 0x8fd1e8},
  {0xfb85, 0x8ff4d9},
  {0xfb86, 0x8ff4da},
  {0xfb87, 0x8fd1ec},
  {0xfb88, 0x8fd2bb},
  {0xfb89, 0x8ff4db},
  {0xfb8a, 0x8fd3e1},
  {0xfb8b, 0x8fd3e8},
  {0xfb8c, 0x8fd4a7},
  {0xfb8d, 0x8ff4dc},
  {0xfb8e, 0x8ff4dd},
  {0xfb8f, 0x8fd4d4},
  {0xfb90, 0x8fd4f2},
  {0xfb91, 0x8fd5ae},
  {0xfb92, 0x8ff4de},
  {0xfb93, 0x8fd7de},
  {0xfb94, 0x8ff4df},
  {0xfb95, 0x8fd8a2},
  {0xfb96, 0x8fd8b7},
  {0xfb97, 0x8fd8c1},
  {0xfb98, 0x8fd8d1},
  {0xfb99, 0x8fd8f4},
  {0xfb9a, 0x8fd9c6},
  {0xfb9b, 0x8fd9c8},
  {0xfb9c, 0x8fd9d1},
  {0xfb9d, 0x8ff4e0},
  {0xfb9e, 0x8ff4e1},
  {0xfb9f, 0x8ff4e2},
  {0xfba0, 0x8ff4e3},
  {0xfba1, 0x8ff4e4},
  {0xfba2, 0x8fdcd3},
  {0xfba3, 0x8fddc8},
  {0xfba4, 0x8fddd4},
  {0xfba5, 0x8fddea},
  {0xfba6, 0x8fddfa},
  {0xfba7, 0x8fdea4},
  {0xfba8, 0x8fdeb0},
  {0xfba9, 0x8ff4e5},
  {0xfbaa, 0x8fdeb5},
  {0xfbab, 0x8fdecb},
  {0xfbac, 0x8ff4e6},
  {0xfbad, 0x8fdfb9},
  {0xfbae, 0x8ff4e7},
  {0xfbaf, 0x8fdfc3},
  {0xfbb0, 0x8ff4e8},
  {0xfbb1, 0x8ff4e9},
  {0xfbb2, 0x8fe0d9},
  {0xfbb3, 0x8ff4ea},
  {0xfbb4, 0x8ff4eb},
  {0xfbb5, 0x8fe1e2},
  {0xfbb6, 0x8ff4ec},
  {0xfbb7, 0x8ff4ed},
  {0xfbb8, 0x8ff4ee},
  {0xfbb9, 0x8fe2c7},
  {0xfbba, 0x8fe3a8},
  {0xfbbb, 0x8fe3a6},
  {0xfbbc, 0x8fe3a9},
  {0xfbbd, 0x8fe3af},
  {0xfbbe, 0x8fe3b0},
  {0xfbbf, 0x8fe3aa},
  {0xfbc0, 0x8fe3ab},
  {0xfbc1, 0x8fe3bc},
  {0xfbc2, 0x8fe3c1},
  {0xfbc3, 0x8fe3bf},
  {0xfbc4, 0x8fe3d5},
  {0xfbc5, 0x8fe3d8},
  {0xfbc6, 0x8fe3d6},
  {0xfbc7, 0x8fe3df},
  {0xfbc8, 0x8fe3e3},
  {0xfbc9, 0x8fe3e1},
  {0xfbca, 0x8fe3d4},
  {0xfbcb, 0x8fe3e9},
  {0xfbcc, 0x8fe4a6},
  {0xfbcd, 0x8fe3f1},
  {0xfbce, 0x8fe3f2},
  {0xfbcf, 0x8fe4cb},
  {0xfbd0, 0x8fe4c1},
  {0xfbd1, 0x8fe4c3},
  {0xfbd2, 0x8fe4be},
  {0xfbd3, 0x8ff4ef},
  {0xfbd4, 0x8fe4c0},
  {0xfbd5, 0x8fe4c7},
  {0xfbd6, 0x8fe4bf},
  {0xfbd7, 0x8fe4e0},
  {0xfbd8, 0x8fe4de},
  {0xfbd9, 0x8fe4d1},
  {0xfbda, 0x8ff4f0},
  {0xfbdb, 0x8fe4dc},
  {0xfbdc, 0x8fe4d2},
  {0xfbdd, 0x8fe4db},
  {0xfbde, 0x8fe4d4},
  {0xfbdf, 0x8fe4fa},
  {0xfbe0, 0x8fe4ef},
  {0xfbe1, 0x8fe5b3},
  {0xfbe2, 0x8fe5bf},
  {0xfbe3, 0x8fe5c9},
  {0xfbe4, 0x8fe5d0},
  {0xfbe5, 0x8fe5e2},
  {0xfbe6, 0x8fe5ea},
  {0xfbe7, 0x8fe5eb},
  {0xfbe8, 0x8ff4f1},
  {0xfbe9, 0x8ff4f2},
  {0xfbea, 0x8ff4f3},
  {0xfbeb, 0x8fe6e8},
  {0xfbec, 0x8fe6ef},
  {0xfbed, 0x8fe7ac},
  {0xfbee, 0x8ff4f4},
  {0xfbef, 0x8fe7ae},
  {0xfbf0, 0x8ff4f5},
  {0xfbf1, 0x8fe7b1},
  {0xfbf2, 0x8ff4f6},
  {0xfbf3, 0x8fe7b2},
  {0xfbf4, 0x8fe8b1},
  {0xfbf5, 0x8fe8b6},
  {0xfbf6, 0x8ff4f7},
  {0xfbf7, 0x8ff4f8},
  {0xfbf8, 0x8fe8dd},
  {0xfbf9, 0x8ff4f9},
  {0xfbfa, 0x8ff4fa},
  {0xfbfb, 0x8fe9d1},
  {0xfbfc, 0x8ff4fb},
  {0xfc40, 0x8fe9ed},
  {0xfc41, 0x8feacd},
  {0xfc42, 0x8ff4fc},
  {0xfc43, 0x8feadb},
  {0xfc44, 0x8feae6},
  {0xfc45, 0x8feaea},
  {0xfc46, 0x8feba5},
  {0xfc47, 0x8febfb},
  {0xfc48, 0x8febfa},
  {0xfc49, 0x8ff4fd},
  {0xfc4a, 0x8fecd6},
  {0xfc4b, 0x8ff4fe},
};

#ifdef __MINGW32__
int
main (int argc, char **argv)
#else
void
gen_ibmext (int argc, char **argv)
#endif
{
  printf ("#define IBMEXT_CHAR_MIN 0xfa40\n");
  printf ("#define IBMEXT_CHAR_MAX 0xfc4b\n");
  printf ("\n");

  printf ("static const Char ibmext2internal_table[] =\n{");
  for (u_int i = 0; i < numberof (sjis2eucjp); i++)
    {
      if (!(i % 8))
        printf ("\n ");
      int c1 = sjis2eucjp[i].eucjp / 256 % 256 - 0x80;
      int c2 = sjis2eucjp[i].eucjp % 256 - 0x80;
      printf (" 0x%04x,", (sjis2eucjp[i].eucjp >= 0x10000
                           ? jisx0212_to_int (c1, c2)
                           : (j2sh (c1, c2) << 8) + j2sl (c1, c2)));
    }
  printf ("\n};\n\n");

  printf ("static const Char ibmext_eucjp2sjis_table[] =\n{");
  for (u_int i = 0, j = 0; i < numberof (sjis2eucjp); i++)
    if (sjis2eucjp[i].eucjp >= 0x8ff3f3)
      {
        if (!(j % 8))
          printf ("\n ");
        printf (" 0x%04x,", sjis2eucjp[i].sjis);
        j++;
      }
  printf ("\n};\n\n");


  Char w2i[65536];

  for (int i = 0; i < 65536; i++)
    w2i[i] = ucs2_t (-1);

  for (int i = 0x8740; i <= 0x879c; i++)
    {
      w2i[internal2wc_table[i]] = i;
      internal2wc_table[i] = ucs2_t (-1);
    }
  for (int i = 0xed40; i <= 0xeefc; i++)
    {
      w2i[internal2wc_table[i]] = i;
      internal2wc_table[i] = ucs2_t (-1);
    }
  for (int i = 0x8100; i <= 0x9fff; i++)
    w2i[internal2wc_table[i]] = i;
  for (int i = 0xe000; i <= 0xefff; i++)
    w2i[internal2wc_table[i]] = i;
  w2i[ucs2_t (-1)] = Char (-1);

  printf ("static const Char ibmext2necext_table[] =\n{");

  for (u_int i = 0; i < numberof (sjis2eucjp); i++)
    {
      if (!(i % 8))
        printf ("\n ");
      printf (" 0x%04x,", w2i[internal2wc_table[sjis2eucjp[i].sjis]]);
    }
  printf ("\n};\n\n");

  exit (0);
}
