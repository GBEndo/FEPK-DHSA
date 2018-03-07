
##############################
# Country definition for CSX #
##############################

province =
{ id       = 1205
  air_base = { size = 5 current_size = 5 }
}            # Beiping
province =
{ id       = 1216
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Jinan
 
#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 20
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1225 # Taiyuan
  manpower               = 200
  dissent                = 25
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  nationalprovinces      = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  # Shanxi
  ownedprovinces         = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  controlledprovinces    = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 1398 1397 1203 }
  # Shanxi
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
    defense_lobby     = 5
    interventionism   = 1
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 2 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }
  SpyInfo                = { country = "SIA" NumberOfSpies = 1 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 1 }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  # ######
  # SHANXI Land 1936 OOB
  # TYPE: 22300
  # ######
  landunit =
  { location = 1225 # Taiyuan
    name     = "éRêºåxîıë‡"
    # ## leader = # Yan Xishan
    id       = { type = 22300 id = 1 }
    division =
    { id       = { type = 22300 id = 2 }
      name     = "ëÊ1ì∆óßë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 7 }
      name     = "ëÊ1ãRï∫ét"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "ëÊ34åR"
    # ## leader = # Yang Aiyuan
    id       = { type = 22300 id = 9 }
    division =
    { id       = { type = 22300 id = 10 }
      name     = "ëÊ66ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 12 }
      name     = "ëÊ71ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "ëÊ35åR"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 13 }
    division =
    { id       = { type = 22300 id = 14 }
      name     = "ëÊ72ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "„Vâìåxîıë‡"
    id       = { type = 22300 id = 16 }
    division =
    { id       = { type = 22300 id = 17 }
      name     = "„Vâìåxîıë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1205 # Beiping
    name     = "ëÊ29åR"
    # ## leader = # Song Zheyuan
    id       = { type = 22300 id = 18 }
    division =
    { id       = { type = 22300 id = 19 }
      name     = "ëÊ37ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 20 }
      name     = "ëÊ37ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 21 }
      name     = "ëÊ37ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 22 }
      name     = "ëÊ37ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 23 }
      name     = "ëÊ9ãRï∫ét"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 24 }
      name     = "ëÊ39ì∆óßë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "âÕñkåxîıë‡"
    id       = { type = 22300 id = 26 }
    division =
    { id       = { type = 22300 id = 27 }
      name     = "âÕñkï€à¿ë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1206 # Kalgan
    name     = "É`ÉÉÉnÉãåxîıë‡"
    id       = { type = 22300 id = 28 }
    division =
    { id       = { type = 22300 id = 29 }
      name     = "É`ÉÉÉnÉãï€à¿ë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "ëÊ3ó§åR"
    # ## leader = # Han Fuqu
    id       = { type = 22300 id = 30 }
    division =
    { id       = { type = 22300 id = 31 }
      name     = "ëÊ22ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 32 }
      name     = "ëÊ22ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "ëÊ12åR"
    # ## leader = # Sun Tongxuan
    id       = { type = 22300 id = 35 }
    division =
    { id       = { type = 22300 id = 36 }
      name     = "ëÊ20ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 37 }
      name     = "ëÊ81ï‡ï∫ét"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "éRìååxîıë‡"
    id       = { type = 22300 id = 38 }
    division =
    { id       = { type = 22300 id = 39 }
      name     = "éRìåï€à¿ë‡"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "ëÊ13åR"
    # ## leader = 50278 # Tang Enbo
    id       = { type = 22000 id = 27 }
    division =
    { id    = { type = 22000 id = 28 }
      name  = "ëÊ13åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "ëÊ19åR"
    # ## leader = # Li Shengda
    id       = { type = 22000 id = 43 }
    division =
    { id    = { type = 22000 id = 44 }
      name  = "ëÊ19åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1212 # Handan
    name     = "ëÊ32åR"
    # ## leader = 50253 # Shang Zhen
    id       = { type = 22000 id = 79 }
    division =
    { id    = { type = 22000 id = 80 }
      name  = "ëÊ32åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1209 # Datong
    name     = "ëÊ33åR"
    # ## leader = 50296 # Xu Yongchang
    id       = { type = 22000 id = 83 }
    division =
    { id    = { type = 22000 id = 84 }
      name  = "ëÊ33åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "ëÊ42åR"
    # ## leader = # ???
    id       = { type = 22000 id = 103 }
    division =
    { id    = { type = 22000 id = 104 }
      name  = "ëÊ42åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "ëÊ53åR"
    # ## leader = 50305 # Wan Fulin
    id       = { type = 22000 id = 128 }
    division =
    { id    = { type = 22000 id = 129 }
      name  = "ëÊ53åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "ëÊ63åR"
    # ## leader = # Feng Zhanhai
    id       = { type = 22000 id = 136 }
    division =
    { id    = { type = 22000 id = 137 }
      name  = "ëÊ63åR"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "ìåñkãRï∫åR"
    # ## leader = 50091 # He Zhuguo
    id       = { type = 22000 id = 145 }
    division =
    { id    = { type = 22000 id = 146 }
      name  = "ìåñkãRï∫åR"
      type  = cavalry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "ôbé@„Vñıåˆèê"
    # ## leader = #
    id       = { type = 22000 id = 205 }
    division =
    { id    = { type = 22000 id = 206 }
      name  = "ôbé@„Vñıåˆèê"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "éRêºï€à¿ë‡"
    # ## leader = #
    id       = { type = 22000 id = 266 }
    division =
    { id    = { type = 22000 id = 267 }
      name  = "éRêºï€à¿ë‡"
      type  = militia
      model = 0
      locked = yes
    }
  }
}
