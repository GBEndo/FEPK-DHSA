##############################
# Country definition for GRE #
##############################
province = { id = 392 landfort = 5 } # イオアニナ
province = {
  id = 396 # クレタ
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 401 # アテネ
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 411 landfort = 5 anti_air = 2 } # サロニカ

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  capital            = 401 # アテネ
  manpower           = 70
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 40
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }

  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2400 2510 5010 5080 5090 5190 6010 3010 3020 3070 3130 3400 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 18001 } # ゲオルギオス2世
  headofgovernment       = { type = 9 id = 18002 } # コンスタンティノス・デメルチス
  foreignminister        = { type = 9 id = 18003 } # コンスタンティノス・デメルチス
  armamentminister       = { type = 9 id = 18004 } # ゲオルギオス・マントザヴィノス
  ministerofsecurity     = { type = 9 id = 18005 } # ゲオルギオス・ロゴセティス
  ministerofintelligence = { type = 9 id = 18006 } # ゲオルギオス・ロゴセティス
  chiefofstaff           = { type = 9 id = 18007 } # テオドール・パンガロス
  chiefofarmy            = { type = 9 id = 18008 } # アレクサンドロス・パパゴス
  chiefofnavy            = { type = 9 id = 18009 } # アナスタシオ・サケラリオウ
  chiefofair             = { type = 9 id = 18010 } # エレフテリオス・ヴェネゼロス

  landunit = {
    id       = { type = 15500 id = 1 }
    name     = "エリナス第1軍"
    location = 401
    division = {
      id             = { type = 15500 id = 2 }
      name           = "第2歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 3 }
      name           = "第3歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 4 }
      name           = "第4歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 5 }
    name     = "エリナス第2軍"
    location = 403
    division = {
      id             = { type = 15500 id = 6 }
      name           = "第1歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 7 }
      name           = "第9歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 8 }
    name     = "エリナス第3軍"
    location = 411
    division = {
      id             = { type = 15500 id = 9 }
      name           = "第6歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 10 }
      name           = "第10歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 11 }
      name           = "第11歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 12 }
      name           = "第17歩兵師団"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 13 }
    name     = "エリナス第4軍"
    location = 403
    division = {
      id             = { type = 15500 id = 14 }
      name           = "第7歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 15 }
      name           = "第14歩兵師団"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 16 }
    name     = "エリナス第5軍"
    location = 392
    division = {
      id             = { type = 15500 id = 17 }
      name           = "第12歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 18 }
      name           = "第13歩兵師団"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 19 }
    name     = "エリナス第6軍"
    location = 396
    division = {
      id             = { type = 15500 id = 20 }
      name           = "第5歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 21 }
      name           = "第8歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 22 }
      name           = "第1騎兵師団"
      type           = cavalry
      extra          = artillery
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 15500 id = 23 }
    name     = "エリナス王立海軍"
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 30 }
      name           = "BEN ゲオルギオス・アヴェロフ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 15500 id = 31 }
      name           = "BEN ヘレ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 15500 id = 28 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 32 }
      name           = "第2駆逐隊"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 29 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 33 }
      name           = "第2潜水隊"
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 24 }
      name           = "第1海上輸送隊"
      type           = transport
    }
    division = {
      id             = { type = 15500 id = 25 }
      name           = "第2海上輸送隊"
      type           = transport
    }
  }
}
