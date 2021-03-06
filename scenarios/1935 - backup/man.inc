
##############################
# Country definition for MAN #
##############################

province =
{ id       = 1379
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}            # �����_�m�n���r���n
province =
{ id         = 1390
  energy = 14
  metal = 7
  rare_materials = 4
} 
province =
{ id         = 1395
  metal = 14
  rare_materials = 3
} 
#####################
# Country main data #
#####################

country =
{ tag                    = MAN
  puppet                 = JAP
  control                = JAP
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 100
  money                  = 10
  manpower               = 100
  capital                = 1390
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 4
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy =
  { relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }
  nationalprovinces      = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1397 1398 1386 1202 1366 1367 1368 1369 1370  1371 1372 1373 1527 1528 1529 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 
			     8010 8020 8050 3070 3080 3090
			     3010 3020 3030 3190 3200 3210
			     3400 3410 3470 3420 3480 3130 3140 3150
			     3250 3260 3270 3280 3320 3330 3340
			     12100 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 58001 }
  headofgovernment       = { type = 9 id = 58002 }
  foreignminister        = { type = 9 id = 58003 }
  armamentminister       = { type = 9 id = 58004 }
  ministerofsecurity     = { type = 9 id = 58005 }
  ministerofintelligence = { type = 9 id = 58006 }
  chiefofstaff           = { type = 9 id = 58007 }
  chiefofarmy            = { type = 9 id = 58008 }
  chiefofnavy            = { type = 9 id = 58009 }
  chiefofair             = { type = 9 id = 58010 }
  # Basic Construction Engineering Development Process

}
