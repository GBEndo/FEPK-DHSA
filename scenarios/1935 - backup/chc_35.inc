
##############################
# Country definition for CHC #
##############################

province = { id = 1282 ic = 1 } # �N��m�J���e�B���n

#####################
# Country main data #
#####################

country =
{ tag                    = CHC
  intrinsic_gov_type     = leninist
  extra_tc               = 7
  capital                = 1282
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 800
  money                  = 50
  manpower               = 350
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    free_market       = 1
    freedom           = 2
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 5
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CHC" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 8 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 6 }
  nationalprovinces      = { 1305 1293 1282 1281 1327 1307 1308 1309 1325 1320 1321 1319 1310 1318 1312 1311 1313 1317 1314 1360 1361 1362 1363 1364
                             1365 1277 1275 1269 1268 1267 1266 1279 1280 1265 1264 1263 1262 1261 1260 1259 1258 1257 1256 1255 1254 1253 1252 1251
                             1250 1249 1248 1247 1246 1245 1244 1243 1242 1241 1240 1239 1238 1237 1236 1235 1234 1233 1232 1231 1230 1229 1228 1227
                             1226 1225 1224 1223 1222 1221 1220 1219 1218 1217 1216 1215 1214 1213 1212 1211 1210 1209 1208 1207 1206 1205 1270 1271
                             1273 1203 1204 1394 1395 1396 1397 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1398 1386 1388 1202 1323
                             1322 1324 1439 1440 1441 1442 1443 1444 1448 1450 1451 1452 1453 1283 1421 1433 1432 1435 1445 1447 1446 1431 1430 1274
                             1276 1294 1315 1272 1278
			     1420 1434 1436 1419 1404 1437 1438 1399 1385 1316 1315 1306 1326
                           }
  ownedprovinces         = { 1282 }
  controlledprovinces    = { 1282 }
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1110 1190 14080 2150 2290 4010 5080 6210 6300 6310 }
  blueprints             = { 1020 }
  diplomacy =
  { relation = { tag = JAP value = -200 }
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
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51003 }
  armamentminister       = { type = 9 id = 51004 }
  ministerofsecurity     = { type = 9 id = 51005 }
  ministerofintelligence = { type = 9 id = 51006 }
  chiefofstaff           = { type = 9 id = 51007 }
  chiefofarmy            = { type = 9 id = 51008 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }
  dormant_leaders = { 76511	#���w�ǁi�H�j
   }
  # ######
  # COMMUNSIT CHINA OOB
  # ######
  landunit =
  { location = 1282
    name     = "��1���ʌR"
    id       = { type = 24000 id = 1 }
    division =
    { experience = 60
      id         = { type = 24000 id = 2 }
      name       = "��1�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 3 }
      name       = "��3�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 4 }
      name       = "��5�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 5 }
      name       = "��8�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 6 }
      name       = "��9�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1282
    name     = "��2���ʌR"
    id       = { type = 24000 id = 7 }
    division =
    { experience = 60
      id         = { type = 24000 id = 8 }
      name       = "��2�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 9 }
      name       = "��6�R�c"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1282
    name     = "��4���ʌR"
    leader   = 76302 # Zhang Guotao
    id       = { type = 24000 id = 10 }
    division =
    { experience = 60
      id         = { type = 24000 id = 11 }
      name       = "��4�R"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 12 }
      name       = "��9�R"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 13 }
      name       = "��30�R"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 14 }
      name       = "��31�R"
      type       = infantry
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1282
    name     = "��15�R�c"
    id       = { type = 24000 id = 15 }
    division =
    { experience = 60
      id         = { type = 24000 id = 16 }
      name       = "��25�R"
      strength   = 25
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 17 }
      name       = "��26�R"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 18 }
      name       = "��27�R"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 19 }
      name       = "��28�R"
      strength   = 25
      type       = bergsjaeger
      model      = 1
    }
    dig_in   = 20.000
  }
}
