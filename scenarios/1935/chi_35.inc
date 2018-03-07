##############################
# Country definition for CHI #
##############################
province = {
  id = 1215 # ê¬ìá
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1237 # è„äC
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1238 # çYèB
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 1244 # ïüèB
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1251 # ìÏèπ
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 1264 # â∂é{
  energy = 54
}
province = {
  id = 1360 # ê¨ìs
  air_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  capital            = 1235 # ìÏãû
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
    relation = { tag = CYN value = 0 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
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

  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272 1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394 1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443 1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320 1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438 1306 1326 }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 }
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 }

  techapps               = { 1010 1190 2290 3010 3070 3080 3130 4010 4120 5080 5090 6210 8050 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52001 } # ó—êX (ÉäÉìÅEÉZÉì)
  headofgovernment       = { type = 9 id = 52162 } # üäíõñ¡ (ÉèÉìÅEÉ`ÉÉÉIÉ~Éì)
  foreignminister        = { type = 9 id = 52041 } # üäíõñ¡ (ÉèÉìÅEÉ`ÉÉÉIÉ~Éì)
  armamentminister       = { type = 9 id = 52158 } # çEèÀ‡Ü (ÉNÉìÅEÉVÉÉÉìÉV)
  ministerofsecurity     = { type = 9 id = 52005 } # í¬â ïv (É`ÉFÉìÅEÉNÉIÉt)
  ministerofintelligence = { type = 9 id = 52006 } # í¬óßïv (É`ÉFÉìÅEÉäÉtÅ[)
  chiefofstaff           = { type = 9 id = 52007 } # è”âÓêŒ (É`ÉAÉìÅEÉJÉCÉVÉFÉN)
  chiefofarmy            = { type = 9 id = 52008 } # í£õ{ó« (É`ÉÉÉìÅEÉXÉGÉäÉÉÉì)
  chiefofnavy            = { type = 9 id = 52009 } # í¬è–ä∞ (É`ÉFÉìÅEÉVÉÉÉIÉNÉ@Éì)
  chiefofair             = { type = 9 id = 52010 } # é¸éäè_ (É`ÉáÉEÅEÉ`Å[ÉWÉáÉE)
  dormant_leaders        = { 50370 50377 50000 50031 50186 50374 50085 50174 50300 50314 50348 50235 50236 50237 50238 50218 50228 50232 }
  dormant_ministers      = { 52155 52231 52232 52234 52235 52236 52237 52238 52239 52114 52211 52212 52213 52214 52215 52216 52217 52218 52220 52221 52222 52223 52224 52225 52226 52227 52228 52229 52230 52201 52202 52203 52204 52205 52206 52207 52208 52209 52210 }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "ëÊ1åR"
    location = 1280
    division = {
      id             = { type = 22000 id = 2 }
      name           = "ëÊ1åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 142 }
    name     = "êVëÊ1åR"
    location = 1361
    leader   = 50285
    division = {
      id             = { type = 22000 id = 143 }
      name           = "êVëÊ1åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 268 }
    name     = "ä√èlï€à¿ë‡"
    location = 1360
    division = {
      id             = { type = 22000 id = 269 }
      name           = "ä√èlï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 18 }
    name     = "ëÊ7åR"
    location = 1262
    leader   = 50082
    division = {
      id             = { type = 22000 id = 19 }
      name           = "ëÊ7åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 90 }
    name     = "ëÊ37åR"
    location = 1262
    leader   = 50241
    division = {
      id             = { type = 22000 id = 91 }
      name           = "ëÊ37åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 119 }
    name     = "ëÊ46åR"
    location = 1262
    division = {
      id             = { type = 22000 id = 120 }
      name           = "ëÊ46åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 133 }
    name     = "ëÊ57åR"
    location = 1262
    division = {
      id             = { type = 22000 id = 134 }
      name           = "ëÊ57åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 138 }
    name     = "ëÊ67åR"
    location = 1262
    leader   = 50319
    division = {
      id             = { type = 22000 id = 139 }
      name           = "ëÊ67åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 163 }
    name     = "ëÊ4ó§åR"
    location = 1262
    leader   = 50340
    division = {
      id             = { type = 22000 id = 164 }
      name           = "ëÊ4ó§åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 30 }
    name     = "ëÊ14åR"
    location = 1244
    leader   = 50329
    division = {
      id             = { type = 22000 id = 31 }
      name           = "ëÊ14åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 54 }
    name     = "ëÊ22åR"
    location = 1254
    division = {
      id             = { type = 22000 id = 55 }
      name           = "ëÊ22åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 65 }
    name     = "ëÊ27åR"
    location = 1254
    leader   = 50208
    division = {
      id             = { type = 22000 id = 66 }
      name           = "ëÊ27åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 72 }
    name     = "ëÊ30åR"
    location = 1227
    leader   = 50266
    division = {
      id             = { type = 22000 id = 73 }
      name           = "ëÊ30åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 93 }
    name     = "ëÊ38åR"
    location = 1278
    leader   = 50270
    division = {
      id             = { type = 22000 id = 94 }
      name           = "ëÊ38åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 95 }
    name     = "ëÊ39åR"
    location = 1240
    leader   = 50206
    division = {
      id             = { type = 22000 id = 96 }
      name           = "ëÊ39åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 97 }
    name     = "ëÊ40åR"
    location = 1224
    leader   = 50250
    division = {
      id             = { type = 22000 id = 98 }
      name           = "ëÊ40åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 124 }
    name     = "ëÊ51åR"
    location = 1269
    leader   = 50010
    division = {
      id             = { type = 22000 id = 125 }
      name           = "ëÊ51åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 151 }
    name     = "ëÊ4ó§åR"
    location = 1241
    division = {
      id             = { type = 22000 id = 152 }
      name           = "ëÊ4ó§åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 165 }
    name     = "ëÊ20ó§åR"
    location = 1251
    leader   = 50007
    division = {
      id             = { type = 22000 id = 166 }
      name           = "ëÊ20ó§åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 168 }
    name     = "ëÊ26ó§åR"
    location = 1220
    division = {
      id             = { type = 22000 id = 169 }
      name           = "ëÊ26ó§åR"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 170 }
    name     = "ëÊ2ï‡ï∫ét"
    location = 1235
    leader   = 50043
    division = {
      id             = { type = 22000 id = 171 }
      name           = "ëÊ2ï‡ï∫ét"
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
    name     = "ëÊ21ï‡ï∫ét"
    location = 1238
    leader   = 50176
    division = {
      id             = { type = 22000 id = 173 }
      name           = "ëÊ21ï‡ï∫ét"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 176 }
    name     = "ëÊ51ï‡ï∫ét"
    location = 1219
    leader   = 50326
    division = {
      id             = { type = 22000 id = 177 }
      name           = "ëÊ51ï‡ï∫ét"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 178 }
    name     = "ç]êºéióﬂïî"
    location = 1231
    division = {
      id             = { type = 22000 id = 179 }
      name           = "ç]êºéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 194 }
    name     = "ïüåöéióﬂïî"
    location = 1244
    division = {
      id             = { type = 22000 id = 195 }
      name           = "ïüåöéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 208 }
    name     = "à¿ãJéióﬂïî"
    location = 1222
    division = {
      id             = { type = 22000 id = 209 }
      name           = "à¿ãJéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 211 }
    name     = "âÕìÏéióﬂïî"
    location = 1223
    division = {
      id             = { type = 22000 id = 212 }
      name           = "âÕìÏéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 224 }
    name     = "åŒñkéióﬂïî"
    location = 1232
    division = {
      id             = { type = 22000 id = 225 }
      name           = "åŒñkéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 232 }
    name     = "êºñkéióﬂïî"
    location = 1232
    division = {
      id             = { type = 22000 id = 233 }
      name           = "êºñkéióﬂïî"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 242 }
    name     = "ã≥ì±ëçë‡"
    location = 1235
    leader   = 50156
    division = {
      id             = { type = 22000 id = 243 }
      name           = "ã≥ì±ëçë‡"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 244 }
    name     = "êÖåxëçíc"
    location = 1217
    leader   = 50125
    division = {
      id             = { type = 22000 id = 245 }
      name           = "ê≈ä÷åxé@ëÊ1ï™ë‡"
      type           = infantry
      model          = 0
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 246 }
      name           = "ê≈ä÷åxé@ëÊ2ï™ë‡"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 247 }
    name     = "è„äCåxîıë‡"
    location = 1237
    leader   = 50339
    division = {
      id             = { type = 22000 id = 248 }
      name           = "è„äCåxîıë‡"
      type           = infantry
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 251 }
    name     = "äCï∫ó∑íc"
    location = 1237
    division = {
      id             = { type = 22000 id = 252 }
      name           = "äCï∫ó∑íc"
      type           = garrison
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 254 }
    name     = "ç]ëhï€à¿ë‡"
    location = 1235
    division = {
      id             = { type = 22000 id = 255 }
      name           = "ç]ëhï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 256 }
    name     = "à¿ãJï€à¿ë‡"
    location = 1233
    division = {
      id             = { type = 22000 id = 257 }
      name           = "à¿ãJï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 258 }
    name     = "ü¥ç]ï€à¿ë‡"
    location = 1238
    division = {
      id             = { type = 22000 id = 259 }
      name           = "ü¥ç]ï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 260 }
    name     = "åŒìÏï€à¿ë‡"
    location = 1255
    division = {
      id             = { type = 22000 id = 261 }
      name           = "åŒìÏï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 262 }
    name     = "åŒñkï€à¿ë‡"
    location = 1253
    division = {
      id             = { type = 22000 id = 263 }
      name           = "åŒñkï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 264 }
    name     = "âÕìÏï€à¿ë‡"
    location = 1223
    division = {
      id             = { type = 22000 id = 265 }
      name           = "âÕìÏï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 274 }
    name     = "ç]êºï€à¿ë‡"
    location = 1251
    division = {
      id             = { type = 22000 id = 275 }
      name           = "ç]êºï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 276 }
    name     = "ïüåöï€à¿ë‡"
    location = 1244
    division = {
      id             = { type = 22000 id = 278 }
      name           = "ïüåöï€à¿ë‡"
      type           = militia
      model          = 0
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 22000 id = 300 }
    name     = "ëÊ1äÕë‡"
    location = 1237
    base     = 1237
    division = {
      id             = { type = 22000 id = 301 }
      name           = "îJäC"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 22000 id = 302 }
      name           = "ú‰êê"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 303 }
      name           = "î£òa"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 304 }
      name           = "äCíø"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 307 }
      name           = "ëÊ1ãÏíÄäÕëÂë‡"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 308 }
      name           = "ëÊ2ãÏíÄäÕëÂë‡"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 309 }
      name           = "ëÊ1â^óAäÕëÂë‡"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22000 id = 400 }
    name     = "ëÊ1ãÛåR"
    location = 1251
    base     = 1251
    division = {
      id             = { type = 22000 id = 401 }
      name           = "ëÊ1ãÛåR"
      type           = tactical_bomber
      model          = 0
      strength       = 54
      max_strength   = 60
    }
  }
  airunit = { 
    id       = { type = 22000 id = 407 }
    name     = "ëÊ2ãÛåR"
    location = 1251
    base     = 1251
    division = {
      id             = { type = 22000 id = 408 }
      name           = "ëÊ2ãÛåR"
      type           = interceptor
      model          = 0
      strength       = 52
      max_strength   = 60
    }
  }
}
