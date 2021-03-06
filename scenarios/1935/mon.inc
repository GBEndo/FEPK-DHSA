
##############################
# Country definition for MON #
##############################

province =
{ id       = 1404
  air_base = { size = 1 current_size = 1 }
}            # Ulan Bator

#####################
# Country main data #
#####################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 7
  capital                = 1404
  diplomacy =
  { relation = { tag = CHC value = 25 }
    relation = { tag = MON value = 150 }
    relation = { tag = TAN value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 6 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1206 1208 1209 1207 1272 1273 1274 1386 1398 1439 1418 1520 1384 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }
  landunit =
  { location = 1404
    name     = "�����S���E�i�C�����_�t�R"
    id       = { type = 30500 id = 1 }
    division =
    { id    = { type = 30500 id = 2 }
      name  = "�����S����1�_�����t�c"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30500 id = 3 }
      name = "�i�C�����_�t��2�R���t�c"
      type = cavalry
    }
    division =
    { id   = { type = 30500 id = 4 }
      name = "�i�C�����_�t��3�����t�c"
      type = militia
    }
    division =
    { id   = { type = 30500 id = 5 }
      name = "�i�C�����_�t��4�����t�c"
      type = militia
    }
  }
}
