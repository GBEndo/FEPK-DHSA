##############################
# Country definition for NOR #
##############################
province = {
  id = 107 # オスロ
  coastalfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 110 # ベルゲン
  coastalfort = 3
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 118 coastalfort = 2 } # トロンヘイム
province = {
  id = 125 # ナルヴィク
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  regular_id         = SCA
  capital            = 107 # オスロ
  manpower           = 32
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 200
  escorts        = 5

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 }

  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 3130 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020 3010 3070 3250 3400 3410 3470 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 } # ハーコン7世
  headofgovernment       = { type = 9 id = 14002 } # ヨハン・ニューゴールスヴォルド
  foreignminister        = { type = 9 id = 14003 } # ハルヴダン・コート
  armamentminister       = { type = 9 id = 14004 } # アドルフ・インドレーベ
  ministerofsecurity     = { type = 9 id = 14005 } # トリグブ・H・リー
  ministerofintelligence = { type = 9 id = 14006 } # アルフレート・ロシェ＝ルンド
  chiefofstaff           = { type = 9 id = 14007 } # オットー・ルーゲ
  chiefofarmy            = { type = 9 id = 14008 } # クリスティアン・K・ラーケ
  chiefofnavy            = { type = 9 id = 14009 } # ヤコブ・フォン・デル・リッペ
  chiefofair             = { type = 9 id = 14010 } # ヤコブ・フォン・デル・リッペ

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "デン・ノシュケ軍"
    location = 107
    division = {
      id             = { type = 12600 id = 2 }
      name           = "第1歩兵師団"
      type           = infantry
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "第6部隊"
    location = 125
    division = {
      id             = { type = 12600 id = 12 }
      name           = "第6歩兵師団"
      type           = infantry
      strength       = 35
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "第1沿岸艦隊"
    location = 107
    base     = 107
    division = {
      id             = { type = 12600 id = 21 }
      name           = "第1潜水戦隊"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "第2潜水戦隊"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "第3沿岸艦隊"
    location = 125
    base     = 125
    division = {
      id             = { type = 12600 id = 26 }
      name           = "KNM ノルゲ"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "KNM アイッツヴォル"
      type           = heavy_cruiser
      model          = 0
    }
  }
}
