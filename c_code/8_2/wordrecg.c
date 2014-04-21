/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident164019 tident164019;
typedef struct tidobj164013 tidobj164013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY168325[32];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY168327[252];
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj164013  {
  TNimObject Sup;
NI Id;
};
struct  tident164019  {
  tidobj164013 Sup;
NimStringDesc* S;
tident164019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_168334)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, whichkeyword_168360)(tident164019* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU8, whichkeyword_168367)(NimStringDesc* id);
N_NIMCALL(tident164019*, getident_164456)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_168373)(void);
N_NIMCALL(tident164019*, getident_164462)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_117859)(NimStringDesc* x);
NIM_CONST TY168325 cppnimsharedkeywords_168324 = {
0x10, 0x1B, 0xAA, 0x12, 0x00, 0x00, 0x20, 0x27,
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1171, "", 0);
STRING_LITERAL(TMP1172, "addr", 4);
STRING_LITERAL(TMP1173, "and", 3);
STRING_LITERAL(TMP1174, "as", 2);
STRING_LITERAL(TMP1175, "asm", 3);
STRING_LITERAL(TMP1176, "atomic", 6);
STRING_LITERAL(TMP1177, "bind", 4);
STRING_LITERAL(TMP1178, "block", 5);
STRING_LITERAL(TMP1179, "break", 5);
STRING_LITERAL(TMP1180, "case", 4);
STRING_LITERAL(TMP1181, "cast", 4);
STRING_LITERAL(TMP1182, "const", 5);
STRING_LITERAL(TMP1183, "continue", 8);
STRING_LITERAL(TMP1184, "converter", 9);
STRING_LITERAL(TMP1185, "discard", 7);
STRING_LITERAL(TMP1186, "distinct", 8);
STRING_LITERAL(TMP1187, "div", 3);
STRING_LITERAL(TMP1188, "do", 2);
STRING_LITERAL(TMP1189, "elif", 4);
STRING_LITERAL(TMP1190, "else", 4);
STRING_LITERAL(TMP1191, "end", 3);
STRING_LITERAL(TMP1192, "enum", 4);
STRING_LITERAL(TMP1193, "except", 6);
STRING_LITERAL(TMP1194, "export", 6);
STRING_LITERAL(TMP1195, "finally", 7);
STRING_LITERAL(TMP1196, "for", 3);
STRING_LITERAL(TMP1197, "from", 4);
STRING_LITERAL(TMP1198, "generic", 7);
STRING_LITERAL(TMP1199, "if", 2);
STRING_LITERAL(TMP1200, "import", 6);
STRING_LITERAL(TMP1201, "in", 2);
STRING_LITERAL(TMP1202, "include", 7);
STRING_LITERAL(TMP1203, "interface", 9);
STRING_LITERAL(TMP1204, "is", 2);
STRING_LITERAL(TMP1205, "isnot", 5);
STRING_LITERAL(TMP1206, "iterator", 8);
STRING_LITERAL(TMP1207, "lambda", 6);
STRING_LITERAL(TMP1208, "let", 3);
STRING_LITERAL(TMP1209, "macro", 5);
STRING_LITERAL(TMP1210, "method", 6);
STRING_LITERAL(TMP1211, "mixin", 5);
STRING_LITERAL(TMP1212, "mod", 3);
STRING_LITERAL(TMP1213, "nil", 3);
STRING_LITERAL(TMP1214, "not", 3);
STRING_LITERAL(TMP1215, "notin", 5);
STRING_LITERAL(TMP1216, "object", 6);
STRING_LITERAL(TMP1217, "of", 2);
STRING_LITERAL(TMP1218, "or", 2);
STRING_LITERAL(TMP1219, "out", 3);
STRING_LITERAL(TMP1220, "proc", 4);
STRING_LITERAL(TMP1221, "ptr", 3);
STRING_LITERAL(TMP1222, "raise", 5);
STRING_LITERAL(TMP1223, "ref", 3);
STRING_LITERAL(TMP1224, "return", 6);
STRING_LITERAL(TMP1225, "shl", 3);
STRING_LITERAL(TMP1226, "shr", 3);
STRING_LITERAL(TMP1227, "static", 6);
STRING_LITERAL(TMP1228, "template", 8);
STRING_LITERAL(TMP1229, "try", 3);
STRING_LITERAL(TMP1230, "tuple", 5);
STRING_LITERAL(TMP1231, "type", 4);
STRING_LITERAL(TMP1232, "using", 5);
STRING_LITERAL(TMP1233, "var", 3);
STRING_LITERAL(TMP1234, "when", 4);
STRING_LITERAL(TMP1235, "while", 5);
STRING_LITERAL(TMP1236, "with", 4);
STRING_LITERAL(TMP1237, "without", 7);
STRING_LITERAL(TMP1238, "xor", 3);
STRING_LITERAL(TMP1239, "yield", 5);
STRING_LITERAL(TMP1240, ":", 1);
STRING_LITERAL(TMP1241, "::", 2);
STRING_LITERAL(TMP1242, "=", 1);
STRING_LITERAL(TMP1243, ".", 1);
STRING_LITERAL(TMP1244, "..", 2);
STRING_LITERAL(TMP1245, "*", 1);
STRING_LITERAL(TMP1246, "-", 1);
STRING_LITERAL(TMP1247, "magic", 5);
STRING_LITERAL(TMP1248, "thread", 6);
STRING_LITERAL(TMP1249, "final", 5);
STRING_LITERAL(TMP1250, "profiler", 8);
STRING_LITERAL(TMP1251, "objchecks", 9);
STRING_LITERAL(TMP1252, "destroy", 7);
STRING_LITERAL(TMP1253, "immediate", 9);
STRING_LITERAL(TMP1254, "destructor", 10);
STRING_LITERAL(TMP1255, "delegator", 9);
STRING_LITERAL(TMP1256, "importcpp", 9);
STRING_LITERAL(TMP1257, "importobjc", 10);
STRING_LITERAL(TMP1258, "importcompilerproc", 18);
STRING_LITERAL(TMP1259, "importc", 7);
STRING_LITERAL(TMP1260, "exportc", 7);
STRING_LITERAL(TMP1261, "incompletestruct", 16);
STRING_LITERAL(TMP1262, "requiresinit", 12);
STRING_LITERAL(TMP1263, "align", 5);
STRING_LITERAL(TMP1264, "nodecl", 6);
STRING_LITERAL(TMP1265, "pure", 4);
STRING_LITERAL(TMP1266, "sideeffect", 10);
STRING_LITERAL(TMP1267, "header", 6);
STRING_LITERAL(TMP1268, "nosideeffect", 12);
STRING_LITERAL(TMP1269, "gcsafe", 6);
STRING_LITERAL(TMP1270, "noreturn", 8);
STRING_LITERAL(TMP1271, "merge", 5);
STRING_LITERAL(TMP1272, "lib", 3);
STRING_LITERAL(TMP1273, "dynlib", 6);
STRING_LITERAL(TMP1274, "compilerproc", 12);
STRING_LITERAL(TMP1275, "procvar", 7);
STRING_LITERAL(TMP1276, "fatal", 5);
STRING_LITERAL(TMP1277, "error", 5);
STRING_LITERAL(TMP1278, "warning", 7);
STRING_LITERAL(TMP1279, "hint", 4);
STRING_LITERAL(TMP1280, "line", 4);
STRING_LITERAL(TMP1281, "push", 4);
STRING_LITERAL(TMP1282, "pop", 3);
STRING_LITERAL(TMP1283, "define", 6);
STRING_LITERAL(TMP1284, "undef", 5);
STRING_LITERAL(TMP1285, "linedir", 7);
STRING_LITERAL(TMP1286, "stacktrace", 10);
STRING_LITERAL(TMP1287, "linetrace", 9);
STRING_LITERAL(TMP1288, "link", 4);
STRING_LITERAL(TMP1289, "compile", 7);
STRING_LITERAL(TMP1290, "linksys", 7);
STRING_LITERAL(TMP1291, "deprecated", 10);
STRING_LITERAL(TMP1292, "varargs", 7);
STRING_LITERAL(TMP1293, "callconv", 8);
STRING_LITERAL(TMP1294, "breakpoint", 10);
STRING_LITERAL(TMP1295, "debugger", 8);
STRING_LITERAL(TMP1296, "nimcall", 7);
STRING_LITERAL(TMP1297, "stdcall", 7);
STRING_LITERAL(TMP1298, "cdecl", 5);
STRING_LITERAL(TMP1299, "safecall", 8);
STRING_LITERAL(TMP1300, "syscall", 7);
STRING_LITERAL(TMP1301, "inline", 6);
STRING_LITERAL(TMP1302, "noinline", 8);
STRING_LITERAL(TMP1303, "fastcall", 8);
STRING_LITERAL(TMP1304, "closure", 7);
STRING_LITERAL(TMP1305, "noconv", 6);
STRING_LITERAL(TMP1306, "on", 2);
STRING_LITERAL(TMP1307, "off", 3);
STRING_LITERAL(TMP1308, "checks", 6);
STRING_LITERAL(TMP1309, "rangechecks", 11);
STRING_LITERAL(TMP1310, "boundchecks", 11);
STRING_LITERAL(TMP1311, "overflowchecks", 14);
STRING_LITERAL(TMP1312, "nilchecks", 9);
STRING_LITERAL(TMP1313, "floatchecks", 11);
STRING_LITERAL(TMP1314, "nanchecks", 9);
STRING_LITERAL(TMP1315, "infchecks", 9);
STRING_LITERAL(TMP1316, "assertions", 10);
STRING_LITERAL(TMP1317, "patterns", 8);
STRING_LITERAL(TMP1318, "warnings", 8);
STRING_LITERAL(TMP1319, "hints", 5);
STRING_LITERAL(TMP1320, "optimization", 12);
STRING_LITERAL(TMP1321, "raises", 6);
STRING_LITERAL(TMP1322, "writes", 6);
STRING_LITERAL(TMP1323, "reads", 5);
STRING_LITERAL(TMP1324, "size", 4);
STRING_LITERAL(TMP1325, "effects", 7);
STRING_LITERAL(TMP1326, "tags", 4);
STRING_LITERAL(TMP1327, "deadcodeelim", 12);
STRING_LITERAL(TMP1328, "safecode", 8);
STRING_LITERAL(TMP1329, "noforward", 9);
STRING_LITERAL(TMP1330, "pragma", 6);
STRING_LITERAL(TMP1331, "compiletime", 11);
STRING_LITERAL(TMP1332, "noinit", 6);
STRING_LITERAL(TMP1333, "passc", 5);
STRING_LITERAL(TMP1334, "passl", 5);
STRING_LITERAL(TMP1335, "borrow", 6);
STRING_LITERAL(TMP1336, "discardable", 11);
STRING_LITERAL(TMP1337, "fieldchecks", 11);
STRING_LITERAL(TMP1338, "watchpoint", 10);
STRING_LITERAL(TMP1339, "subschar", 8);
STRING_LITERAL(TMP1340, "acyclic", 7);
STRING_LITERAL(TMP1341, "shallow", 7);
STRING_LITERAL(TMP1342, "unroll", 6);
STRING_LITERAL(TMP1343, "linearscanend", 13);
STRING_LITERAL(TMP1344, "computedgoto", 12);
STRING_LITERAL(TMP1345, "injectstmt", 10);
STRING_LITERAL(TMP1346, "write", 5);
STRING_LITERAL(TMP1347, "gensym", 6);
STRING_LITERAL(TMP1348, "inject", 6);
STRING_LITERAL(TMP1349, "dirty", 5);
STRING_LITERAL(TMP1350, "inheritable", 11);
STRING_LITERAL(TMP1351, "threadvar", 9);
STRING_LITERAL(TMP1352, "emit", 4);
STRING_LITERAL(TMP1353, "asmnostackframe", 15);
STRING_LITERAL(TMP1354, "implicitstatic", 14);
STRING_LITERAL(TMP1355, "global", 6);
STRING_LITERAL(TMP1356, "codegendecl", 11);
STRING_LITERAL(TMP1357, "unchecked", 9);
STRING_LITERAL(TMP1358, "guard", 5);
STRING_LITERAL(TMP1359, "uses", 4);
STRING_LITERAL(TMP1360, "auto", 4);
STRING_LITERAL(TMP1361, "bool", 4);
STRING_LITERAL(TMP1362, "catch", 5);
STRING_LITERAL(TMP1363, "char", 4);
STRING_LITERAL(TMP1364, "class", 5);
STRING_LITERAL(TMP1365, "const_cast", 10);
STRING_LITERAL(TMP1366, "default", 7);
STRING_LITERAL(TMP1367, "delete", 6);
STRING_LITERAL(TMP1368, "double", 6);
STRING_LITERAL(TMP1369, "dynamic_cast", 12);
STRING_LITERAL(TMP1370, "explicit", 8);
STRING_LITERAL(TMP1371, "extern", 6);
STRING_LITERAL(TMP1372, "false", 5);
STRING_LITERAL(TMP1373, "float", 5);
STRING_LITERAL(TMP1374, "friend", 6);
STRING_LITERAL(TMP1375, "goto", 4);
STRING_LITERAL(TMP1376, "int", 3);
STRING_LITERAL(TMP1377, "long", 4);
STRING_LITERAL(TMP1378, "mutable", 7);
STRING_LITERAL(TMP1379, "namespace", 9);
STRING_LITERAL(TMP1380, "new", 3);
STRING_LITERAL(TMP1381, "operator", 8);
STRING_LITERAL(TMP1382, "private", 7);
STRING_LITERAL(TMP1383, "protected", 9);
STRING_LITERAL(TMP1384, "public", 6);
STRING_LITERAL(TMP1385, "register", 8);
STRING_LITERAL(TMP1386, "reinterpret_cast", 16);
STRING_LITERAL(TMP1387, "short", 5);
STRING_LITERAL(TMP1388, "signed", 6);
STRING_LITERAL(TMP1389, "sizeof", 6);
STRING_LITERAL(TMP1390, "static_cast", 11);
STRING_LITERAL(TMP1391, "struct", 6);
STRING_LITERAL(TMP1392, "switch", 6);
STRING_LITERAL(TMP1393, "this", 4);
STRING_LITERAL(TMP1394, "throw", 5);
STRING_LITERAL(TMP1395, "true", 4);
STRING_LITERAL(TMP1396, "typedef", 7);
STRING_LITERAL(TMP1397, "typeid", 6);
STRING_LITERAL(TMP1398, "typename", 8);
STRING_LITERAL(TMP1399, "union", 5);
STRING_LITERAL(TMP1400, "packed", 6);
STRING_LITERAL(TMP1401, "unsigned", 8);
STRING_LITERAL(TMP1402, "virtual", 7);
STRING_LITERAL(TMP1403, "void", 4);
STRING_LITERAL(TMP1404, "volatile", 8);
STRING_LITERAL(TMP1405, "wchar_t", 7);
STRING_LITERAL(TMP1406, "alignas", 7);
STRING_LITERAL(TMP1407, "alignof", 7);
STRING_LITERAL(TMP1408, "constexpr", 9);
STRING_LITERAL(TMP1409, "decltype", 8);
STRING_LITERAL(TMP1410, "nullptr", 7);
STRING_LITERAL(TMP1411, "noexcept", 8);
STRING_LITERAL(TMP1412, "thread_local", 12);
STRING_LITERAL(TMP1413, "static_assert", 13);
STRING_LITERAL(TMP1414, "char16_t", 8);
STRING_LITERAL(TMP1415, "char32_t", 8);
STRING_LITERAL(TMP1416, "stdin", 5);
STRING_LITERAL(TMP1417, "stdout", 6);
STRING_LITERAL(TMP1418, "stderr", 6);
STRING_LITERAL(TMP1419, "inout", 5);
STRING_LITERAL(TMP1420, "bycopy", 6);
STRING_LITERAL(TMP1421, "byref", 5);
STRING_LITERAL(TMP1422, "oneway", 6);
NIM_CONST TY168327 specialwords_168326 = {((NimStringDesc*) &TMP1171),
((NimStringDesc*) &TMP1172),
((NimStringDesc*) &TMP1173),
((NimStringDesc*) &TMP1174),
((NimStringDesc*) &TMP1175),
((NimStringDesc*) &TMP1176),
((NimStringDesc*) &TMP1177),
((NimStringDesc*) &TMP1178),
((NimStringDesc*) &TMP1179),
((NimStringDesc*) &TMP1180),
((NimStringDesc*) &TMP1181),
((NimStringDesc*) &TMP1182),
((NimStringDesc*) &TMP1183),
((NimStringDesc*) &TMP1184),
((NimStringDesc*) &TMP1185),
((NimStringDesc*) &TMP1186),
((NimStringDesc*) &TMP1187),
((NimStringDesc*) &TMP1188),
((NimStringDesc*) &TMP1189),
((NimStringDesc*) &TMP1190),
((NimStringDesc*) &TMP1191),
((NimStringDesc*) &TMP1192),
((NimStringDesc*) &TMP1193),
((NimStringDesc*) &TMP1194),
((NimStringDesc*) &TMP1195),
((NimStringDesc*) &TMP1196),
((NimStringDesc*) &TMP1197),
((NimStringDesc*) &TMP1198),
((NimStringDesc*) &TMP1199),
((NimStringDesc*) &TMP1200),
((NimStringDesc*) &TMP1201),
((NimStringDesc*) &TMP1202),
((NimStringDesc*) &TMP1203),
((NimStringDesc*) &TMP1204),
((NimStringDesc*) &TMP1205),
((NimStringDesc*) &TMP1206),
((NimStringDesc*) &TMP1207),
((NimStringDesc*) &TMP1208),
((NimStringDesc*) &TMP1209),
((NimStringDesc*) &TMP1210),
((NimStringDesc*) &TMP1211),
((NimStringDesc*) &TMP1212),
((NimStringDesc*) &TMP1213),
((NimStringDesc*) &TMP1214),
((NimStringDesc*) &TMP1215),
((NimStringDesc*) &TMP1216),
((NimStringDesc*) &TMP1217),
((NimStringDesc*) &TMP1218),
((NimStringDesc*) &TMP1219),
((NimStringDesc*) &TMP1220),
((NimStringDesc*) &TMP1221),
((NimStringDesc*) &TMP1222),
((NimStringDesc*) &TMP1223),
((NimStringDesc*) &TMP1224),
((NimStringDesc*) &TMP1225),
((NimStringDesc*) &TMP1226),
((NimStringDesc*) &TMP1227),
((NimStringDesc*) &TMP1228),
((NimStringDesc*) &TMP1229),
((NimStringDesc*) &TMP1230),
((NimStringDesc*) &TMP1231),
((NimStringDesc*) &TMP1232),
((NimStringDesc*) &TMP1233),
((NimStringDesc*) &TMP1234),
((NimStringDesc*) &TMP1235),
((NimStringDesc*) &TMP1236),
((NimStringDesc*) &TMP1237),
((NimStringDesc*) &TMP1238),
((NimStringDesc*) &TMP1239),
((NimStringDesc*) &TMP1240),
((NimStringDesc*) &TMP1241),
((NimStringDesc*) &TMP1242),
((NimStringDesc*) &TMP1243),
((NimStringDesc*) &TMP1244),
((NimStringDesc*) &TMP1245),
((NimStringDesc*) &TMP1246),
((NimStringDesc*) &TMP1247),
((NimStringDesc*) &TMP1248),
((NimStringDesc*) &TMP1249),
((NimStringDesc*) &TMP1250),
((NimStringDesc*) &TMP1251),
((NimStringDesc*) &TMP1252),
((NimStringDesc*) &TMP1253),
((NimStringDesc*) &TMP1254),
((NimStringDesc*) &TMP1255),
((NimStringDesc*) &TMP1256),
((NimStringDesc*) &TMP1257),
((NimStringDesc*) &TMP1258),
((NimStringDesc*) &TMP1259),
((NimStringDesc*) &TMP1260),
((NimStringDesc*) &TMP1261),
((NimStringDesc*) &TMP1262),
((NimStringDesc*) &TMP1263),
((NimStringDesc*) &TMP1264),
((NimStringDesc*) &TMP1265),
((NimStringDesc*) &TMP1266),
((NimStringDesc*) &TMP1267),
((NimStringDesc*) &TMP1268),
((NimStringDesc*) &TMP1269),
((NimStringDesc*) &TMP1270),
((NimStringDesc*) &TMP1271),
((NimStringDesc*) &TMP1272),
((NimStringDesc*) &TMP1273),
((NimStringDesc*) &TMP1274),
((NimStringDesc*) &TMP1275),
((NimStringDesc*) &TMP1276),
((NimStringDesc*) &TMP1277),
((NimStringDesc*) &TMP1278),
((NimStringDesc*) &TMP1279),
((NimStringDesc*) &TMP1280),
((NimStringDesc*) &TMP1281),
((NimStringDesc*) &TMP1282),
((NimStringDesc*) &TMP1283),
((NimStringDesc*) &TMP1284),
((NimStringDesc*) &TMP1285),
((NimStringDesc*) &TMP1286),
((NimStringDesc*) &TMP1287),
((NimStringDesc*) &TMP1288),
((NimStringDesc*) &TMP1289),
((NimStringDesc*) &TMP1290),
((NimStringDesc*) &TMP1291),
((NimStringDesc*) &TMP1292),
((NimStringDesc*) &TMP1293),
((NimStringDesc*) &TMP1294),
((NimStringDesc*) &TMP1295),
((NimStringDesc*) &TMP1296),
((NimStringDesc*) &TMP1297),
((NimStringDesc*) &TMP1298),
((NimStringDesc*) &TMP1299),
((NimStringDesc*) &TMP1300),
((NimStringDesc*) &TMP1301),
((NimStringDesc*) &TMP1302),
((NimStringDesc*) &TMP1303),
((NimStringDesc*) &TMP1304),
((NimStringDesc*) &TMP1305),
((NimStringDesc*) &TMP1306),
((NimStringDesc*) &TMP1307),
((NimStringDesc*) &TMP1308),
((NimStringDesc*) &TMP1309),
((NimStringDesc*) &TMP1310),
((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312),
((NimStringDesc*) &TMP1313),
((NimStringDesc*) &TMP1314),
((NimStringDesc*) &TMP1315),
((NimStringDesc*) &TMP1316),
((NimStringDesc*) &TMP1317),
((NimStringDesc*) &TMP1318),
((NimStringDesc*) &TMP1319),
((NimStringDesc*) &TMP1320),
((NimStringDesc*) &TMP1321),
((NimStringDesc*) &TMP1322),
((NimStringDesc*) &TMP1323),
((NimStringDesc*) &TMP1324),
((NimStringDesc*) &TMP1325),
((NimStringDesc*) &TMP1326),
((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328),
((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330),
((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332),
((NimStringDesc*) &TMP1333),
((NimStringDesc*) &TMP1334),
((NimStringDesc*) &TMP1335),
((NimStringDesc*) &TMP1336),
((NimStringDesc*) &TMP1337),
((NimStringDesc*) &TMP1338),
((NimStringDesc*) &TMP1339),
((NimStringDesc*) &TMP1340),
((NimStringDesc*) &TMP1341),
((NimStringDesc*) &TMP1342),
((NimStringDesc*) &TMP1343),
((NimStringDesc*) &TMP1344),
((NimStringDesc*) &TMP1345),
((NimStringDesc*) &TMP1346),
((NimStringDesc*) &TMP1347),
((NimStringDesc*) &TMP1348),
((NimStringDesc*) &TMP1349),
((NimStringDesc*) &TMP1350),
((NimStringDesc*) &TMP1351),
((NimStringDesc*) &TMP1352),
((NimStringDesc*) &TMP1353),
((NimStringDesc*) &TMP1354),
((NimStringDesc*) &TMP1355),
((NimStringDesc*) &TMP1356),
((NimStringDesc*) &TMP1357),
((NimStringDesc*) &TMP1358),
((NimStringDesc*) &TMP1359),
((NimStringDesc*) &TMP1360),
((NimStringDesc*) &TMP1361),
((NimStringDesc*) &TMP1362),
((NimStringDesc*) &TMP1363),
((NimStringDesc*) &TMP1364),
((NimStringDesc*) &TMP1365),
((NimStringDesc*) &TMP1366),
((NimStringDesc*) &TMP1367),
((NimStringDesc*) &TMP1368),
((NimStringDesc*) &TMP1369),
((NimStringDesc*) &TMP1370),
((NimStringDesc*) &TMP1371),
((NimStringDesc*) &TMP1372),
((NimStringDesc*) &TMP1373),
((NimStringDesc*) &TMP1374),
((NimStringDesc*) &TMP1375),
((NimStringDesc*) &TMP1376),
((NimStringDesc*) &TMP1377),
((NimStringDesc*) &TMP1378),
((NimStringDesc*) &TMP1379),
((NimStringDesc*) &TMP1380),
((NimStringDesc*) &TMP1381),
((NimStringDesc*) &TMP1382),
((NimStringDesc*) &TMP1383),
((NimStringDesc*) &TMP1384),
((NimStringDesc*) &TMP1385),
((NimStringDesc*) &TMP1386),
((NimStringDesc*) &TMP1387),
((NimStringDesc*) &TMP1388),
((NimStringDesc*) &TMP1389),
((NimStringDesc*) &TMP1390),
((NimStringDesc*) &TMP1391),
((NimStringDesc*) &TMP1392),
((NimStringDesc*) &TMP1393),
((NimStringDesc*) &TMP1394),
((NimStringDesc*) &TMP1395),
((NimStringDesc*) &TMP1396),
((NimStringDesc*) &TMP1397),
((NimStringDesc*) &TMP1398),
((NimStringDesc*) &TMP1399),
((NimStringDesc*) &TMP1400),
((NimStringDesc*) &TMP1401),
((NimStringDesc*) &TMP1402),
((NimStringDesc*) &TMP1403),
((NimStringDesc*) &TMP1404),
((NimStringDesc*) &TMP1405),
((NimStringDesc*) &TMP1406),
((NimStringDesc*) &TMP1407),
((NimStringDesc*) &TMP1408),
((NimStringDesc*) &TMP1409),
((NimStringDesc*) &TMP1410),
((NimStringDesc*) &TMP1411),
((NimStringDesc*) &TMP1412),
((NimStringDesc*) &TMP1413),
((NimStringDesc*) &TMP1414),
((NimStringDesc*) &TMP1415),
((NimStringDesc*) &TMP1416),
((NimStringDesc*) &TMP1417),
((NimStringDesc*) &TMP1418),
((NimStringDesc*) &TMP1419),
((NimStringDesc*) &TMP1420),
((NimStringDesc*) &TMP1421),
((NimStringDesc*) &TMP1422)}
;
extern TFrame* frameptr_13038;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NI, findstr_168334)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	NI i_168352;
	NI HEX3Atmp_168353;
	NI res_168355;
	nimfr("findStr", "wordrecg.nim")
	result = 0;
	i_168352 = 0;
	HEX3Atmp_168353 = 0;
	nimln(172, "wordrecg.nim");
	nimln(172, "wordrecg.nim");
	HEX3Atmp_168353 = (aLen0-1);
	nimln(1450, "system.nim");
	res_168355 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_168355 <= HEX3Atmp_168353)) goto LA1;
		nimln(1450, "system.nim");
		i_168352 = res_168355;
		nimln(173, "wordrecg.nim");
		{
			NI LOC4;
			nimln(173, "wordrecg.nim");
			nimln(173, "wordrecg.nim");
			if ((NU)(i_168352) >= (NU)(aLen0)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(a[i_168352], s);
			if (!(LOC4 == 0)) goto LA5;
			nimln(174, "wordrecg.nim");
			nimln(174, "wordrecg.nim");
			result = i_168352;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_168355 = addInt(res_168355, 1);
	} LA1: ;
	nimln(175, "wordrecg.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, whichkeyword_168360)(tident164019* id) {
	NU8 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(178, "wordrecg.nim");
	{
		nimln(178, "wordrecg.nim");
		if (!((*id).Sup.Id < 0)) goto LA3;
		nimln(178, "wordrecg.nim");
		result = ((NU8) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(179, "wordrecg.nim");
		result = ((NU8)chckRange((*id).Sup.Id, ((NU8) 0), ((NU8) 251)));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, whichkeyword_168367)(NimStringDesc* id) {
	NU8 result;
	tident164019* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(182, "wordrecg.nim");
	nimln(182, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_164456(id);
	result = whichkeyword_168360(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, initspecials_168373)(void) {
	NU8 s_168430;
	NU8 res_168440;
	nimfr("initSpecials", "wordrecg.nim")
	s_168430 = 0;
	nimln(1450, "system.nim");
	res_168440 = ((NU8) 1);
	nimln(1451, "system.nim");
	while (1) {
		NI LOC2;
		tident164019* LOC3;
		nimln(1451, "system.nim");
		if (!(res_168440 <= ((NU8) 251))) goto LA1;
		nimln(1450, "system.nim");
		s_168430 = res_168440;
		nimln(187, "wordrecg.nim");
		nimln(187, "wordrecg.nim");
		nimln(187, "wordrecg.nim");
		LOC2 = 0;
		LOC2 = hashignorestyle_117859(specialwords_168326[(s_168430)- 0]);
		LOC3 = 0;
		LOC3 = getident_164462(specialwords_168326[(s_168430)- 0], LOC2);
		nimln(187, "wordrecg.nim");
		(*LOC3).Sup.Id = ((NI) (s_168430));
		nimln(1453, "system.nim");
		res_168440 = addInt(res_168440, 1);
	} LA1: ;
	popFrame();
}
N_NOINLINE(void, wordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(189, "wordrecg.nim");
	initspecials_168373();
	popFrame();
}

N_NOINLINE(void, wordrecgDatInit)(void) {
}

