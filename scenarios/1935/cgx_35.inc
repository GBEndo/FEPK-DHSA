
##############################
# Country definition for CGX #
##############################

province = { id = 1248 supplypool = 500 oilpool = 50 } # Shantou
province =
{ id         = 1313
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}              # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Hainan

#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 10
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  transports             = 10
  capital                = 1319 # Nanning
  manpower               = 200
  dissent                = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 3
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CGX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  nationalprovinces      = { 1258 1310 1311 1309 1319 1325 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 3010 3130 }
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 150 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  headofstate            = { type = 9 id = 502013 } # ำฟฏ (t[En~)
  headofgovernment       = { type = 9 id = 502002 } # @m ([EcWF)
  foreignminister        = { type = 9 id = 502018 } # เZ[ ([E`VFj
  armamentminister       = { type = 9 id = 502012 } # ]ฟd (EnE)
  ministerofsecurity     = { type = 9 id = 502005 } # [E`
  ministerofintelligence = { type = 9 id = 502006 } # เZ[ ([E`VF)
  chiefofstaff           = { type = 9 id = 502007 } # โU (pCE`V)
  chiefofarmy            = { type = 9 id = 502011 } # ยเZฉ (`FE`^)
  chiefofnavy            = { type = 9 id = 502009 } # โU (pCE`V)
  chiefofair             = { type = 9 id = 502015 } # ฉ๕s (zAENAC)
  dormant_ministers = {
  	502003	#ม (E`I~j
  }
  # ######
  # GUANGXI OOB
  # ######
  landunit =
  { location = 1313 # Guangzhou
    name     = "ๆ1Rc"
    leader = 502001 # Chen Jitang
    id       = { type = 22400 id = 1 }
    division =
    { experience = 30
      id         = { type = 22400 id = 2 }
      name       = "Vเบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 3 }
      name       = "ๆ1ฦงเบt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 4 }
      name       = "x๕t"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "ๆ1R"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 5 }
    division =
    { experience = 30
      id         = { type = 22400 id = 6 }
      name       = "ๆ1เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 7 }
      name       = "ๆ2เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 8 }
      name       = "ๆ3เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "ๆ2R"
    # ## leader = # Chang Ta
    id       = { type = 22400 id = 9 }
    division =
    { experience = 30
      id         = { type = 22400 id = 10 }
      name       = "ๆ4เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 11 }
      name       = "ๆ5เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 12 }
      name       = "ๆ6เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1318 # Maoming
    name     = "ๆ3R"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 13 }
    division =
    { experience = 30
      id         = { type = 22400 id = 14 }
      name       = "ๆ7เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 15 }
      name       = "ๆ8เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 16 }
      name       = "ๆ9เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "ๆ4Rc"
    leader = 502004 # Li Zongren
    id       = { type = 22400 id = 17 }
    division =
    { experience = 30
      id         = { type = 22400 id = 18 }
      name       = "ๆ19R"
      type       = infantry
      strength   = 30
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "ๆ7R"
    # ## leader = # Liao Lei
    id       = { type = 22400 id = 19 }
    division =
    { experience = 30
      id         = { type = 22400 id = 20 }
      name       = "ๆ19เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 21 }
      name       = "ๆ21เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 22 }
      name       = "ๆ22เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 23 }
      name       = "ๆ24เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1319 # Nanning
    name     = "ๆ15R"
    leader = 502006 # Bai Chongxi
    id       = { type = 22400 id = 24 }
    division =
    { experience = 30
      id         = { type = 22400 id = 25 }
      name       = "ๆ42เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 26 }
      name       = "ๆ43เบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 27 }
      name       = "ๆ44เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 28 }
      name       = "ๆ45เบt"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "Lx๕เ"
    leader   = 502003
    id       = { type = 22400 id = 29 }
    division =
    { experience = 30
      id         = { type = 22400 id = 30 }
      name       = "Lเบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "Lผx๕เ"
    id       = { type = 22400 id = 31 }
    division =
    { experience = 30
      id         = { type = 22400 id = 32 }
      name       = "Lเบt"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 33 }
      name       = "LเบR"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1321 # Hainan
    name     = "C์x๕เ"
    id       = { type = 22400 id = 34 }
    division =
    { experience = 30
      id         = { type = 22400 id = 35 }
      name       = "ๆ9ฦงt"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "ๆ9R"
    # ## leader = 50089 # Hao Menglin
    id       = { type = 22000 id = 20 }
    division =
    { experience = 30
      id         = { type = 22000 id = 21 }
      name       = "ๆ9R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "ๆ28R"
    # leader = X # ?
    id       = { type = 22000 id = 67 }
    division =
    { experience = 30
      id         = { type = 22000 id = 68 }
      name       = "ๆ28R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "ฮ์x๕เ"
    # ## leader = #
    id       = { type = 22000 id = 192 }
    division =
    { experience   = 30
      id           = { type = 22000 id = 193 }
      name         = "ๆ34เบt"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1311 # Wuzhou
    name     = "Jgx๕เ"
    # ## leader = #
    id       = { type = 22000 id = 215 }
    division =
    { id           = { type = 22000 id = 216 }
      name         = "ๆ37ฦงเบท"
      type         = infantry
      max_strength = 25
      strength     = 25
      model        = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "ๆ20R"
    leader = 502010 # Yu Hanmou
    id       = { type = 22000 id = 106 }
    division =
    { id    = { type = 22000 id = 107 }
      name  = "ๆ20R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "ๆ2R"
    # ## leader = 50050 # Jiang Dingwen
    id       = { type = 22000 id = 6 }
    division =
    { id    = { type = 22000 id = 7 }
      name  = "ๆ2R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1249 # Chao'an
    name     = "ๆ16R"
    # ## leader = # Li Yunyan
    id       = { type = 22000 id = 36 }
    division =
    { id    = { type = 22000 id = 37 }
      name  = "ๆ16R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "ๆ36R"
    # ## leader = # Chou Hunyuan
    id       = { type = 22000 id = 87 }
    division =
    { id    = { type = 22000 id = 88 }
      name  = "ๆ36R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "ๆ14R"
    # ## leader = #
    id       = { type = 22000 id = 161 }
    division =
    { id    = { type = 22000 id = 162 }
      name  = "ๆ14R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "ๆ18R"
    # ## leader = 50219 # Luo Zhuoying
    id       = { type = 22000 id = 38 }
    division =
    { id    = { type = 22000 id = 39 }
      name  = "ๆ18R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "ๆ26R"
    # ## leader = 50104 # Xiao Zhichu
    id       = { type = 22000 id = 62 }
    division =
    { id    = { type = 22000 id = 63 }
      name  = "ๆ26R"
      type  = infantry
      model = 0
    }
  }
  # ##### NAVY OOB ######
  navalunit =
  { location = 1313 # Guangzhou
    name     = "LCR"
    leader   = 502013
    id       = { type = 22400 id = 40 }
    base     = 1313
    division =
    { id    = { type = 22400 id = 43 }
      name  = "ๆ1Aๅเ"
      type  = transport
      model = 0
    }
  }
  # ##### AIR FORCE OOB ######
  airunit =
  { location = 1313 # Guangzhou
    name     = "LR"
    base     = 1313 # Guangzhou
    id       = { type = 22400 id = 38 }
    division =
    { id           = { type = 22400 id = 39 }
      name         = "Lฦง๒sเ"
      type         = interceptor
      model        = 0
      max_strength = 40
      strength     = 20
    }
  }
}
