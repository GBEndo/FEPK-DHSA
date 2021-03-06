##############################
# Country definition for CXB #
##############################

#####################
# Country main data #
#####################
country =
{ tag                    = CXB
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 2
  puppet                 = CHI
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1442 # Golmud
  manpower               = 200
  dissent                = 25
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  nationalprovinces      = { 1442 1441 1273 1440 1443 1276 1275 1274 1444 1439 }
  ownedprovinces         = { 1442 1441 1273 1440 1443 1274 1444 1439 1270 1271 1275 }
  controlledprovinces    = { 1442 1441 1273 1440 1443 1274 1444 1439 1270 1271 1275 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 3
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 6 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 504001 }
  headofgovernment       = { type = 9 id = 504002 }
  foreignminister        = { type = 9 id = 504003 }
  armamentminister       = { type = 9 id = 504004 }
  ministerofsecurity     = { type = 9 id = 504005 }
  ministerofintelligence = { type = 9 id = 504006 }
  chiefofstaff           = { type = 9 id = 504007 }
  chiefofarmy            = { type = 9 id = 504008 }
  chiefofnavy            = { type = 9 id = 504009 }
  chiefofair             = { type = 9 id = 504010 }
  # ######
  # XIBEI SAN MA OOB
  # ######
  landunit =
  { location = 1440
    name     = "��15���R"
    # ## leader = 504004 # Ma Hongkui
    id       = { type = 22200 id = 1 }
    division =
    { experience = 30
      id         = { type = 22200 id = 2 }
      name       = "��35�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1441
    name     = "��11�R"
    # ## leader = 504005 # Ma Hongbin
    id       = { type = 22200 id = 3 }
    division =
    { experience = 30
      id         = { type = 22200 id = 4 }
      name       = "��7�V�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22200 id = 6 }
      name       = "��10�Ɨ��t"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1443
    division =
    { experience   = 30
      id           = { type = 22200 id = 5 }
      name         = "��7�V�R���t"
      type         = cavalry
      max_strength = 100
      strength     = 100
      model        = 0
    }
  }
  landunit =
  { location = 1444
    division =
    { experience = 30
      id         = { type = 22200 id = 9 }
      name       = "��1�R���t"
      type       = cavalry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1441
    name     = "��2�V�R"
    # ## leader = 504006 # Ma Hongbin
    id       = { type = 22200 id = 7 }
    division =
    { experience = 30
      id         = { type = 22200 id = 8 }
      name       = "��9�V�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1441
    name     = "�g�D���K�j�X�^���R"
    # ## leader = # Ma Hushan
    id       = { type = 22200 id = 11 }
    division =
    { experience = 30
      id         = { type = 22200 id = 12 }
      name       = "�g�D���K���t"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1442
    name     = "��3�R"
    # ## leader = # Zeng Wanzhong
    id       = { type = 22000 id = 9 }
    division =
    { experience = 30
      id         = { type = 22000 id = 10 }
      name       = "��3�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1442
    name     = "��10�R"
    # ## leader = 50112 # Xu Yuanquan
    id       = { type = 22000 id = 23 }
    division =
    { experience = 30
      id         = { type = 22000 id = 24 }
      name       = "��10�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1442
    name     = "��15�R"
    # ## leader = 50214 # Liu Mao'en
    id       = { type = 22000 id = 33 }
    division =
    { id    = { type = 22000 id = 34 }
      name  = "��15�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1442
    name     = "��25�R"
    # ## leader = 50307 # Wan Yaohuang
    id       = { type = 22000 id = 60 }
    division =
    { experience = 30
      id         = { type = 22000 id = 61 }
      name       = "��25�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1442
    name     = "��31�R"
    # ## leader = # Liang Guanying
    id       = { type = 22000 id = 75 }
    division =
    { experience = 30
      id         = { type = 22000 id = 76 }
      name       = "��31�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1442
    name     = "��41�R"
    # ## leader = 50263 # Sun Zhen
    id       = { type = 22000 id = 99 }
    division =
    { experience = 30
      id         = { type = 22000 id = 100 }
      name       = "��41�R"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1442
    name     = "��25�����t"
    # ## leader = 50154 # Guan Linzheng
    id       = { type = 22000 id = 174 }
    division =
    { experience   = 30
      id           = { type = 22000 id = 175 }
      name         = "��25�����t"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
    dig_in   = 20.000
  }
}
