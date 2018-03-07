##############################
# Country definition for SIA #
##############################
province = {
  id = 1345 # トンブリ
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  capital            = 1343 # バンコク
  manpower           = 145
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }

  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 1304 1349 1350 1303 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1020 1190 1110 2450 2460 2510 5080 5090 4120 6210 6300 3010 3070 3400 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 62001 } # ラーマ8世
  headofgovernment       = { type = 9 id = 62002 } # プラヤー・パホンポンパユハセーナー
  foreignminister        = { type = 9 id = 62003 } # ハ・サムプタシリ
  armamentminister       = { type = 9 id = 62004 } # プラヤー・パホンポンパユハセーナー
  ministerofsecurity     = { type = 9 id = 62005 } # プリーディー・パノムヨン
  ministerofintelligence = { type = 9 id = 62006 } # プリーディー・パノムヨン
  chiefofstaff           = { type = 9 id = 62007 } # プレーク・ピブーンソンクラーム
  chiefofarmy            = { type = 9 id = 62008 } # プレーク・ピブーンソンクラーム
  chiefofnavy            = { type = 9 id = 62009 } # プリーディー・パノムヨン
  chiefofair             = { type = 9 id = 62010 } # フラ・ヴェチャヤンラングサリト

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "タイ王立軍"
    location = 1345
    division = {
      id             = { type = 23600 id = 2 }
      name           = "タイ第1歩兵師団"
      type           = infantry
      strength       = 90
    }
    division = {
      id             = { type = 23600 id = 3 }
      name           = "タイ第2歩兵師団"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23600 id = 4 }
    name     = "タイ王国警察軍"
    location = 1343
    division = {
      id             = { type = 23600 id = 5 }
      name           = "タイ王立警察第1師団"
      type           = garrison
      extra          = police
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 23600 id = 6 }
    name     = "タイ王立海軍"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 7 }
      name           = "RTNS スリアユタヤ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 8 }
      name           = "RTNS ドンブリ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 10 }
      name           = "プラルアン隊"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 23600 id = 12 }
    name     = "タイ王立空軍"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 13 }
      name           = "RTAF 第1戦闘航空隊"
      type           = interceptor
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 23600 id = 14 }
      name           = "RTAF 第1戦術爆撃航空隊"
      type           = tactical_bomber
      model          = 0
      strength       = 44
    }
  }
}
