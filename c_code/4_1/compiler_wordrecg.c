/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY150314[31];
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY150316[248];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_150323)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, whichkeyword_150346)(tident141017* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU8, whichkeyword_150353)(NimStringDesc* id);
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_150359)(void);
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_110856)(NimStringDesc* x);
NIM_CONST TY150314 cppnimsharedkeywords_150313 = {
0x10, 0x1B, 0xAA, 0x12, 0x00, 0x02, 0x40, 0x1C,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1147, "", 0);
STRING_LITERAL(TMP1148, "addr", 4);
STRING_LITERAL(TMP1149, "and", 3);
STRING_LITERAL(TMP1150, "as", 2);
STRING_LITERAL(TMP1151, "asm", 3);
STRING_LITERAL(TMP1152, "atomic", 6);
STRING_LITERAL(TMP1153, "bind", 4);
STRING_LITERAL(TMP1154, "block", 5);
STRING_LITERAL(TMP1155, "break", 5);
STRING_LITERAL(TMP1156, "case", 4);
STRING_LITERAL(TMP1157, "cast", 4);
STRING_LITERAL(TMP1158, "const", 5);
STRING_LITERAL(TMP1159, "continue", 8);
STRING_LITERAL(TMP1160, "converter", 9);
STRING_LITERAL(TMP1161, "discard", 7);
STRING_LITERAL(TMP1162, "distinct", 8);
STRING_LITERAL(TMP1163, "div", 3);
STRING_LITERAL(TMP1164, "do", 2);
STRING_LITERAL(TMP1165, "elif", 4);
STRING_LITERAL(TMP1166, "else", 4);
STRING_LITERAL(TMP1167, "end", 3);
STRING_LITERAL(TMP1168, "enum", 4);
STRING_LITERAL(TMP1169, "except", 6);
STRING_LITERAL(TMP1170, "export", 6);
STRING_LITERAL(TMP1171, "finally", 7);
STRING_LITERAL(TMP1172, "for", 3);
STRING_LITERAL(TMP1173, "from", 4);
STRING_LITERAL(TMP1174, "generic", 7);
STRING_LITERAL(TMP1175, "if", 2);
STRING_LITERAL(TMP1176, "import", 6);
STRING_LITERAL(TMP1177, "in", 2);
STRING_LITERAL(TMP1178, "include", 7);
STRING_LITERAL(TMP1179, "interface", 9);
STRING_LITERAL(TMP1180, "is", 2);
STRING_LITERAL(TMP1181, "isnot", 5);
STRING_LITERAL(TMP1182, "iterator", 8);
STRING_LITERAL(TMP1183, "lambda", 6);
STRING_LITERAL(TMP1184, "let", 3);
STRING_LITERAL(TMP1185, "macro", 5);
STRING_LITERAL(TMP1186, "method", 6);
STRING_LITERAL(TMP1187, "mixin", 5);
STRING_LITERAL(TMP1188, "using", 5);
STRING_LITERAL(TMP1189, "mod", 3);
STRING_LITERAL(TMP1190, "nil", 3);
STRING_LITERAL(TMP1191, "not", 3);
STRING_LITERAL(TMP1192, "notin", 5);
STRING_LITERAL(TMP1193, "object", 6);
STRING_LITERAL(TMP1194, "of", 2);
STRING_LITERAL(TMP1195, "or", 2);
STRING_LITERAL(TMP1196, "out", 3);
STRING_LITERAL(TMP1197, "proc", 4);
STRING_LITERAL(TMP1198, "ptr", 3);
STRING_LITERAL(TMP1199, "raise", 5);
STRING_LITERAL(TMP1200, "ref", 3);
STRING_LITERAL(TMP1201, "return", 6);
STRING_LITERAL(TMP1202, "shared", 6);
STRING_LITERAL(TMP1203, "shl", 3);
STRING_LITERAL(TMP1204, "shr", 3);
STRING_LITERAL(TMP1205, "static", 6);
STRING_LITERAL(TMP1206, "template", 8);
STRING_LITERAL(TMP1207, "try", 3);
STRING_LITERAL(TMP1208, "tuple", 5);
STRING_LITERAL(TMP1209, "type", 4);
STRING_LITERAL(TMP1210, "var", 3);
STRING_LITERAL(TMP1211, "when", 4);
STRING_LITERAL(TMP1212, "while", 5);
STRING_LITERAL(TMP1213, "with", 4);
STRING_LITERAL(TMP1214, "without", 7);
STRING_LITERAL(TMP1215, "xor", 3);
STRING_LITERAL(TMP1216, "yield", 5);
STRING_LITERAL(TMP1217, ":", 1);
STRING_LITERAL(TMP1218, "::", 2);
STRING_LITERAL(TMP1219, "=", 1);
STRING_LITERAL(TMP1220, ".", 1);
STRING_LITERAL(TMP1221, "..", 2);
STRING_LITERAL(TMP1222, "*", 1);
STRING_LITERAL(TMP1223, "-", 1);
STRING_LITERAL(TMP1224, "magic", 5);
STRING_LITERAL(TMP1225, "thread", 6);
STRING_LITERAL(TMP1226, "final", 5);
STRING_LITERAL(TMP1227, "profiler", 8);
STRING_LITERAL(TMP1228, "objchecks", 9);
STRING_LITERAL(TMP1229, "destroy", 7);
STRING_LITERAL(TMP1230, "immediate", 9);
STRING_LITERAL(TMP1231, "destructor", 10);
STRING_LITERAL(TMP1232, "delegator", 9);
STRING_LITERAL(TMP1233, "importcpp", 9);
STRING_LITERAL(TMP1234, "importobjc", 10);
STRING_LITERAL(TMP1235, "importcompilerproc", 18);
STRING_LITERAL(TMP1236, "importc", 7);
STRING_LITERAL(TMP1237, "exportc", 7);
STRING_LITERAL(TMP1238, "incompletestruct", 16);
STRING_LITERAL(TMP1239, "requiresinit", 12);
STRING_LITERAL(TMP1240, "align", 5);
STRING_LITERAL(TMP1241, "nodecl", 6);
STRING_LITERAL(TMP1242, "pure", 4);
STRING_LITERAL(TMP1243, "sideeffect", 10);
STRING_LITERAL(TMP1244, "header", 6);
STRING_LITERAL(TMP1245, "nosideeffect", 12);
STRING_LITERAL(TMP1246, "noreturn", 8);
STRING_LITERAL(TMP1247, "merge", 5);
STRING_LITERAL(TMP1248, "lib", 3);
STRING_LITERAL(TMP1249, "dynlib", 6);
STRING_LITERAL(TMP1250, "compilerproc", 12);
STRING_LITERAL(TMP1251, "procvar", 7);
STRING_LITERAL(TMP1252, "fatal", 5);
STRING_LITERAL(TMP1253, "error", 5);
STRING_LITERAL(TMP1254, "warning", 7);
STRING_LITERAL(TMP1255, "hint", 4);
STRING_LITERAL(TMP1256, "line", 4);
STRING_LITERAL(TMP1257, "push", 4);
STRING_LITERAL(TMP1258, "pop", 3);
STRING_LITERAL(TMP1259, "define", 6);
STRING_LITERAL(TMP1260, "undef", 5);
STRING_LITERAL(TMP1261, "linedir", 7);
STRING_LITERAL(TMP1262, "stacktrace", 10);
STRING_LITERAL(TMP1263, "linetrace", 9);
STRING_LITERAL(TMP1264, "link", 4);
STRING_LITERAL(TMP1265, "compile", 7);
STRING_LITERAL(TMP1266, "linksys", 7);
STRING_LITERAL(TMP1267, "deprecated", 10);
STRING_LITERAL(TMP1268, "varargs", 7);
STRING_LITERAL(TMP1269, "callconv", 8);
STRING_LITERAL(TMP1270, "breakpoint", 10);
STRING_LITERAL(TMP1271, "debugger", 8);
STRING_LITERAL(TMP1272, "nimcall", 7);
STRING_LITERAL(TMP1273, "stdcall", 7);
STRING_LITERAL(TMP1274, "cdecl", 5);
STRING_LITERAL(TMP1275, "safecall", 8);
STRING_LITERAL(TMP1276, "syscall", 7);
STRING_LITERAL(TMP1277, "inline", 6);
STRING_LITERAL(TMP1278, "noinline", 8);
STRING_LITERAL(TMP1279, "fastcall", 8);
STRING_LITERAL(TMP1280, "closure", 7);
STRING_LITERAL(TMP1281, "noconv", 6);
STRING_LITERAL(TMP1282, "on", 2);
STRING_LITERAL(TMP1283, "off", 3);
STRING_LITERAL(TMP1284, "checks", 6);
STRING_LITERAL(TMP1285, "rangechecks", 11);
STRING_LITERAL(TMP1286, "boundchecks", 11);
STRING_LITERAL(TMP1287, "overflowchecks", 14);
STRING_LITERAL(TMP1288, "nilchecks", 9);
STRING_LITERAL(TMP1289, "floatchecks", 11);
STRING_LITERAL(TMP1290, "nanchecks", 9);
STRING_LITERAL(TMP1291, "infchecks", 9);
STRING_LITERAL(TMP1292, "assertions", 10);
STRING_LITERAL(TMP1293, "patterns", 8);
STRING_LITERAL(TMP1294, "warnings", 8);
STRING_LITERAL(TMP1295, "hints", 5);
STRING_LITERAL(TMP1296, "optimization", 12);
STRING_LITERAL(TMP1297, "raises", 6);
STRING_LITERAL(TMP1298, "writes", 6);
STRING_LITERAL(TMP1299, "reads", 5);
STRING_LITERAL(TMP1300, "size", 4);
STRING_LITERAL(TMP1301, "effects", 7);
STRING_LITERAL(TMP1302, "tags", 4);
STRING_LITERAL(TMP1303, "deadcodeelim", 12);
STRING_LITERAL(TMP1304, "safecode", 8);
STRING_LITERAL(TMP1305, "noforward", 9);
STRING_LITERAL(TMP1306, "pragma", 6);
STRING_LITERAL(TMP1307, "compiletime", 11);
STRING_LITERAL(TMP1308, "noinit", 6);
STRING_LITERAL(TMP1309, "passc", 5);
STRING_LITERAL(TMP1310, "passl", 5);
STRING_LITERAL(TMP1311, "borrow", 6);
STRING_LITERAL(TMP1312, "discardable", 11);
STRING_LITERAL(TMP1313, "fieldchecks", 11);
STRING_LITERAL(TMP1314, "watchpoint", 10);
STRING_LITERAL(TMP1315, "subschar", 8);
STRING_LITERAL(TMP1316, "acyclic", 7);
STRING_LITERAL(TMP1317, "shallow", 7);
STRING_LITERAL(TMP1318, "unroll", 6);
STRING_LITERAL(TMP1319, "linearscanend", 13);
STRING_LITERAL(TMP1320, "computedgoto", 12);
STRING_LITERAL(TMP1321, "injectstmt", 10);
STRING_LITERAL(TMP1322, "write", 5);
STRING_LITERAL(TMP1323, "gensym", 6);
STRING_LITERAL(TMP1324, "inject", 6);
STRING_LITERAL(TMP1325, "dirty", 5);
STRING_LITERAL(TMP1326, "inheritable", 11);
STRING_LITERAL(TMP1327, "threadvar", 9);
STRING_LITERAL(TMP1328, "emit", 4);
STRING_LITERAL(TMP1329, "nostackframe", 12);
STRING_LITERAL(TMP1330, "implicitstatic", 14);
STRING_LITERAL(TMP1331, "global", 6);
STRING_LITERAL(TMP1332, "codegendecl", 11);
STRING_LITERAL(TMP1333, "auto", 4);
STRING_LITERAL(TMP1334, "bool", 4);
STRING_LITERAL(TMP1335, "catch", 5);
STRING_LITERAL(TMP1336, "char", 4);
STRING_LITERAL(TMP1337, "class", 5);
STRING_LITERAL(TMP1338, "const_cast", 10);
STRING_LITERAL(TMP1339, "default", 7);
STRING_LITERAL(TMP1340, "delete", 6);
STRING_LITERAL(TMP1341, "double", 6);
STRING_LITERAL(TMP1342, "dynamic_cast", 12);
STRING_LITERAL(TMP1343, "explicit", 8);
STRING_LITERAL(TMP1344, "extern", 6);
STRING_LITERAL(TMP1345, "false", 5);
STRING_LITERAL(TMP1346, "float", 5);
STRING_LITERAL(TMP1347, "friend", 6);
STRING_LITERAL(TMP1348, "goto", 4);
STRING_LITERAL(TMP1349, "int", 3);
STRING_LITERAL(TMP1350, "long", 4);
STRING_LITERAL(TMP1351, "mutable", 7);
STRING_LITERAL(TMP1352, "namespace", 9);
STRING_LITERAL(TMP1353, "new", 3);
STRING_LITERAL(TMP1354, "operator", 8);
STRING_LITERAL(TMP1355, "private", 7);
STRING_LITERAL(TMP1356, "protected", 9);
STRING_LITERAL(TMP1357, "public", 6);
STRING_LITERAL(TMP1358, "register", 8);
STRING_LITERAL(TMP1359, "reinterpret_cast", 16);
STRING_LITERAL(TMP1360, "short", 5);
STRING_LITERAL(TMP1361, "signed", 6);
STRING_LITERAL(TMP1362, "sizeof", 6);
STRING_LITERAL(TMP1363, "static_cast", 11);
STRING_LITERAL(TMP1364, "struct", 6);
STRING_LITERAL(TMP1365, "switch", 6);
STRING_LITERAL(TMP1366, "this", 4);
STRING_LITERAL(TMP1367, "throw", 5);
STRING_LITERAL(TMP1368, "true", 4);
STRING_LITERAL(TMP1369, "typedef", 7);
STRING_LITERAL(TMP1370, "typeid", 6);
STRING_LITERAL(TMP1371, "typename", 8);
STRING_LITERAL(TMP1372, "union", 5);
STRING_LITERAL(TMP1373, "unsigned", 8);
STRING_LITERAL(TMP1374, "virtual", 7);
STRING_LITERAL(TMP1375, "void", 4);
STRING_LITERAL(TMP1376, "volatile", 8);
STRING_LITERAL(TMP1377, "wchar_t", 7);
STRING_LITERAL(TMP1378, "alignas", 7);
STRING_LITERAL(TMP1379, "alignof", 7);
STRING_LITERAL(TMP1380, "constexpr", 9);
STRING_LITERAL(TMP1381, "decltype", 8);
STRING_LITERAL(TMP1382, "nullptr", 7);
STRING_LITERAL(TMP1383, "noexcept", 8);
STRING_LITERAL(TMP1384, "thread_local", 12);
STRING_LITERAL(TMP1385, "static_assert", 13);
STRING_LITERAL(TMP1386, "char16_t", 8);
STRING_LITERAL(TMP1387, "char32_t", 8);
STRING_LITERAL(TMP1388, "stdin", 5);
STRING_LITERAL(TMP1389, "stdout", 6);
STRING_LITERAL(TMP1390, "stderr", 6);
STRING_LITERAL(TMP1391, "inout", 5);
STRING_LITERAL(TMP1392, "bycopy", 6);
STRING_LITERAL(TMP1393, "byref", 5);
STRING_LITERAL(TMP1394, "oneway", 6);
NIM_CONST TY150316 specialwords_150315 = {((NimStringDesc*) &TMP1147),
((NimStringDesc*) &TMP1148),
((NimStringDesc*) &TMP1149),
((NimStringDesc*) &TMP1150),
((NimStringDesc*) &TMP1151),
((NimStringDesc*) &TMP1152),
((NimStringDesc*) &TMP1153),
((NimStringDesc*) &TMP1154),
((NimStringDesc*) &TMP1155),
((NimStringDesc*) &TMP1156),
((NimStringDesc*) &TMP1157),
((NimStringDesc*) &TMP1158),
((NimStringDesc*) &TMP1159),
((NimStringDesc*) &TMP1160),
((NimStringDesc*) &TMP1161),
((NimStringDesc*) &TMP1162),
((NimStringDesc*) &TMP1163),
((NimStringDesc*) &TMP1164),
((NimStringDesc*) &TMP1165),
((NimStringDesc*) &TMP1166),
((NimStringDesc*) &TMP1167),
((NimStringDesc*) &TMP1168),
((NimStringDesc*) &TMP1169),
((NimStringDesc*) &TMP1170),
((NimStringDesc*) &TMP1171),
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
((NimStringDesc*) &TMP1394)}
;
extern TFrame* frameptr_12037;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI, findstr_150323)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	NI i_150338;
	NI HEX3Atmp_150339;
	NI res_150341;
	nimfr("findStr", "wordrecg.nim")
	result = 0;
	i_150338 = 0;
	HEX3Atmp_150339 = 0;
	nimln(170, "wordrecg.nim");
	nimln(170, "wordrecg.nim");
	HEX3Atmp_150339 = (aLen0-1);
	nimln(1301, "system.nim");
	res_150341 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_150341 <= HEX3Atmp_150339)) goto LA1;
		nimln(1301, "system.nim");
		i_150338 = res_150341;
		nimln(171, "wordrecg.nim");
		{
			NI LOC4;
			nimln(171, "wordrecg.nim");
			nimln(171, "wordrecg.nim");
			if ((NU)(i_150338) >= (NU)(aLen0)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(a[i_150338], s);
			if (!(LOC4 == 0)) goto LA5;
			nimln(172, "wordrecg.nim");
			nimln(172, "wordrecg.nim");
			result = i_150338;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_150341 = addInt(res_150341, 1);
	} LA1: ;
	nimln(173, "wordrecg.nim");
	result = -1;
	BeforeRet: ;	popFrame();
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
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NU8, whichkeyword_150346)(tident141017* id) {
	NU8 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(176, "wordrecg.nim");
	{
		nimln(176, "wordrecg.nim");
		if (!((*id).Sup.Id < 0)) goto LA3;
		nimln(176, "wordrecg.nim");
		result = ((NU8) 0);
	}	goto LA1;
	LA3: ;
	{
		nimln(177, "wordrecg.nim");
		result = ((NU8)chckRange((*id).Sup.Id, ((NU8) 0), ((NU8) 247)));
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NU8, whichkeyword_150353)(NimStringDesc* id) {
	NU8 result;
	tident141017* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(180, "wordrecg.nim");
	nimln(180, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_141443(id);
	result = whichkeyword_150346(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, initspecials_150359)(void) {
	NU8 s_150401;
	NU8 res_150410;
	nimfr("initSpecials", "wordrecg.nim")
	s_150401 = 0;
	nimln(1301, "system.nim");
	res_150410 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		NI LOC2;
		tident141017* LOC3;
		nimln(1302, "system.nim");
		if (!(res_150410 <= ((NU8) 247))) goto LA1;
		nimln(1301, "system.nim");
		s_150401 = res_150410;
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		LOC2 = 0;
		LOC2 = hashignorestyle_110856(specialwords_150315[(s_150401)- 0]);
		LOC3 = 0;
		LOC3 = getident_141449(specialwords_150315[(s_150401)- 0], LOC2);
		nimln(185, "wordrecg.nim");
		(*LOC3).Sup.Id = ((NI) (s_150401));
		nimln(1304, "system.nim");
		res_150410 = addInt(res_150410, 1);
	} LA1: ;
	popFrame();
}N_NOINLINE(void, compilerwordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(187, "wordrecg.nim");
	initspecials_150359();	popFrame();
}

N_NOINLINE(void, compilerwordrecgDatInit)(void) {
}

