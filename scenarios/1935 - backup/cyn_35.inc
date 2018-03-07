
##############################
# Country definition for CYN #
##############################

country =
{ tag                    = CYN
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 4
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1307 # Kunming
  manpower               = 200
  dissent                = 25
  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = 200 }
  }
  # Xikang 1282
  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 1281 }
  # Xikang 1282
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 1281 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 7
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  SpyInfo                = { country = "SIA" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }
  # ######
  # CHINA 1936 OOB
  # ######
  landunit =
  { location = 1307 # Kunming
    name     = "â_ìÏåxîıë‡"
    leader   = 501006 # Long Yun
    id       = { type = 22100 id = 1 }
    division =
    { id       = { type = 22100 id = 2 }
      name     = "ëÊ21ì∆óßó∑"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 3 }
      name     = "ëÊ22ì∆óßó∑"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 4 }
      name     = "ëÊ23ì∆óßó∑"
      type     = infantry
      strength = 50
      model    = 0
    }
  }
  landunit =
  { location = 1281 # changed from Kangding
    name     = "ëÊ24åR"
    leader   = 501004 # Liu Wenhui
    id       = { type = 22100 id = 11 }
    division =
    { id       = { type = 22100 id = 12 }
      name     = "ëÊ136ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 13 }
      name     = "ëÊ137ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "élêÏï€à¿ë‡"
    # ## leader = #
    id       = { type = 22000 id = 270 }
    division =
    { id    = { type = 22000 id = 271 }
      name  = "élêÏï€à¿ë‡"
      type  = militia
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "ëÊ47åR"
    # ## leader = 50171 # Li Jiayu
    id       = { type = 22000 id = 122 }
    division =
    { id    = { type = 22000 id = 123 }
      name  = "ëÊ47åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "ëÊ21åR"
    # ## leader = 50207 # Liu Xiang
    id       = { type = 22000 id = 49 }
    division =
    { id    = { type = 22000 id = 50 }
      name  = "ëÊ21åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "ëÊ23åR"
    # ## leader = 50248 # Pan Wenhua
    id       = { type = 22000 id = 57 }
    division =
    { id    = { type = 22000 id = 58 }
      name  = "ëÊ23åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "ëÊ44åR"
    # ## leader = 50323 # Wang Zuanxu
    id       = { type = 22000 id = 109 }
    division =
    { id    = { type = 22000 id = 110 }
      name  = "ëÊ44åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "ëÊ45åR"
    # ## leader = 50284 # Deng Xihou
    id       = { type = 22000 id = 113 }
    division =
    { id    = { type = 22000 id = 114 }
      name  = "ëÊ45åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "ëÊ7ó§åR"
    # ## leader = #
    id       = { type = 22000 id = 156 }
    division =
    { id    = { type = 22000 id = 157 }
      name  = "ëÊ7ó§åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "ëÊ4åR"
    # ## leader = 50332 # Wu Qiwei
    id       = { type = 22000 id = 12 }
    division =
    { id    = { type = 22000 id = 13 }
      name  = "ëÊ4åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "ëÊ5åR"
    # ## leader = 50115 # Xue Yue
    id       = { type = 22000 id = 15 }
    division =
    { id    = { type = 22000 id = 16 }
      name  = "ëÊ5åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "ëÊ20åR"
    # ## leader = 50343 # Yang Sen
    id       = { type = 22000 id = 45 }
    division =
    { id    = { type = 22000 id = 46 }
      name  = "ëÊ20åR"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "ãMèBéióﬂïî"
    # ## leader = #
    id       = { type = 22000 id = 218 }
    division =
    { id    = { type = 22000 id = 219 }
      name  = "ãMèBéióﬂïî"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "ãMèBï€à¿ë‡"
    # ## leader = #
    id       = { type = 22000 id = 272 }
    division =
    { id    = { type = 22000 id = 273 }
      name  = "ãMèBï€à¿ë‡"
      type  = militia
      model = 0
    }
  }
}
