
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
    name     = "Rźxőŕ"
    # ## leader = # Yan Xishan
    id       = { type = 22300 id = 1 }
    division =
    { id       = { type = 22300 id = 2 }
      name     = "ć1Ć§ŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 7 }
      name     = "ć1Rşt"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "ć34R"
    # ## leader = # Yang Aiyuan
    id       = { type = 22300 id = 9 }
    division =
    { id       = { type = 22300 id = 10 }
      name     = "ć66ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 12 }
      name     = "ć71ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "ć35R"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 13 }
    division =
    { id       = { type = 22300 id = 14 }
      name     = "ć72ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "ăVxőŕ"
    id       = { type = 22300 id = 16 }
    division =
    { id       = { type = 22300 id = 17 }
      name     = "ăVxőŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1205 # Beiping
    name     = "ć29R"
    # ## leader = # Song Zheyuan
    id       = { type = 22300 id = 18 }
    division =
    { id       = { type = 22300 id = 19 }
      name     = "ć37ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 20 }
      name     = "ć37ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 21 }
      name     = "ć37ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 22 }
      name     = "ć37ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 23 }
      name     = "ć9Rşt"
      type     = cavalry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 24 }
      name     = "ć39Ć§ŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "Íkxőŕ"
    id       = { type = 22300 id = 26 }
    division =
    { id       = { type = 22300 id = 27 }
      name     = "ÍkŰŔŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1206 # Kalgan
    name     = "`nxőŕ"
    id       = { type = 22300 id = 28 }
    division =
    { id       = { type = 22300 id = 29 }
      name     = "`nŰŔŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "ć3¤R"
    # ## leader = # Han Fuqu
    id       = { type = 22300 id = 30 }
    division =
    { id       = { type = 22300 id = 31 }
      name     = "ć22ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 32 }
      name     = "ć22ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "ć12R"
    # ## leader = # Sun Tongxuan
    id       = { type = 22300 id = 35 }
    division =
    { id       = { type = 22300 id = 36 }
      name     = "ć20ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
    division =
    { id       = { type = 22300 id = 37 }
      name     = "ć81ŕşt"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "Rxőŕ"
    id       = { type = 22300 id = 38 }
    division =
    { id       = { type = 22300 id = 39 }
      name     = "RŰŔŕ"
      type     = infantry
      strength = 100
      model    = 0
      locked = yes
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "ć13R"
    # ## leader = 50278 # Tang Enbo
    id       = { type = 22000 id = 27 }
    division =
    { id    = { type = 22000 id = 28 }
      name  = "ć13R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "ć19R"
    # ## leader = # Li Shengda
    id       = { type = 22000 id = 43 }
    division =
    { id    = { type = 22000 id = 44 }
      name  = "ć19R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1212 # Handan
    name     = "ć32R"
    # ## leader = 50253 # Shang Zhen
    id       = { type = 22000 id = 79 }
    division =
    { id    = { type = 22000 id = 80 }
      name  = "ć32R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1209 # Datong
    name     = "ć33R"
    # ## leader = 50296 # Xu Yongchang
    id       = { type = 22000 id = 83 }
    division =
    { id    = { type = 22000 id = 84 }
      name  = "ć33R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "ć42R"
    # ## leader = # ???
    id       = { type = 22000 id = 103 }
    division =
    { id    = { type = 22000 id = 104 }
      name  = "ć42R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "ć53R"
    # ## leader = 50305 # Wan Fulin
    id       = { type = 22000 id = 128 }
    division =
    { id    = { type = 22000 id = 129 }
      name  = "ć53R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "ć63R"
    # ## leader = # Feng Zhanhai
    id       = { type = 22000 id = 136 }
    division =
    { id    = { type = 22000 id = 137 }
      name  = "ć63R"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "kRşR"
    # ## leader = 50091 # He Zhuguo
    id       = { type = 22000 id = 145 }
    division =
    { id    = { type = 22000 id = 146 }
      name  = "kRşR"
      type  = cavalry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "b@ăVőö"
    # ## leader = #
    id       = { type = 22000 id = 205 }
    division =
    { id    = { type = 22000 id = 206 }
      name  = "b@ăVőö"
      type  = infantry
      model = 0
      locked = yes
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "RźŰŔŕ"
    # ## leader = #
    id       = { type = 22000 id = 266 }
    division =
    { id    = { type = 22000 id = 267 }
      name  = "RźŰŔŕ"
      type  = militia
      model = 0
      locked = yes
    }
  }
}
