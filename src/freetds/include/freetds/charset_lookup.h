/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -m 100 -C -K alias_pos -t -F ,-1 -P -H hash_charset -N charset_lookup -L ANSI-C charset_lookup.gperf  */
/* Computed positions: -k'1,3-11,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 3 "charset_lookup.gperf"

static const struct charset_alias *charset_lookup(register const char *str, register size_t len);
#line 2 "charset_lookup.gperf"
struct charset_alias { short int alias_pos; short int canonic; };

#define TOTAL_KEYWORDS 374
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 15
#define MAX_HASH_VALUE 1079
/* maximum key range = 1065, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_charset (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080,    7,  132, 1080,   56,    6,
        47,   83,   35,    8,   18,   63,    7,    9,  363, 1080,
      1080, 1080, 1080, 1080, 1080,    7,   99,  128,    6,   22,
       141,  116,   95,    6,   34,   68,    7,  159,    6,    6,
        80, 1080,   26,    6,  115,  191,   39,  162,  231,   14,
         8, 1080, 1080, 1080, 1080,   37, 1080,   10,   16,  147,
      1080,   16,    8,   12,   13,    6, 1080,    6, 1080,    8,
         6,    6, 1080, 1080,    6,    7,    6,   19, 1080, 1080,
      1080,    6, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
      1080, 1080, 1080, 1080, 1080, 1080
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct stringpool_t
  {
    char stringpool_str15[sizeof("L1")];
    char stringpool_str16[sizeof("L8")];
    char stringpool_str17[sizeof("L5")];
    char stringpool_str27[sizeof("L6")];
    char stringpool_str28[sizeof("SJIS")];
    char stringpool_str30[sizeof("koi8")];
    char stringpool_str31[sizeof("sjis")];
    char stringpool_str35[sizeof("R8")];
    char stringpool_str36[sizeof("iso81")];
    char stringpool_str38[sizeof("iso88")];
    char stringpool_str39[sizeof("iso15")];
    char stringpool_str40[sizeof("iso85")];
    char stringpool_str41[sizeof("thai8")];
    char stringpool_str42[sizeof("iso89")];
    char stringpool_str43[sizeof("roma8")];
    char stringpool_str44[sizeof("L4")];
    char stringpool_str45[sizeof("utf8")];
    char stringpool_str46[sizeof("866")];
    char stringpool_str47[sizeof("iso815")];
    char stringpool_str48[sizeof("big5")];
    char stringpool_str50[sizeof("roman8")];
    char stringpool_str56[sizeof("L2")];
    char stringpool_str57[sizeof("646")];
    char stringpool_str60[sizeof("iso86")];
    char stringpool_str63[sizeof("iso88591")];
    char stringpool_str65[sizeof("iso88598")];
    char stringpool_str66[sizeof("iso_1")];
    char stringpool_str67[sizeof("iso88595")];
    char stringpool_str69[sizeof("iso88599")];
    char stringpool_str70[sizeof("greek8")];
    char stringpool_str71[sizeof("ISO8859-1")];
    char stringpool_str72[sizeof("L7")];
    char stringpool_str73[sizeof("ISO8859-8")];
    char stringpool_str74[sizeof("iso885915")];
    char stringpool_str75[sizeof("ISO8859-5")];
    char stringpool_str77[sizeof("ISO8859-9")];
    char stringpool_str79[sizeof("ISO-8859-1")];
    char stringpool_str81[sizeof("ISO-8859-8")];
    char stringpool_str82[sizeof("ISO8859-15")];
    char stringpool_str83[sizeof("ISO-8859-5")];
    char stringpool_str85[sizeof("ISO-8859-9")];
    char stringpool_str87[sizeof("iso88596")];
    char stringpool_str89[sizeof("ISO-IR-58")];
    char stringpool_str90[sizeof("ISO-8859-15")];
    char stringpool_str91[sizeof("JAVA")];
    char stringpool_str92[sizeof("L3")];
    char stringpool_str93[sizeof("iso14")];
    char stringpool_str94[sizeof("iso84")];
    char stringpool_str95[sizeof("ISO8859-6")];
    char stringpool_str100[sizeof("ISO-IR-159")];
    char stringpool_str101[sizeof("ISO-IR-199")];
    char stringpool_str102[sizeof("ISO-IR-6")];
    char stringpool_str103[sizeof("ISO-8859-6")];
    char stringpool_str104[sizeof("862")];
    char stringpool_str105[sizeof("HZ")];
    char stringpool_str107[sizeof("iso646")];
    char stringpool_str108[sizeof("ISO-IR-165")];
    char stringpool_str109[sizeof("ISO_8859-1")];
    char stringpool_str110[sizeof("ISO-8859-16")];
    char stringpool_str111[sizeof("ISO_8859-8")];
    char stringpool_str113[sizeof("ISO_8859-5")];
    char stringpool_str115[sizeof("ISO_8859-9")];
    char stringpool_str116[sizeof("JP")];
    char stringpool_str118[sizeof("iso82")];
    char stringpool_str120[sizeof("ISO_8859-15")];
    char stringpool_str121[sizeof("iso88594")];
    char stringpool_str122[sizeof("850")];
    char stringpool_str123[sizeof("ISO-IR-148")];
    char stringpool_str124[sizeof("ISO_8859-15:1998")];
    char stringpool_str127[sizeof("ISO-IR-149")];
    char stringpool_str128[sizeof("ISO-IR-166")];
    char stringpool_str129[sizeof("ISO8859-4")];
    char stringpool_str133[sizeof("ISO_8859-6")];
    char stringpool_str135[sizeof("iso10")];
    char stringpool_str136[sizeof("CN")];
    char stringpool_str137[sizeof("ISO-8859-4")];
    char stringpool_str140[sizeof("ISO_8859-16")];
    char stringpool_str141[sizeof("KOREAN")];
    char stringpool_str142[sizeof("ISO-IR-101")];
    char stringpool_str143[sizeof("ISO-IR-14")];
    char stringpool_str144[sizeof("ISO-8859-14")];
    char stringpool_str145[sizeof("iso88592")];
    char stringpool_str146[sizeof("KOI8-R")];
    char stringpool_str148[sizeof("ISO-IR-109")];
    char stringpool_str149[sizeof("C99")];
    char stringpool_str150[sizeof("iso87")];
    char stringpool_str151[sizeof("ISO_8859-14:1998")];
    char stringpool_str152[sizeof("LATIN1")];
    char stringpool_str153[sizeof("ISO8859-2")];
    char stringpool_str154[sizeof("LATIN8")];
    char stringpool_str155[sizeof("ISO-IR-179")];
    char stringpool_str156[sizeof("LATIN5")];
    char stringpool_str157[sizeof("ISO-IR-126")];
    char stringpool_str158[sizeof("ASCII")];
    char stringpool_str161[sizeof("ISO-8859-2")];
    char stringpool_str164[sizeof("CP819")];
    char stringpool_str167[sizeof("ISO_8859-4")];
    char stringpool_str170[sizeof("TCVN")];
    char stringpool_str171[sizeof("ISO-IR-138")];
    char stringpool_str173[sizeof("hp15CN")];
    char stringpool_str174[sizeof("ISO_8859-14")];
    char stringpool_str176[sizeof("LATIN6")];
    char stringpool_str177[sizeof("iso88597")];
    char stringpool_str178[sizeof("ISO8859-10")];
    char stringpool_str179[sizeof("ISO-IR-144")];
    char stringpool_str183[sizeof("ISO_8859-16:2000")];
    char stringpool_str185[sizeof("ISO8859-7")];
    char stringpool_str186[sizeof("ISO-8859-10")];
    char stringpool_str189[sizeof("iso13")];
    char stringpool_str190[sizeof("iso83")];
    char stringpool_str191[sizeof("ISO_8859-2")];
    char stringpool_str192[sizeof("ISO-IR-110")];
    char stringpool_str193[sizeof("ISO-8859-7")];
    char stringpool_str194[sizeof("CP866")];
    char stringpool_str195[sizeof("CP949")];
    char stringpool_str196[sizeof("tis620")];
    char stringpool_str197[sizeof("VISCII")];
    char stringpool_str198[sizeof("ISO-IR-226")];
    char stringpool_str199[sizeof("US")];
    char stringpool_str200[sizeof("ISO-IR-87")];
    char stringpool_str201[sizeof("ISO-IR-57")];
    char stringpool_str202[sizeof("IBM819")];
    char stringpool_str203[sizeof("macthai")];
    char stringpool_str204[sizeof("MS-ANSI")];
    char stringpool_str205[sizeof("macturk")];
    char stringpool_str207[sizeof("CP1251")];
    char stringpool_str208[sizeof("ISO-IR-157")];
    char stringpool_str209[sizeof("CP1258")];
    char stringpool_str210[sizeof("LATIN4")];
    char stringpool_str211[sizeof("CP1255")];
    char stringpool_str212[sizeof("ISO_8859-10:1992")];
    char stringpool_str213[sizeof("cp866")];
    char stringpool_str214[sizeof("cp949")];
    char stringpool_str216[sizeof("ISO_8859-10")];
    char stringpool_str217[sizeof("iso88593")];
    char stringpool_str218[sizeof("ROMAN8")];
    char stringpool_str219[sizeof("CHINESE")];
    char stringpool_str220[sizeof("JIS0208")];
    char stringpool_str223[sizeof("ISO_8859-7")];
    char stringpool_str225[sizeof("macgreek")];
    char stringpool_str226[sizeof("cp1251")];
    char stringpool_str227[sizeof("ascii_8")];
    char stringpool_str228[sizeof("cp1258")];
    char stringpool_str229[sizeof("ECMA-118")];
    char stringpool_str230[sizeof("cp1255")];
    char stringpool_str231[sizeof("CP1256")];
    char stringpool_str232[sizeof("IBM866")];
    char stringpool_str233[sizeof("ISO-8859-3")];
    char stringpool_str234[sizeof("LATIN2")];
    char stringpool_str235[sizeof("BIG5")];
    char stringpool_str236[sizeof("MULELAO-1")];
    char stringpool_str237[sizeof("MS-EE")];
    char stringpool_str239[sizeof("ISO646-CN")];
    char stringpool_str240[sizeof("ISO-8859-13")];
    char stringpool_str242[sizeof("ISO-IR-100")];
    char stringpool_str243[sizeof("BIG-5")];
    char stringpool_str247[sizeof("ISO-IR-127")];
    char stringpool_str248[sizeof("GREEK8")];
    char stringpool_str250[sizeof("cp1256")];
    char stringpool_str252[sizeof("CP862")];
    char stringpool_str253[sizeof("CP1361")];
    char stringpool_str255[sizeof("GBK")];
    char stringpool_str258[sizeof("ELOT_928")];
    char stringpool_str260[sizeof("CP850")];
    char stringpool_str261[sizeof("CP936")];
    char stringpool_str262[sizeof("CP950")];
    char stringpool_str263[sizeof("ISO_8859-3")];
    char stringpool_str265[sizeof("CP1254")];
    char stringpool_str266[sizeof("LATIN7")];
    char stringpool_str270[sizeof("ISO_8859-13")];
    char stringpool_str271[sizeof("cp862")];
    char stringpool_str273[sizeof("CP874")];
    char stringpool_str274[sizeof("CSKOI8R")];
    char stringpool_str275[sizeof("EUCKR")];
    char stringpool_str279[sizeof("cp850")];
    char stringpool_str280[sizeof("cp936")];
    char stringpool_str281[sizeof("cp950")];
    char stringpool_str283[sizeof("EUC-KR")];
    char stringpool_str284[sizeof("cp1254")];
    char stringpool_str285[sizeof("ECMA-114")];
    char stringpool_str288[sizeof("eucKR")];
    char stringpool_str289[sizeof("CP1252")];
    char stringpool_str290[sizeof("IBM862")];
    char stringpool_str291[sizeof("CSISO159JISX02121990")];
    char stringpool_str292[sizeof("cp874")];
    char stringpool_str293[sizeof("ISO646-JP")];
    char stringpool_str294[sizeof("CSASCII")];
    char stringpool_str295[sizeof("EUCCN")];
    char stringpool_str297[sizeof("UCS-4LE")];
    char stringpool_str298[sizeof("IBM850")];
    char stringpool_str301[sizeof("GREEK")];
    char stringpool_str302[sizeof("ISO646-US")];
    char stringpool_str303[sizeof("EUC-CN")];
    char stringpool_str304[sizeof("TIS620")];
    char stringpool_str305[sizeof("mac")];
    char stringpool_str306[sizeof("LATIN3")];
    char stringpool_str307[sizeof("CP1250")];
    char stringpool_str308[sizeof("cp1252")];
    char stringpool_str309[sizeof("UCS-2LE")];
    char stringpool_str310[sizeof("CSISOLATIN1")];
    char stringpool_str312[sizeof("TIS-620")];
    char stringpool_str313[sizeof("TCVN5712-1")];
    char stringpool_str314[sizeof("CSISOLATIN5")];
    char stringpool_str318[sizeof("GB_1988-80")];
    char stringpool_str319[sizeof("CP932")];
    char stringpool_str320[sizeof("ASMO-708")];
    char stringpool_str321[sizeof("CP1257")];
    char stringpool_str324[sizeof("KOI8-T")];
    char stringpool_str326[sizeof("cp1250")];
    char stringpool_str329[sizeof("HP-ROMAN8")];
    char stringpool_str331[sizeof("MS_KANJI")];
    char stringpool_str333[sizeof("CSVISCII")];
    char stringpool_str334[sizeof("CSISOLATIN6")];
    char stringpool_str335[sizeof("KSC_5601")];
    char stringpool_str336[sizeof("SHIFT-JIS")];
    char stringpool_str337[sizeof("ISO-IR-203")];
    char stringpool_str338[sizeof("cp932")];
    char stringpool_str339[sizeof("JOHAB")];
    char stringpool_str340[sizeof("cp1257")];
    char stringpool_str342[sizeof("ARMSCII-8")];
    char stringpool_str345[sizeof("ISO_646.IRV:1991")];
    char stringpool_str347[sizeof("TCVN-5712")];
    char stringpool_str349[sizeof("EUCJP")];
    char stringpool_str350[sizeof("UTF8")];
    char stringpool_str351[sizeof("X0201")];
    char stringpool_str352[sizeof("GB2312")];
    char stringpool_str353[sizeof("X0208")];
    char stringpool_str354[sizeof("ISO-2022-KR")];
    char stringpool_str355[sizeof("MS-CYRL")];
    char stringpool_str356[sizeof("ISO-2022-JP-1")];
    char stringpool_str357[sizeof("EUC-JP")];
    char stringpool_str358[sizeof("UTF-8")];
    char stringpool_str359[sizeof("VISCII1.1-1")];
    char stringpool_str360[sizeof("CP367")];
    char stringpool_str361[sizeof("CP1253")];
    char stringpool_str362[sizeof("eucJP")];
    char stringpool_str364[sizeof("mac_cyr")];
    char stringpool_str365[sizeof("US-ASCII")];
    char stringpool_str366[sizeof("SHIFT_JIS")];
    char stringpool_str368[sizeof("CSISOLATIN4")];
    char stringpool_str369[sizeof("TIS620-0")];
    char stringpool_str371[sizeof("CSBIG5")];
    char stringpool_str374[sizeof("ISO-2022-CN")];
    char stringpool_str377[sizeof("CP437")];
    char stringpool_str379[sizeof("CN-BIG5")];
    char stringpool_str380[sizeof("cp1253")];
    char stringpool_str381[sizeof("ARABIC")];
    char stringpool_str383[sizeof("X0212")];
    char stringpool_str384[sizeof("CSISO14JISC6220RO")];
    char stringpool_str387[sizeof("GB18030")];
    char stringpool_str389[sizeof("UCS-4BE")];
    char stringpool_str392[sizeof("CSISOLATIN2")];
    char stringpool_str393[sizeof("GEORGIAN-PS")];
    char stringpool_str394[sizeof("KS_C_5601-1989")];
    char stringpool_str395[sizeof("CP1133")];
    char stringpool_str396[sizeof("cp437")];
    char stringpool_str397[sizeof("ISO-2022-JP-2")];
    char stringpool_str398[sizeof("IBM367")];
    char stringpool_str401[sizeof("UCS-2BE")];
    char stringpool_str402[sizeof("UNICODE-1-1")];
    char stringpool_str409[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str411[sizeof("MS-ARAB")];
    char stringpool_str415[sizeof("IBM437")];
    char stringpool_str418[sizeof("MAC")];
    char stringpool_str422[sizeof("UTF-16LE")];
    char stringpool_str428[sizeof("ISO-2022-JP")];
    char stringpool_str429[sizeof("CN-GB-ISOIR165")];
    char stringpool_str434[sizeof("WINDOWS-1251")];
    char stringpool_str435[sizeof("WINDOWS-1258")];
    char stringpool_str436[sizeof("WINDOWS-1255")];
    char stringpool_str438[sizeof("CSISOLATINARABIC")];
    char stringpool_str441[sizeof("MS-HEBR")];
    char stringpool_str444[sizeof("CYRILLIC")];
    char stringpool_str445[sizeof("JIS_C6226-1983")];
    char stringpool_str446[sizeof("WINDOWS-1256")];
    char stringpool_str448[sizeof("KS_C_5601-1987")];
    char stringpool_str450[sizeof("UHC")];
    char stringpool_str452[sizeof("BIGFIVE")];
    char stringpool_str454[sizeof("CN-GB")];
    char stringpool_str455[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str460[sizeof("BIG-FIVE")];
    char stringpool_str461[sizeof("CSIBM866")];
    char stringpool_str462[sizeof("UTF7")];
    char stringpool_str463[sizeof("WINDOWS-1254")];
    char stringpool_str464[sizeof("CSISOLATIN3")];
    char stringpool_str465[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str467[sizeof("CSISO57GB1988")];
    char stringpool_str470[sizeof("UTF-7")];
    char stringpool_str472[sizeof("GB_2312-80")];
    char stringpool_str474[sizeof("CSISO2022KR")];
    char stringpool_str475[sizeof("WINDOWS-1252")];
    char stringpool_str476[sizeof("KOI8-U")];
    char stringpool_str479[sizeof("ISO_8859-8:1988")];
    char stringpool_str480[sizeof("ISO_8859-5:1988")];
    char stringpool_str483[sizeof("ISO_8859-9:1989")];
    char stringpool_str484[sizeof("WINDOWS-1250")];
    char stringpool_str485[sizeof("MACICELAND")];
    char stringpool_str486[sizeof("CSISOLATINGREEK")];
    char stringpool_str487[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str488[sizeof("JIS_X0201")];
    char stringpool_str489[sizeof("JISX0201-1976")];
    char stringpool_str490[sizeof("JIS_X0208")];
    char stringpool_str491[sizeof("WINDOWS-1257")];
    char stringpool_str494[sizeof("CSISO2022CN")];
    char stringpool_str496[sizeof("MS-GREEK")];
    char stringpool_str500[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str503[sizeof("KOI8-RU")];
    char stringpool_str504[sizeof("TIS620.2529-1")];
    char stringpool_str505[sizeof("MACROMAN")];
    char stringpool_str506[sizeof("WINDOWS-874")];
    char stringpool_str507[sizeof("ISO_8859-4:1988")];
    char stringpool_str509[sizeof("CSKSC56011987")];
    char stringpool_str511[sizeof("WINDOWS-1253")];
    char stringpool_str514[sizeof("UTF-16BE")];
    char stringpool_str515[sizeof("CSISO87JISX0208")];
    char stringpool_str516[sizeof("CSISO2022JP2")];
    char stringpool_str520[sizeof("JIS_X0212")];
    char stringpool_str521[sizeof("MACROMANIA")];
    char stringpool_str522[sizeof("CSUNICODE11")];
    char stringpool_str523[sizeof("MACTHAI")];
    char stringpool_str528[sizeof("UTF-32LE")];
    char stringpool_str531[sizeof("CSHPROMAN8")];
    char stringpool_str534[sizeof("ISO_8859-1:1987")];
    char stringpool_str541[sizeof("BIG5HKSCS")];
    char stringpool_str546[sizeof("ISO_8859-6:1987")];
    char stringpool_str547[sizeof("JIS_X0212-1990")];
    char stringpool_str548[sizeof("CSISO2022JP")];
    char stringpool_str549[sizeof("BIG5-HKSCS")];
    char stringpool_str553[sizeof("CSSHIFTJIS")];
    char stringpool_str555[sizeof("ISO_8859-3:1988")];
    char stringpool_str557[sizeof("JIS_X0208-1990")];
    char stringpool_str560[sizeof("CSISOLATINHEBREW")];
    char stringpool_str561[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str563[sizeof("ISO-CELTIC")];
    char stringpool_str564[sizeof("HZ-GB-2312")];
    char stringpool_str571[sizeof("ANSI_X3.4-1968")];
    char stringpool_str572[sizeof("HEBREW")];
    char stringpool_str575[sizeof("ISO_8859-2:1987")];
    char stringpool_str577[sizeof("CSISO58GB231280")];
    char stringpool_str581[sizeof("CSGB2312")];
    char stringpool_str582[sizeof("ANSI_X3.4-1986")];
    char stringpool_str583[sizeof("CSUNICODE11UTF7")];
    char stringpool_str584[sizeof("JIS_X0208-1983")];
    char stringpool_str591[sizeof("ISO_8859-7:1987")];
    char stringpool_str594[sizeof("EUCTW")];
    char stringpool_str596[sizeof("CSEUCKR")];
    char stringpool_str602[sizeof("EUC-TW")];
    char stringpool_str605[sizeof("MACCROATIAN")];
    char stringpool_str607[sizeof("eucTW")];
    char stringpool_str614[sizeof("TIS620.2533-1")];
    char stringpool_str617[sizeof("MACGREEK")];
    char stringpool_str620[sizeof("UTF-32BE")];
    char stringpool_str625[sizeof("MACINTOSH")];
    char stringpool_str637[sizeof("UNICODELITTLE")];
    char stringpool_str641[sizeof("MS-TURK")];
    char stringpool_str645[sizeof("MACUKRAINE")];
    char stringpool_str651[sizeof("IBM-CP1133")];
    char stringpool_str658[sizeof("MACCENTRALEUROPE")];
    char stringpool_str663[sizeof("NEXTSTEP")];
    char stringpool_str664[sizeof("TIS620.2533-0")];
    char stringpool_str674[sizeof("JIS_X0212.1990-0")];
    char stringpool_str697[sizeof("MACARABIC")];
    char stringpool_str706[sizeof("UNICODEBIG")];
    char stringpool_str723[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str748[sizeof("MACCYRILLIC")];
    char stringpool_str756[sizeof("WINBALTRIM")];
    char stringpool_str758[sizeof("TCVN5712-1:1993")];
    char stringpool_str762[sizeof("CSMACINTOSH")];
    char stringpool_str788[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str884[sizeof("MACHEBREW")];
    char stringpool_str899[sizeof("MACTURKISH")];
    char stringpool_str905[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str915[sizeof("CSEUCTW")];
    char stringpool_str1079[sizeof("CSEUCPKDFMTJAPANESE")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L1",
    "L8",
    "L5",
    "L6",
    "SJIS",
    "koi8",
    "sjis",
    "R8",
    "iso81",
    "iso88",
    "iso15",
    "iso85",
    "thai8",
    "iso89",
    "roma8",
    "L4",
    "utf8",
    "866",
    "iso815",
    "big5",
    "roman8",
    "L2",
    "646",
    "iso86",
    "iso88591",
    "iso88598",
    "iso_1",
    "iso88595",
    "iso88599",
    "greek8",
    "ISO8859-1",
    "L7",
    "ISO8859-8",
    "iso885915",
    "ISO8859-5",
    "ISO8859-9",
    "ISO-8859-1",
    "ISO-8859-8",
    "ISO8859-15",
    "ISO-8859-5",
    "ISO-8859-9",
    "iso88596",
    "ISO-IR-58",
    "ISO-8859-15",
    "JAVA",
    "L3",
    "iso14",
    "iso84",
    "ISO8859-6",
    "ISO-IR-159",
    "ISO-IR-199",
    "ISO-IR-6",
    "ISO-8859-6",
    "862",
    "HZ",
    "iso646",
    "ISO-IR-165",
    "ISO_8859-1",
    "ISO-8859-16",
    "ISO_8859-8",
    "ISO_8859-5",
    "ISO_8859-9",
    "JP",
    "iso82",
    "ISO_8859-15",
    "iso88594",
    "850",
    "ISO-IR-148",
    "ISO_8859-15:1998",
    "ISO-IR-149",
    "ISO-IR-166",
    "ISO8859-4",
    "ISO_8859-6",
    "iso10",
    "CN",
    "ISO-8859-4",
    "ISO_8859-16",
    "KOREAN",
    "ISO-IR-101",
    "ISO-IR-14",
    "ISO-8859-14",
    "iso88592",
    "KOI8-R",
    "ISO-IR-109",
    "C99",
    "iso87",
    "ISO_8859-14:1998",
    "LATIN1",
    "ISO8859-2",
    "LATIN8",
    "ISO-IR-179",
    "LATIN5",
    "ISO-IR-126",
    "ASCII",
    "ISO-8859-2",
    "CP819",
    "ISO_8859-4",
    "TCVN",
    "ISO-IR-138",
    "hp15CN",
    "ISO_8859-14",
    "LATIN6",
    "iso88597",
    "ISO8859-10",
    "ISO-IR-144",
    "ISO_8859-16:2000",
    "ISO8859-7",
    "ISO-8859-10",
    "iso13",
    "iso83",
    "ISO_8859-2",
    "ISO-IR-110",
    "ISO-8859-7",
    "CP866",
    "CP949",
    "tis620",
    "VISCII",
    "ISO-IR-226",
    "US",
    "ISO-IR-87",
    "ISO-IR-57",
    "IBM819",
    "macthai",
    "MS-ANSI",
    "macturk",
    "CP1251",
    "ISO-IR-157",
    "CP1258",
    "LATIN4",
    "CP1255",
    "ISO_8859-10:1992",
    "cp866",
    "cp949",
    "ISO_8859-10",
    "iso88593",
    "ROMAN8",
    "CHINESE",
    "JIS0208",
    "ISO_8859-7",
    "macgreek",
    "cp1251",
    "ascii_8",
    "cp1258",
    "ECMA-118",
    "cp1255",
    "CP1256",
    "IBM866",
    "ISO-8859-3",
    "LATIN2",
    "BIG5",
    "MULELAO-1",
    "MS-EE",
    "ISO646-CN",
    "ISO-8859-13",
    "ISO-IR-100",
    "BIG-5",
    "ISO-IR-127",
    "GREEK8",
    "cp1256",
    "CP862",
    "CP1361",
    "GBK",
    "ELOT_928",
    "CP850",
    "CP936",
    "CP950",
    "ISO_8859-3",
    "CP1254",
    "LATIN7",
    "ISO_8859-13",
    "cp862",
    "CP874",
    "CSKOI8R",
    "EUCKR",
    "cp850",
    "cp936",
    "cp950",
    "EUC-KR",
    "cp1254",
    "ECMA-114",
    "eucKR",
    "CP1252",
    "IBM862",
    "CSISO159JISX02121990",
    "cp874",
    "ISO646-JP",
    "CSASCII",
    "EUCCN",
    "UCS-4LE",
    "IBM850",
    "GREEK",
    "ISO646-US",
    "EUC-CN",
    "TIS620",
    "mac",
    "LATIN3",
    "CP1250",
    "cp1252",
    "UCS-2LE",
    "CSISOLATIN1",
    "TIS-620",
    "TCVN5712-1",
    "CSISOLATIN5",
    "GB_1988-80",
    "CP932",
    "ASMO-708",
    "CP1257",
    "KOI8-T",
    "cp1250",
    "HP-ROMAN8",
    "MS_KANJI",
    "CSVISCII",
    "CSISOLATIN6",
    "KSC_5601",
    "SHIFT-JIS",
    "ISO-IR-203",
    "cp932",
    "JOHAB",
    "cp1257",
    "ARMSCII-8",
    "ISO_646.IRV:1991",
    "TCVN-5712",
    "EUCJP",
    "UTF8",
    "X0201",
    "GB2312",
    "X0208",
    "ISO-2022-KR",
    "MS-CYRL",
    "ISO-2022-JP-1",
    "EUC-JP",
    "UTF-8",
    "VISCII1.1-1",
    "CP367",
    "CP1253",
    "eucJP",
    "mac_cyr",
    "US-ASCII",
    "SHIFT_JIS",
    "CSISOLATIN4",
    "TIS620-0",
    "CSBIG5",
    "ISO-2022-CN",
    "CP437",
    "CN-BIG5",
    "cp1253",
    "ARABIC",
    "X0212",
    "CSISO14JISC6220RO",
    "GB18030",
    "UCS-4BE",
    "CSISOLATIN2",
    "GEORGIAN-PS",
    "KS_C_5601-1989",
    "CP1133",
    "cp437",
    "ISO-2022-JP-2",
    "IBM367",
    "UCS-2BE",
    "UNICODE-1-1",
    "JIS_C6220-1969-RO",
    "MS-ARAB",
    "IBM437",
    "MAC",
    "UTF-16LE",
    "ISO-2022-JP",
    "CN-GB-ISOIR165",
    "WINDOWS-1251",
    "WINDOWS-1258",
    "WINDOWS-1255",
    "CSISOLATINARABIC",
    "MS-HEBR",
    "CYRILLIC",
    "JIS_C6226-1983",
    "WINDOWS-1256",
    "KS_C_5601-1987",
    "UHC",
    "BIGFIVE",
    "CN-GB",
    "GEORGIAN-ACADEMY",
    "BIG-FIVE",
    "CSIBM866",
    "UTF7",
    "WINDOWS-1254",
    "CSISOLATIN3",
    "UNICODE-1-1-UTF-7",
    "CSISO57GB1988",
    "UTF-7",
    "GB_2312-80",
    "CSISO2022KR",
    "WINDOWS-1252",
    "KOI8-U",
    "ISO_8859-8:1988",
    "ISO_8859-5:1988",
    "ISO_8859-9:1989",
    "WINDOWS-1250",
    "MACICELAND",
    "CSISOLATINGREEK",
    "ISO-2022-CN-EXT",
    "JIS_X0201",
    "JISX0201-1976",
    "JIS_X0208",
    "WINDOWS-1257",
    "CSISO2022CN",
    "MS-GREEK",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "KOI8-RU",
    "TIS620.2529-1",
    "MACROMAN",
    "WINDOWS-874",
    "ISO_8859-4:1988",
    "CSKSC56011987",
    "WINDOWS-1253",
    "UTF-16BE",
    "CSISO87JISX0208",
    "CSISO2022JP2",
    "JIS_X0212",
    "MACROMANIA",
    "CSUNICODE11",
    "MACTHAI",
    "UTF-32LE",
    "CSHPROMAN8",
    "ISO_8859-1:1987",
    "BIG5HKSCS",
    "ISO_8859-6:1987",
    "JIS_X0212-1990",
    "CSISO2022JP",
    "BIG5-HKSCS",
    "CSSHIFTJIS",
    "ISO_8859-3:1988",
    "JIS_X0208-1990",
    "CSISOLATINHEBREW",
    "CSISOLATINCYRILLIC",
    "ISO-CELTIC",
    "HZ-GB-2312",
    "ANSI_X3.4-1968",
    "HEBREW",
    "ISO_8859-2:1987",
    "CSISO58GB231280",
    "CSGB2312",
    "ANSI_X3.4-1986",
    "CSUNICODE11UTF7",
    "JIS_X0208-1983",
    "ISO_8859-7:1987",
    "EUCTW",
    "CSEUCKR",
    "EUC-TW",
    "MACCROATIAN",
    "eucTW",
    "TIS620.2533-1",
    "MACGREEK",
    "UTF-32BE",
    "MACINTOSH",
    "UNICODELITTLE",
    "MS-TURK",
    "MACUKRAINE",
    "IBM-CP1133",
    "MACCENTRALEUROPE",
    "NEXTSTEP",
    "TIS620.2533-0",
    "JIS_X0212.1990-0",
    "MACARABIC",
    "UNICODEBIG",
    "CSPC862LATINHEBREW",
    "MACCYRILLIC",
    "WINBALTRIM",
    "TCVN5712-1:1993",
    "CSMACINTOSH",
    "CSHALFWIDTHKATAKANA",
    "MACHEBREW",
    "MACTURKISH",
    "CSPC850MULTILINGUAL",
    "CSEUCTW",
    "CSEUCPKDFMTJAPANESE"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct charset_alias *
charset_lookup (register const char *str, register size_t len)
{
  static const struct charset_alias wordlist[] =
    {
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 228 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str15), 0},
#line 235 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str16), 47},
#line 232 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str17), 57},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 233 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str27), 45},
#line 272 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str28), 84},
      {-1,-1},
#line 375 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str30), 65},
#line 359 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str31), 84},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 268 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str35), 83},
#line 337 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str36), 0},
      {-1,-1},
#line 345 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str38), 56},
#line 372 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str39), 48},
#line 342 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str40), 53},
#line 360 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str41), 61},
#line 356 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str42), 57},
#line 357 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str43), 83},
#line 231 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str44), 52},
#line 362 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str45), 1},
#line 10 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str46), 26},
#line 338 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str47), 48},
#line 318 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str48), 5},
      {-1,-1},
#line 358 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str50), 83},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 229 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str56), 50},
#line 7 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str57), 88},
      {-1,-1}, {-1,-1},
#line 343 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str60), 54},
      {-1,-1}, {-1,-1},
#line 346 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str63), 0},
      {-1,-1},
#line 354 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str65), 56},
#line 374 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str66), 0},
#line 351 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str67), 53},
      {-1,-1},
#line 355 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str69), 57},
#line 368 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str70), 55},
#line 168 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str71), 0},
#line 234 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str72), 46},
#line 176 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str73), 56},
#line 347 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str74), 48},
#line 173 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str75), 53},
      {-1,-1},
#line 177 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str77), 57},
      {-1,-1},
#line 127 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str79), 0},
      {-1,-1},
#line 139 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str81), 56},
#line 170 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str82), 48},
#line 136 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str83), 53},
      {-1,-1},
#line 140 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str85), 57},
      {-1,-1},
#line 352 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str87), 54},
      {-1,-1},
#line 162 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str89), 8},
#line 131 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str90), 48},
#line 206 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str91), 63},
#line 230 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str92), 51},
#line 371 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str93), 47},
#line 341 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str94), 52},
#line 174 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str95), 54},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 154 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str100), 60},
#line 158 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str101), 47},
#line 163 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str102), 88},
#line 137 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str103), 54},
#line 9 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str104), 25},
#line 112 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str105), 38},
      {-1,-1},
#line 373 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str107), 88},
#line 155 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str108), 11},
#line 179 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str109), 0},
#line 132 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str110), 49},
#line 202 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str111), 56},
      {-1,-1},
#line 196 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str113), 53},
      {-1,-1},
#line 204 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str115), 57},
#line 219 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str116), 58},
      {-1,-1},
#line 339 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str118), 50},
      {-1,-1},
#line 185 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str120), 48},
#line 350 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str121), 52},
#line 8 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str122), 24},
#line 151 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str123), 57},
#line 186 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str124), 48},
      {-1,-1}, {-1,-1},
#line 152 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str127), 59},
#line 156 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str128), 61},
#line 172 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str129), 52},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 198 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str133), 54},
      {-1,-1},
#line 369 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str135), 45},
#line 25 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str136), 9},
#line 135 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str137), 52},
      {-1,-1}, {-1,-1},
#line 187 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str140), 49},
#line 224 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str141), 59},
#line 143 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str142), 50},
#line 149 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str143), 58},
#line 130 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str144), 47},
#line 348 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str145), 50},
#line 220 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str146), 65},
      {-1,-1},
#line 144 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str148), 51},
#line 23 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str149), 7},
#line 344 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str150), 55},
#line 184 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str151), 47},
#line 236 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str152), 0},
#line 171 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str153), 50},
#line 243 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str154), 47},
#line 157 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str155), 46},
#line 240 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str156), 57},
#line 146 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str157), 55},
#line 15 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str158), 88},
      {-1,-1}, {-1,-1},
#line 133 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str161), 50},
      {-1,-1}, {-1,-1},
#line 42 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str164), 0},
      {-1,-1}, {-1,-1},
#line 194 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str167), 52},
      {-1,-1}, {-1,-1},
#line 273 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str170), 85},
#line 148 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str171), 56},
      {-1,-1},
#line 336 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str173), 8},
#line 183 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str174), 47},
      {-1,-1},
#line 241 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str176), 45},
#line 353 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str177), 55},
#line 169 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str178), 45},
#line 150 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str179), 53},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 188 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str183), 49},
      {-1,-1},
#line 175 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str185), 55},
#line 128 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str186), 45},
      {-1,-1}, {-1,-1},
#line 370 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str189), 46},
#line 340 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str190), 51},
#line 190 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str191), 50},
#line 145 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str192), 52},
#line 138 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str193), 55},
#line 45 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str194), 26},
#line 49 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str195), 30},
#line 361 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str196), 61},
#line 302 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str197), 94},
#line 160 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str198), 49},
#line 292 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str199), 88},
#line 164 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str200), 62},
#line 161 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str201), 9},
#line 117 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str202), 0},
#line 379 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str203), 78},
#line 258 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str204), 15},
#line 380 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str205), 79},
      {-1,-1},
#line 31 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str207), 14},
#line 153 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str208), 45},
#line 38 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str209), 21},
#line 239 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str210), 52},
#line 35 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str211), 18},
#line 181 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str212), 45},
#line 331 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str213), 26},
#line 366 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str214), 30},
      {-1,-1},
#line 180 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str216), 45},
#line 349 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str217), 51},
#line 269 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str218), 83},
#line 24 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str219), 8},
#line 207 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str220), 62},
      {-1,-1}, {-1,-1},
#line 200 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str223), 55},
      {-1,-1},
#line 378 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str225), 74},
#line 320 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str226), 14},
#line 363 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str227), 0},
#line 327 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str228), 21},
#line 90 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str229), 55},
#line 324 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str230), 18},
#line 36 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str231), 19},
#line 120 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str232), 26},
#line 134 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str233), 51},
#line 237 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str234), 50},
#line 19 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str235), 5},
#line 266 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str236), 81},
#line 261 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str237), 13},
      {-1,-1},
#line 165 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str239), 9},
#line 129 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str240), 46},
      {-1,-1},
#line 142 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str242), 0},
#line 17 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str243), 5},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 147 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str247), 54},
#line 109 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str248), 55},
      {-1,-1},
#line 325 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str250), 19},
      {-1,-1},
#line 44 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str252), 25},
#line 39 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str253), 22},
      {-1,-1},
#line 103 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str255), 29},
      {-1,-1}, {-1,-1},
#line 91 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str258), 55},
      {-1,-1},
#line 43 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str260), 24},
#line 48 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str261), 29},
#line 50 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str262), 31},
#line 192 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str263), 51},
      {-1,-1},
#line 34 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str265), 17},
#line 242 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str266), 46},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 182 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str270), 46},
#line 330 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str271), 25},
      {-1,-1},
#line 46 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str273), 27},
#line 79 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str274), 65},
#line 98 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str275), 33},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 329 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str279), 24},
#line 365 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str280), 29},
#line 367 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str281), 31},
      {-1,-1},
#line 94 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str283), 33},
#line 323 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str284), 17},
#line 89 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str285), 54},
      {-1,-1}, {-1,-1},
#line 334 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str288), 33},
#line 32 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str289), 15},
#line 119 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str290), 25},
#line 61 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str291), 60},
#line 332 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str292), 27},
#line 166 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str293), 58},
#line 51 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str294), 88},
#line 96 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str295), 10},
      {-1,-1},
#line 286 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str297), 87},
#line 118 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str298), 24},
      {-1,-1}, {-1,-1},
#line 108 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str301), 55},
#line 167 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str302), 88},
#line 92 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str303), 10},
#line 278 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str304), 61},
#line 376 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str305), 69},
#line 238 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str306), 51},
#line 30 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str307), 13},
#line 321 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str308), 15},
#line 284 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str309), 2},
#line 69 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str310), 0},
      {-1,-1},
#line 277 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str312), 61},
#line 275 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str313), 85},
#line 73 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str314), 57},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 104 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str318), 9},
#line 47 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str319), 28},
#line 16 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str320), 54},
#line 37 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str321), 20},
      {-1,-1}, {-1,-1},
#line 222 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str324), 67},
      {-1,-1},
#line 319 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str326), 13},
      {-1,-1}, {-1,-1},
#line 111 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str329), 83},
      {-1,-1},
#line 265 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str331), 84},
      {-1,-1},
#line 87 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str333), 94},
#line 74 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str334), 45},
#line 225 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str335), 59},
#line 270 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str336), 84},
#line 159 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str337), 48},
#line 364 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str338), 28},
#line 218 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str339), 22},
#line 326 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str340), 20},
      {-1,-1},
#line 14 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str342), 4},
      {-1,-1}, {-1,-1},
#line 178 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str345), 88},
      {-1,-1},
#line 274 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str347), 85},
      {-1,-1},
#line 97 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str349), 32},
#line 301 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str350), 1},
#line 315 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str351), 64},
#line 102 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str352), 10},
#line 316 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str353), 62},
#line 126 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str354), 44},
#line 260 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str355), 14},
#line 124 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str356), 42},
#line 93 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str357), 32},
#line 299 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str358), 1},
#line 303 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str359), 94},
#line 40 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str360), 88},
#line 33 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str361), 16},
#line 333 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str362), 32},
      {-1,-1},
#line 377 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str364), 73},
#line 293 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str365), 88},
#line 271 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str366), 84},
      {-1,-1},
#line 72 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str368), 52},
#line 279 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str369), 61},
      {-1,-1},
#line 52 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str371), 5},
      {-1,-1}, {-1,-1},
#line 121 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str374), 39},
      {-1,-1}, {-1,-1},
#line 41 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str377), 23},
      {-1,-1},
#line 26 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str379), 5},
#line 322 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str380), 16},
#line 13 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str381), 54},
      {-1,-1},
#line 317 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str383), 60},
#line 60 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str384), 58},
      {-1,-1}, {-1,-1},
#line 101 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str387), 35},
      {-1,-1},
#line 285 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str389), 86},
      {-1,-1}, {-1,-1},
#line 70 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str392), 50},
#line 107 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str393), 37},
#line 227 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str394), 59},
#line 29 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str395), 12},
#line 328 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str396), 23},
#line 125 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str397), 43},
#line 115 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str398), 88},
      {-1,-1}, {-1,-1},
#line 283 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str401), 3},
#line 288 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str402), 3},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 209 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str409), 58},
      {-1,-1},
#line 259 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str411), 19},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 116 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str415), 23},
      {-1,-1}, {-1,-1},
#line 244 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str418), 69},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 295 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str422), 90},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 123 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str428), 41},
#line 28 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str429), 11},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 306 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str434), 14},
#line 313 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str435), 21},
#line 310 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str436), 18},
      {-1,-1},
#line 75 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str438), 54},
      {-1,-1}, {-1,-1},
#line 263 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str441), 18},
      {-1,-1}, {-1,-1},
#line 88 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str444), 53},
#line 210 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str445), 62},
#line 311 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str446), 19},
      {-1,-1},
#line 226 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str448), 59},
      {-1,-1},
#line 287 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str450), 30},
      {-1,-1},
#line 22 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str452), 5},
      {-1,-1},
#line 27 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str454), 10},
#line 106 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str455), 36},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 18 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str460), 5},
#line 59 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str461), 26},
#line 300 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str462), 93},
#line 309 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str463), 17},
#line 71 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str464), 51},
#line 289 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str465), 93},
      {-1,-1},
#line 66 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str467), 9},
      {-1,-1}, {-1,-1},
#line 298 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str470), 93},
      {-1,-1},
#line 105 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str472), 8},
      {-1,-1},
#line 65 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str474), 44},
#line 307 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str475), 15},
#line 223 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str476), 68},
      {-1,-1}, {-1,-1},
#line 203 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str479), 56},
#line 197 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str480), 53},
      {-1,-1}, {-1,-1},
#line 205 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str483), 57},
#line 305 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str484), 13},
#line 251 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str485), 76},
#line 77 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str486), 55},
#line 122 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str487), 40},
#line 211 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str488), 64},
#line 208 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str489), 64},
#line 212 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str490), 62},
#line 312 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str491), 20},
      {-1,-1}, {-1,-1},
#line 62 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str494), 39},
      {-1,-1},
#line 262 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str496), 16},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 100 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str500), 32},
      {-1,-1}, {-1,-1},
#line 221 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str503), 66},
#line 280 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str504), 61},
#line 253 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str505), 69},
#line 314 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str506), 27},
#line 195 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str507), 52},
      {-1,-1},
#line 80 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str509), 59},
      {-1,-1},
#line 308 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str511), 16},
      {-1,-1}, {-1,-1},
#line 294 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str514), 89},
#line 68 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str515), 62},
#line 64 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str516), 43},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 215 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str520), 60},
#line 254 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str521), 77},
#line 85 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str522), 3},
#line 255 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str523), 78},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 297 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str528), 92},
      {-1,-1}, {-1,-1},
#line 58 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str531), 83},
      {-1,-1}, {-1,-1},
#line 189 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str534), 0},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 21 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str541), 6},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 199 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str546), 54},
#line 216 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str547), 60},
#line 63 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str548), 41},
#line 20 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str549), 6},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 84 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str553), 84},
      {-1,-1},
#line 193 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str555), 51},
      {-1,-1},
#line 214 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str557), 62},
      {-1,-1}, {-1,-1},
#line 78 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str560), 56},
#line 76 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str561), 53},
      {-1,-1},
#line 141 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str563), 47},
#line 113 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str564), 38},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 11 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str571), 88},
#line 110 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str572), 56},
      {-1,-1}, {-1,-1},
#line 191 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str575), 50},
      {-1,-1},
#line 67 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str577), 8},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 56 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str581), 10},
#line 12 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str582), 88},
#line 86 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str583), 93},
#line 213 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str584), 62},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 201 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str591), 55},
      {-1,-1}, {-1,-1},
#line 99 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str594), 34},
      {-1,-1},
#line 53 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str596), 33},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 95 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str602), 34},
      {-1,-1}, {-1,-1},
#line 247 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str605), 72},
      {-1,-1},
#line 335 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str607), 34},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 282 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str614), 61},
      {-1,-1}, {-1,-1},
#line 249 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str617), 74},
      {-1,-1}, {-1,-1},
#line 296 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str620), 91},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 252 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str625), 69},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 291 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str637), 2},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 264 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str641), 17},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 257 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str645), 80},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 114 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str651), 12},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 246 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str658), 71},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 267 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str663), 82},
#line 281 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str664), 61},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 217 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str674), 60},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 245 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str697), 70},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1},
#line 290 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str706), 3},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 83 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str723), 25},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 248 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str748), 73},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1},
#line 304 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str756), 20},
      {-1,-1},
#line 276 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str758), 85},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 81 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str762), 69},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1},
#line 57 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str788), 64},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 250 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str884), 75},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1},
#line 256 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str899), 79},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
#line 82 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str905), 24},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1},
#line 55 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str915), 34},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
      {-1,-1},
#line 54 "charset_lookup.gperf"
      {offsetof(struct stringpool_t, stringpool_str1079), 32}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash_charset (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int o = wordlist[key].alias_pos;
          if (o >= 0)
            {
              register const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[key];
            }
        }
    }
  return 0;
}
#line 381 "charset_lookup.gperf"

