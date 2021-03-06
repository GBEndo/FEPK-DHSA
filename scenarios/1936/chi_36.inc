##############################
# Country definition for CHI #
##############################
province = {
  id = 1215 # ��
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1237 # ��C
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1238 # �Y�B
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 1244 # ���B
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1251 # �쏹
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 1360 # ���s
  air_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  capital            = 1235 # �싞
  dissent            = 20
  manpower           = 1800
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 10
  transports     = 10
  escorts        = 2

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 1 }

  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272 1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394 1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443 1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320 1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438 1306 1326 }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 }
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 }

  techapps               = { 1010 1190 2150 2290 3010 3070 3080 3130 4010 4120 5080 5090 6210 8050 9010 }
  blueprints             = { 6300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52001 } # �ѐX (�����E�Z��)
  headofgovernment       = { type = 9 id = 52002 } # �Ӊ�� (�`�A���E�J�C�V�F�N)
  foreignminister        = { type = 9 id = 52003 } # ���Q (�`�����E�c��)
  armamentminister       = { type = 9 id = 52241 } # ���C���i�E�[�E�f�B���`�����j
  ministerofsecurity     = { type = 9 id = 52157 } # ����� (�w�E�C���L��)
  ministerofintelligence = { type = 9 id = 52006 } # ���v (�`�F���E���t�[)
  chiefofstaff           = { type = 9 id = 52007 } # �Ӊ�� (�`�A���E�J�C�V�F�N)
  chiefofarmy            = { type = 9 id = 52008 } # ���{�� (�`�����E�X�G������)
  chiefofnavy            = { type = 9 id = 52009 } # �Њ� (�`�F���E�V���I�N�@��)
  chiefofair             = { type = 9 id = 52010 } # �����_ (�`���E�E�`�[�W���E)
  dormant_leaders        = { 50370 50377 
  #�R���w����
  50000 50031 50186 50374 50085 50174 50300 50314 50348 50235 50236 50237 50238 50218 50228 50232 
  }
  dormant_ministers      = { 52155 
  #�R���t��
  52231 52232 52234 52235 52236 52237 52238 52239 52114 52211 52212 52213 52214 52215 52216 52217 52218 52220 52221 52222 52223 52224 52225 52226 52227 52228 52229 52230 52201 52202 52203 52204 52205 52206 52207 52208 52209 52210
  }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "��1�R"
    location = 1276
    division = {
      id             = { type = 22000 id = 2 }
      name           = "��1�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 18 }
    name     = "��7�R"
    location = 1269
    leader   = 50082
    division = {
      id             = { type = 22000 id = 19 }
      name           = "��7�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 30 }
    name     = "��14�R"
    location = 1244
    leader   = 50329
    division = {
      id             = { type = 22000 id = 31 }
      name           = "��14�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 54 }
    name     = "��22�R"
    location = 1254
    division = {
      id             = { type = 22000 id = 55 }
      name           = "��22�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 65 }
    name     = "��27�R"
    location = 1254
    leader   = 50208
    division = {
      id             = { type = 22000 id = 66 }
      name           = "��27�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 72 }
    name     = "��30�R"
    location = 1227
    leader   = 50266
    division = {
      id             = { type = 22000 id = 73 }
      name           = "��30�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 90 }
    name     = "��37�R"
    location = 1269
    leader   = 50241
    division = {
      id             = { type = 22000 id = 91 }
      name           = "��37�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 93 }
    name     = "��38�R"
    location = 1278
    leader   = 50270
    division = {
      id             = { type = 22000 id = 94 }
      name           = "��38�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 95 }
    name     = "��39�R"
    location = 1240
    leader   = 50206
    division = {
      id             = { type = 22000 id = 96 }
      name           = "��39�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 97 }
    name     = "��40�R"
    location = 1224
    leader   = 50250
    division = {
      id             = { type = 22000 id = 98 }
      name           = "��40�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 119 }
    name     = "��46�R"
    location = 1269
    division = {
      id             = { type = 22000 id = 120 }
      name           = "��46�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 124 }
    name     = "��51�R"
    location = 1269
    leader   = 50010
    division = {
      id             = { type = 22000 id = 125 }
      name           = "��51�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 133 }
    name     = "��57�R"
    location = 1269
    division = {
      id             = { type = 22000 id = 134 }
      name           = "��57�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 138 }
    name     = "��67�R"
    location = 1269
    leader   = 50319
    division = {
      id             = { type = 22000 id = 139 }
      name           = "��67�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 142 }
    name     = "�V��1�R"
    location = 1276
    leader   = 50285
    division = {
      id             = { type = 22000 id = 143 }
      name           = "�V��1�R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 151 }
    name     = "��4���R"
    location = 1241
    division = {
      id             = { type = 22000 id = 152 }
      name           = "��4���R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 163 }
    name     = "��5���R"
    location = 1269
    leader   = 50340
    division = {
      id             = { type = 22000 id = 164 }
      name           = "��5���R"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 165 }
    name     = "��20���R"
    location = 1251
    leader   = 50007
    division = {
      id             = { type = 22000 id = 166 }
      name           = "��20���R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 168 }
    name     = "��26���R"
    location = 1220
    division = {
      id             = { type = 22000 id = 169 }
      name           = "��26���R"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 170 }
    name     = "��2�����t"
    location = 1235
    leader   = 50043
    division = {
      id             = { type = 22000 id = 171 }
      name           = "��2�����t"
      type           = infantry
      model          = 0
      strength       = 80
      max_strength   = 80
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 172 }
    name     = "��21�����t"
    location = 1238
    leader   = 50176
    division = {
      id             = { type = 22000 id = 173 }
      name           = "��21�����t"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 176 }
    name     = "��51�����t"
    location = 1219
    leader   = 50326
    division = {
      id             = { type = 22000 id = 177 }
      name           = "��51�����t"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 178 }
    name     = "�]���i�ߕ�"
    location = 1231
    division = {
      id             = { type = 22000 id = 179 }
      name           = "�]���i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 194 }
    name     = "�����i�ߕ�"
    location = 1244
    division = {
      id             = { type = 22000 id = 195 }
      name           = "�����i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 208 }
    name     = "���J�i�ߕ�"
    location = 1222
    division = {
      id             = { type = 22000 id = 209 }
      name           = "���J�i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 211 }
    name     = "�͓�i�ߕ�"
    location = 1223
    division = {
      id             = { type = 22000 id = 212 }
      name           = "�͓�i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 224 }
    name     = "�Ζk�i�ߕ�"
    location = 1232
    division = {
      id             = { type = 22000 id = 225 }
      name           = "�Ζk�i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 232 }
    name     = "���k�i�ߕ�"
    location = 1232
    division = {
      id             = { type = 22000 id = 233 }
      name           = "���k�i�ߕ�"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 242 }
    name     = "��������"
    location = 1235
    leader   = 50156
    division = {
      id             = { type = 22000 id = 243 }
      name           = "��������"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 244 }
    name     = "���x���c"
    location = 1217
    leader   = 50125
    division = {
      id             = { type = 22000 id = 245 }
      name           = "�Ŋ֌x�@��1����"
      type           = infantry
      model          = 0
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 246 }
      name           = "�Ŋ֌x�@��2����"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 247 }
    name     = "��C�x����"
    location = 1237
    leader   = 50339
    division = {
      id             = { type = 22000 id = 248 }
      name           = "��C�x����"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 251 }
    name     = "�C�����c"
    location = 1237
    division = {
      id             = { type = 22000 id = 252 }
      name           = "�C�����c"
      type           = garrison
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 254 }
    name     = "�]�h�ۈ���"
    location = 1235
    division = {
      id             = { type = 22000 id = 255 }
      name           = "�]�h�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 256 }
    name     = "���J�ۈ���"
    location = 1233
    division = {
      id             = { type = 22000 id = 257 }
      name           = "���J�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 258 }
    name     = "���]�ۈ���"
    location = 1238
    division = {
      id             = { type = 22000 id = 259 }
      name           = "���]�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 260 }
    name     = "�Γ�ۈ���"
    location = 1255
    division = {
      id             = { type = 22000 id = 261 }
      name           = "�Γ�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 262 }
    name     = "�Ζk�ۈ���"
    location = 1253
    division = {
      id             = { type = 22000 id = 263 }
      name           = "�Ζk�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 264 }
    name     = "�͓�ۈ���"
    location = 1223
    division = {
      id             = { type = 22000 id = 265 }
      name           = "�͓�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 268 }
    name     = "�Ïl�ۈ���"
    location = 1276
    division = {
      id             = { type = 22000 id = 269 }
      name           = "�Ïl�ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 274 }
    name     = "�]���ۈ���"
    location = 1251
    division = {
      id             = { type = 22000 id = 275 }
      name           = "�]���ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 276 }
    name     = "�����ۈ���"
    location = 1244
    division = {
      id             = { type = 22000 id = 278 }
      name           = "�����ۈ���"
      type           = militia
      model          = 0
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 22000 id = 300 }
    name     = "��1�͑�"
    location = 1237
    base     = 1237
    division = {
      id             = { type = 22000 id = 301 }
      name           = "�J�C"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 22000 id = 302 }
      name           = "�䐐"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 303 }
      name           = "���a"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 304 }
      name           = "�C��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 307 }
      name           = "��1�쒀�͑��"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 308 }
      name           = "��2�쒀�͑��"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 309 }
      name           = "��1�^�A�͑��"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22000 id = 400 }
    name     = "��1��R"
    location = 1251
    base     = 1251
    division = {
      id             = { type = 22000 id = 401 }
      name           = "��1��R"
      type           = tactical_bomber
      model          = 0
      strength       = 54
      max_strength   = 60
    }
  }
  airunit = { 
    id       = { type = 22000 id = 407 }
    name     = "��2��R"
    location = 1251
    base     = 1251
    division = {
      id             = { type = 22000 id = 408 }
      name           = "��2��R"
      type           = interceptor
      model          = 0
      strength       = 52
      max_strength   = 60
    }
  }
}
