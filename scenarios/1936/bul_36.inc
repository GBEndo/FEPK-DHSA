##############################
# Country definition for BUL #
##############################
province = { id = 417 ic = 2 anti_air = 2 } # ソフィア
province = { id = 420 ic = 2 } # プレヴェン
province = {
  id = 422 # ヴァルナ
  ic = 2
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  capital            = 417 # ソフィア
  manpower           = 60
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 10
  escorts        = 4

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }

  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 } # ボリス3世
  headofgovernment       = { type = 9 id = 19002 } # ゲオルギ・キオセイヴァノフ
  foreignminister        = { type = 9 id = 19003 } # ゲオルギ・キオセイヴァノフ
  armamentminister       = { type = 9 id = 19004 } # キリル・ゴウネフ
  ministerofsecurity     = { type = 9 id = 19005 } # ゲオルギ・サポフ
  ministerofintelligence = { type = 9 id = 19006 } # ディミタール・ペシェフ
  chiefofstaff           = { type = 9 id = 19007 } # フリスト・ルコフ
  chiefofarmy            = { type = 9 id = 19008 } # トドール・ジョルジエフ
  chiefofnavy            = { type = 9 id = 19009 } # サヴァ・イヴァノフ
  chiefofair             = { type = 9 id = 19010 } # ヴァシル・ボイデフ

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "第1軍"
    location = 417
    division = {
      id             = { type = 19000 id = 2 }
      name           = "第1ソフィスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 3 }
      name           = "第7リルスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 4 }
      name           = "第1騎兵師団"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 5 }
    name     = "第2軍"
    location = 422
    division = {
      id             = { type = 19000 id = 6 }
      name           = "第2トラキスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 7 }
      name           = "第8トゥンジャンスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 19 }
      name           = "第2騎兵師団"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 9 }
    name     = "第3軍"
    location = 421
    division = {
      id             = { type = 19000 id = 10 }
      name           = "第3バルカンスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 11 }
      name           = "第4プレスラフスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 12 }
    name     = "第4軍"
    location = 420
    division = {
      id             = { type = 19000 id = 13 }
      name           = "第5ドゥナフスカ歩兵師団"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 14 }
      name           = "第6ブディンスカ歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
