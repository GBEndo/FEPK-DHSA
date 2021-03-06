
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1215
  naval_base = { size = 10 current_size = 10 }
}              # Qingdao
province =
{ id         = 1237
  naval_base = { size = 10 current_size = 10 }
}              # Shanghai
province =
{ id       = 1238
  air_base = { size = 10 current_size = 10 }
}            # Hangzhou
province =
{ id       = 1244
  air_base = { size = 1 current_size = 1 }
}            # Fuzhou
province =
{ id       = 1251
  air_base = { size = 10 current_size = 10 }
}            # Nanchang
province =
{ id       = 1360
  air_base = { size = 3 current_size = 3 }
} 
province =
{ id         = 1264
  energy = 54
} 
#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1235 # Nanjing
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 10
  manpower               = 1800
  dissent                = 20
  transports             = 10
  escorts                = 2
  transports             = 10
  escorts                = 2
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    free_market       = 5
    freedom           = 4
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  # Fujian		
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
                             1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
                             1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
                             1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
                             1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
                             1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
                             1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438 1306 1326
                           }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
                             1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
                             1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
                           }
  # Fujian		
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
                             1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
                             1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
                           }
  # Fujian		
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 2150 2290 3010 3070 3080 3130 4010 4120 5080 5090 6210 8050 9010 }
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 0 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
  }
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52162 }
  foreignminister        = { type = 9 id = 52041 }
  armamentminister       = { type = 9 id = 52158 }
  ministerofsecurity     = { type = 9 id = 52005 }
  ministerofintelligence = { type = 9 id = 52006 }
  chiefofstaff           = { type = 9 id = 52007 }
  chiefofarmy            = { type = 9 id = 52008 }
  chiefofnavy            = { type = 9 id = 52009 }
  chiefofair             = { type = 9 id = 52010 }
  dormant_leaders        = { 50370 50377 
  #�R���w����
  50000 50031 50186 50374 50085 50174 50300 50314 50348 50235 50236 50237 50238 50218 50228 50232 
  }
  dormant_ministers      = { 52155 
  #�R���t��
  52231 52232 52234 52235 52236 52237 52238 52239 52114 52211 52212 52213 52214 52215 52216 52217 52218 52220 52221 52222 52223 52224 52225 52226 52227 52228 52229 52230 52201 52202 52203 52204 52205 52206 52207 52208 52209 52210
  }
  # CHINA 1936 Land OOB
  # Advance Persuiter
  landunit =
  { location = 1280 # changed from Lanzhou
    name     = "��1�R"
    # ## leader = # Chen Jicheng
    id       = { type = 22000 id = 1 }
    division =
    { experience = 20
      id         = { type = 22000 id = 2 }
      name       = "��1�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1361 # changed from Lanzhou
    name     = "�V��1�R"
    leader   = 50285 # Deng Baoshan
    id       = { type = 22000 id = 142 }
    division =
    { experience = 20
      id         = { type = 22000 id = 143 }
      name       = "�V��1�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1360 # changed from Lanzhou
    name     = "�Ïl�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 268 }
    division =
    { experience = 20
      id         = { type = 22000 id = 269 }
      name       = "�Ïl�ۈ���"
      type       = militia
      model      = 0
    }
  }
  # dig_in = 20.000 
  # #########
  # Zunyi Invader
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��7�R"
    leader   = 50082 # Zeng Wanzhong
    id       = { type = 22000 id = 18 }
    division =
    { experience = 20
      id         = { type = 22000 id = 19 }
      name       = "��7�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��37�R"
    leader   = 50241 # Mao Pingwen
    id       = { type = 22000 id = 90 }
    division =
    { experience = 20
      id         = { type = 22000 id = 91 }
      name       = "��37�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��46�R"
    # ## leader = # Fan Songfu
    id       = { type = 22000 id = 119 }
    division =
    { experience = 20
      id         = { type = 22000 id = 120 }
      name       = "��46�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��57�R"
    # ## leader = # Dong Yingbin
    id       = { type = 22000 id = 133 }
    division =
    { experience = 20
      id         = { type = 22000 id = 134 }
      name       = "��57�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��67�R"
    leader   = 50319 # Wang Yizhe
    id       = { type = 22000 id = 138 }
    division =
    { experience = 20
      id         = { type = 22000 id = 139 }
      name       = "��67�R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  landunit =
  { location = 1262 # changed from Xi'an
    name     = "��4���R"
    leader   = 50340 # Yang Hucheng
    id       = { type = 22000 id = 163 }
    division =
    { experience = 20
      id         = { type = 22000 id = 164 }
      name       = "��4���R"
      type       = infantry
      model      = 0
    }
  }
  # dig_in = 20.000 
  # #########
  landunit =
  { location = 1244 # Fuzhou
    name     = "��14�R"
    leader   = 50329 # Wei Lihuang
    id       = { type = 22000 id = 30 }
    division =
    { experience = 20
      id         = { type = 22000 id = 31 }
      name       = "��14�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "��22�R"
    # ## leader = # Tan Taoyuan
    id       = { type = 22000 id = 54 }
    division =
    { experience = 20
      id         = { type = 22000 id = 55 }
      name       = "��22�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "��27�R"
    leader   = 50208 # Liu Xing
    id       = { type = 22000 id = 65 }
    division =
    { experience = 20
      id         = { type = 22000 id = 66 }
      name       = "��27�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "��30�R"
    leader   = 50266 # Sun Lianzhong
    id       = { type = 22000 id = 72 }
    division =
    { experience = 20
      id         = { type = 22000 id = 73 }
      name       = "��30�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1278 # Baoji
    name     = "��38�R"
    leader   = 50270 # Sun Weiru
    id       = { type = 22000 id = 93 }
    division =
    { experience = 20
      id         = { type = 22000 id = 94 }
      name       = "��38�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1240 # Wenzhou
    name     = "��39�R"
    leader   = 50206 # Liu Heding
    id       = { type = 22000 id = 95 }
    division =
    { experience = 20
      id         = { type = 22000 id = 96 }
      name       = "��39�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1224 # Anyang
    name     = "��40�R"
    leader   = 50250 # Pang Bingxun
    id       = { type = 22000 id = 97 }
    division =
    { experience = 20
      id         = { type = 22000 id = 98 }
      name       = "��40�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "��51�R"
    leader   = 50010 # Yu Xuezhong (Zhang Xuezhong substituted)
    id       = { type = 22000 id = 124 }
    division =
    { experience = 20
      id         = { type = 22000 id = 125 }
      name       = "��51�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1241 # Quzhou
    name     = "��4���R"
    # ## leader = #
    id       = { type = 22000 id = 151 }
    division =
    { experience = 20
      id         = { type = 22000 id = 152 }
      name       = "��4���R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "��20���R"
    leader   = 50007 # Zhang Fang
    id       = { type = 22000 id = 165 }
    division =
    { experience = 20
      id         = { type = 22000 id = 166 }
      name       = "��20���R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1220 # Yangzhou
    name     = "��26���R"
    # ## leader = #
    id       = { type = 22000 id = 168 }
    division =
    { experience = 20
      id         = { type = 22000 id = 169 }
      name       = "��26���R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "��2�����t"
    leader   = 50043 # Zheng Dongguo
    id       = { type = 22000 id = 170 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 171 }
      name         = "��2�����t"
      type         = infantry
      max_strength = 80
      strength     = 80
      model        = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "��21�����t"
    leader   = 50176 # Li Xianzhou
    id       = { type = 22000 id = 172 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 173 }
      name         = "��21�����t"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1219 # Xiangfan
    name     = "��51�����t"
    leader   = 50326 # Wang Yaoyu
    id       = { type = 22000 id = 176 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 177 }
      name         = "��51�����t"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "�]���i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 178 }
    division =
    { experience = 20
      id         = { type = 22000 id = 179 }
      name       = "�]���i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "�����i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 194 }
    division =
    { experience = 20
      id         = { type = 22000 id = 195 }
      name       = "�����i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1222 # Fuyang
    name     = "���J�i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 208 }
    division =
    { experience = 20
      id         = { type = 22000 id = 209 }
      name       = "���J�i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "�͓�i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 211 }
    division =
    { experience = 20
      id         = { type = 22000 id = 212 }
      name       = "�͓�i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "�Ζk�i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 224 }
    division =
    { experience = 20
      id         = { type = 22000 id = 225 }
      name       = "�Ζk�i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "���k�i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 232 }
    division =
    { experience = 20
      id         = { type = 22000 id = 233 }
      name       = "���k�i�ߕ�"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "��������"
    leader   = 50156 # Gui Yongqing
    id       = { type = 22000 id = 242 }
    division =
    { experience = 20
      id         = { type = 22000 id = 243 }
      name       = "��������"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1217 # Lianyungang
    name     = "���x���c"
    leader   = 50125 # Huang Jie
    id       = { type = 22000 id = 244 }
    division =
    { experience = 20
      id         = { type = 22000 id = 245 }
      name       = "�Ŋ֌x�@��1����"
      type       = infantry
      model      = 0
    }
    division =
    { experience = 20
      id         = { type = 22000 id = 246 }
      name       = "�Ŋ֌x�@��2����"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Shanghai
    name     = "��C�x����"
    leader   = 50339 # Yang Hu
    id       = { type = 22000 id = 247 }
    division =
    { experience = 20
      id         = { type = 22000 id = 248 }
      name       = "��C�x����"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Ningbo
    name     = "�C�����c"
    # ## leader = #
    id       = { type = 22000 id = 251 }
    division =
    { experience = 20
      id         = { type = 22000 id = 252 }
      name       = "�C�����c"
      type       = garrison
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "�]�h�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 254 }
    division =
    { experience = 20
      id         = { type = 22000 id = 255 }
      name       = "�]�h�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1233 # Anqing
    name     = "���J�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 256 }
    division =
    { experience = 20
      id         = { type = 22000 id = 257 }
      name       = "���J�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "���]�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 258 }
    division =
    { experience = 20
      id         = { type = 22000 id = 259 }
      name       = "���]�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "�Γ�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 260 }
    division =
    { experience = 20
      id         = { type = 22000 id = 261 }
      name       = "�Γ�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1253 # Wuchang
    name     = "�Ζk�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 262 }
    division =
    { experience = 20
      id         = { type = 22000 id = 263 }
      name       = "�Ζk�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "�͓�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 264 }
    division =
    { experience = 20
      id         = { type = 22000 id = 265 }
      name       = "�͓�ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "�]���ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 274 }
    division =
    { experience = 20
      id         = { type = 22000 id = 275 }
      name       = "�]���ۈ���"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "�����ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 276 }
    division =
    { id         = { type = 22000 id = 278 }
      experience = 20
      name       = "�����ۈ���"
      type       = militia
      model      = 0
    }
  }
  # China 1936 Naval OOB
  navalunit =
  { location = 1237 # Shanghai
    base     = 1237
    name     = "��1�͑�"
    id       = { type = 22000 id = 300 }
    division =
    { id    = { type = 22000 id = 301 }
      name  = "�J�C"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 22000 id = 302 }
      name  = "�䐐"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 303 }
      name  = "���a"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 304 }
      name  = "�C��"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 307 }
      name  = "��1�쒀�͑��"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 308 }
      name  = "��2�쒀�͑��"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 309 }
      name  = "��1�^�A�͑��"
      type  = transport
      model = 0
    }
  }
  # China 1936 Airforce OOB
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 400 }
    name     = "��1��R"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 401 }
      name         = "��1��R"
      max_strength = 60
      strength     = 54
      type         = tactical_bomber
      model        = 0
    }
  }
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 407 }
    name     = "��2��R"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 408 }
      name         = "��2��R"
      max_strength = 60
      strength     = 52
      type         = interceptor
      model        = 0
    }
  }
}
