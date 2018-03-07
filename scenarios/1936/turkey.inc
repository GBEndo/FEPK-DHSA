##############################
# Country definition for TUR #
##############################
province = {
  id = 439 # イズミット
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 448 # アンカラ
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = TUR
  capital            = 448 # アンカラ
  manpower           = 165
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 35
  escorts        = 10
  tc_mod = 1.0500	#1.0+0.05
  ai_settings	= { flags = {
  	Bosporus = 1
  } }
  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "TUR" NumberOfSpies = 7 }

  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 2400 2510 1010 1190 1110 9010 5010 5080 5090 3190 6210 6300 3010 3020 3070 3130 3400 8010 8020 8040 8050 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 12001 } # ムスタファ・ケマル・アタテュルク
  headofgovernment       = { type = 9 id = 12002 } # イスメト・イノニュ
  foreignminister        = { type = 9 id = 12003 } # テヴフィク・ルスタ・アラス
  armamentminister       = { type = 9 id = 12004 } # ゼカイ・アパイディン
  ministerofsecurity     = { type = 9 id = 12005 } # シュクル・カヤ
  ministerofintelligence = { type = 9 id = 12006 } # シュクル・アリ・オーゲル
  chiefofstaff           = { type = 9 id = 12007 } # フェヴズィ・チャクマク
  chiefofarmy            = { type = 9 id = 12008 } # メフメト・ヌリ・ヤムト
  chiefofnavy            = { type = 9 id = 12009 } # メフメト・アリ・ウンゲン
  chiefofair             = { type = 9 id = 12010 } # アリ・オルルンガト

  landunit = {
    id       = { type = 11700 id = 8 }
    name     = "第1軍"
    location = 448
    division = {
      id             = { type = 11700 id = 9 }
      name           = "第1歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 10 }
      name           = "第3歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 11 }
    name     = "第2軍"
    location = 409
    division = {
      id             = { type = 11700 id = 12 }
      name           = "第5歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 13 }
    name     = "第3軍"
    location = 408
    division = {
      id             = { type = 11700 id = 14 }
      name           = "第7歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 15 }
    name     = "第4軍"
    location = 445
    division = {
      id             = { type = 11700 id = 16 }
      name           = "第9歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 17 }
    name     = "第5軍"
    location = 450
    division = {
      id             = { type = 11700 id = 18 }
      name           = "第11歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 19 }
    name     = "第6軍"
    location = 1851
    division = {
      id             = { type = 11700 id = 20 }
      name           = "第13歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 21 }
    name     = "第7軍"
    location = 1855
    division = {
      id             = { type = 11700 id = 22 }
      name           = "第15歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 23 }
    name     = "第8軍"
    location = 1854
    division = {
      id             = { type = 11700 id = 24 }
      name           = "第17歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 25 }
    name     = "第9軍"
    location = 1852
    division = {
      id             = { type = 11700 id = 26 }
      name           = "第19歩兵師団"
      type           = infantry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 27 }
    name     = "第10軍"
    location = 1853
    division = {
      id             = { type = 11700 id = 28 }
      name           = "第1山岳師団"
      type           = bergsjaeger
      extra          = anti_tank
      strength       = 80
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 29 }
    name     = "トルコ騎兵軍"
    location = 442
    division = {
      id             = { type = 11700 id = 30 }
      name           = "第1騎兵師団"
      type           = cavalry
      extra          = artillery
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 31 }
      name           = "第3騎兵師団"
      type           = cavalry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 32 }
      name           = "第5予備騎兵師団"
      type           = cavalry
      strength       = 50
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 11700 id = 1 }
    name     = "トルコ海軍"
    location = 439
    base     = 439
    division = {
      id             = { type = 11700 id = 3 }
      name           = "TDT ヤヴス"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 4 }
      name           = "TDT ハミディエ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 5 }
      name           = "TDT メジディエ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 7 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 6 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 100 }
      name           = "レシッド・パシャ隊"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 11700 id = 33 }
    name     = "トルコ第1空軍"
    location = 448
    base     = 448
    division = {
      id             = { type = 25635 id = 34 }
      name           = "第1戦闘航空群"
      type           = interceptor
      model          = 0
      strength       = 48
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 35 }
      name           = "第1戦術爆撃航空群"
      type           = tactical_bomber
      model          = 0
      strength       = 52
      organisation   = 30
      defaultorganisation = 0
    }
  }
}
