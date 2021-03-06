##############################
# Country definition for CHC #
##############################
province = {
  id = 1270 # ũz
  landfort = { size = 6 current_size = 6 }
}
province = {
  id = 1271 # Ā
  landfort = { size = 7 current_size = 7 }
}
province = {
  id = 1275 # ―y
  landfort = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHC
  intrinsic_gov_type = leninist
  capital            = 1271 # Ā
  extra_tc           = 7
  manpower           = 350
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 800
  money          = 50
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = SOV value = 100 }
    relation = { tag = MON value = 25 }
    relation = { tag = SIK value = 40 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 1305 1293 1282 1281 1327 1307 1308 1309 1325 1320 1321 1319 1310 1318 1312 1311 1313 1317 1314 1360 1361 1362 1363 1364 1365 1277 1275 1269 1268 1267 1266 1279 1280 1265 1264 1263 1262 1261 1260 1259 1258 1257 1256 1255 1254 1253 1252 1251 1250 1249 1248 1247 1246 1245 1244 1243 1242 1241 1240 1239 1238 1237 1236 1235 1234 1233 1232 1231 1230 1229 1228 1227 1226 1225 1224 1223 1222 1221 1220 1219 1218 1217 1216 1215 1214 1213 1212 1211 1210 1209 1208 1207 1206 1205 1270 1271 1273 1203 1204 1394 1395 1396 1397 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1398 1386 1388 1202 1323 1322 1324 1439 1440 1441 1442 1443 1444 1448 1450 1451 1452 1453 1283 1421 1433 1432 1435 1445 1447 1446 1431 1430 1274 1276 1294 1315 1272 1278 1420 1434 1436 1419 1404 1437 1438 1399 1385 1316 1315 1306 1326 }
  ownedprovinces         = { 1271 1270 1275 }
  controlledprovinces    = { 1271 1270 1275 }

  techapps               = { 1010 1110 1190 14080 2150 2290 4010 5080 6210 6300 6310 }
  blueprints             = { 1020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 2
    free_market       = 1
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 51001 } # ŅāV (}IEcH[g)
  headofgovernment       = { type = 9 id = 51002 } # ŅāV (}IEcH[g)
  foreignminister        = { type = 9 id = 51003 } # ĪŌË (E`AVA)
  armamentminister       = { type = 9 id = 51004 } # Ņ (E{[`[)
  ministerofsecurity     = { type = 9 id = 51005 } # ÓoÆ (V[E`[c@C)
  ministerofintelligence = { type = 9 id = 51006 } # _ (EPk)
  chiefofstaff           = { type = 9 id = 51007 } # éúš (aEhD[)
  chiefofarmy            = { type = 9 id = 51008 } # éúš (aEhD[)
  chiefofnavy            = { type = 9 id = 51009 } # åJĪõ (VIEWK)
  chiefofair             = { type = 9 id = 51010 } # ûq (t@EcFC)
  dormant_leaders = { 76511	#ĢwĮiHj
   }

  landunit = {
    id       = { type = 24000 id = 1 }
    name     = "æ1ûĘR"
    location = 1271
    division = {
      id             = { type = 24000 id = 2 }
      name           = "æ1Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 3 }
      name           = "æ3Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 4 }
      name           = "æ5Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 5 }
      name           = "æ8Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 6 }
      name           = "æ9Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 7 }
    name     = "æ2ûĘR"
    location = 1275
    division = {
      id             = { type = 24000 id = 8 }
      name           = "æ2Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 9 }
      name           = "æ6Rc"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 10 }
    name     = "æ4ûĘR"
    location = 1275
    leader   = 76302
    division = {
      id             = { type = 24000 id = 11 }
      name           = "æ4R"
      type           = infantry
      model          = 1
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 12 }
      name           = "æ9R"
      type           = infantry
      model          = 1
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 13 }
      name           = "æ30R"
      type           = infantry
      model          = 1
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 14 }
      name           = "æ31R"
      type           = infantry
      model          = 1
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 15 }
    name     = "æ15Rc"
    location = 1270
    division = {
      id             = { type = 24000 id = 16 }
      name           = "æ25R"
      type           = infantry
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 17 }
      name           = "æ26R"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 18 }
      name           = "æ27R"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 19 }
      name           = "æ28R"
      type           = bergsjaeger
      model          = 1
      strength       = 25
      experience     = 60
    }
    dig_in   = 20.000
  }
}
