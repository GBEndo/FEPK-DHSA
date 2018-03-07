
##############################
# Country definition for AFG #
##############################

country =
{ tag                    = AFG
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 110
  capital                = 1486
  diplomacy =
  { relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  nationalprovinces      = { 1486 1493 1492 1484 }
  ownedprovinces         = { 1486 1493 1492 1484 }
  controlledprovinces    = { 1486 1493 1492 1484 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 1010 1190 2150 2290 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    free_market       = 7
    freedom           = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }
  headofstate            = { type = 9 id = 54001 }
  headofgovernment       = { type = 9 id = 54002 }
  foreignminister        = { type = 9 id = 54003 }
  armamentminister       = { type = 9 id = 54004 }
  ministerofsecurity     = { type = 9 id = 54005 }
  ministerofintelligence = { type = 9 id = 54006 }
  chiefofstaff           = { type = 9 id = 54007 }
  chiefofarmy            = { type = 9 id = 54008 }
  chiefofnavy            = { type = 9 id = 54009 }
  chiefofair             = { type = 9 id = 54010 }
  # GW Cavalry
  # ####################
  # ##AFGHANISTAN OOB###
  # ####################
  landunit =
  { id       = { type = 10000 id = 1 }
    location = 1486
    name     = "アフガニスタン王立軍"
    division =
    { id       = { type = 10000 id = 11 }
      name     = "王立衛兵隊"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 10000 id = 2 }
      name     = "ファイザーバード民兵隊"
      strength = 80
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 3 }
      name     = "ガズニ民兵隊"
      strength = 70
      type     = militia
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 10000 id = 4 }
    location = 1486
    name     = "ヘラート軍"
    division =
    { id       = { type = 10000 id = 5 }
      name     = "ヘラート民兵隊"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 6 }
      name     = "ヘラート騎兵隊"
      strength = 30
      type     = cavalry
    }
  }
  # ##########################
  # ###########################
  landunit =
  { id       = { type = 10000 id = 7 }
    location = 1493 # Various Mixed Divisions, each based at different city humped in one landunit#
    name     = "カンダハル軍"
    division =
    { id       = { type = 10000 id = 8 }
      name     = "ジャララバード民兵隊"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 9 }
      name     = "カンダハル民兵隊"
      strength = 100
      type     = militia
    }
  }
}
