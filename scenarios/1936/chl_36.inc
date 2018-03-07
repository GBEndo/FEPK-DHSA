##############################
# Country definition for CHL #
##############################
province = {
  id = 840 # サンティアゴ
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  capital            = 840 # サンティアゴ
  manpower           = 15
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }

  nationalprovinces      = { 864 861 860 856 840 839 841 842 }
  ownedprovinces         = { 864 861 860 856 840 839 841 842 }
  controlledprovinces    = { 864 861 860 856 840 839 841 842 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 3020 3260 3410 3470 6210 6300 3010 3070 3130 3250 3400 8010 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44001 } # アルトゥーロ・アレッサンドリ・パルマ
  headofgovernment       = { type = 9 id = 44002 } # グスタボ・ロス・サンタ・マリア
  foreignminister        = { type = 9 id = 44003 } # ミゲル・クルチャガ・タコマール
  armamentminister       = { type = 9 id = 44004 } # エドゥアルド・イルマン
  ministerofsecurity     = { type = 9 id = 44005 } # アルトゥーロ・アレッサンドリ・パルマ
  ministerofintelligence = { type = 9 id = 44006 } # フリオ・アラルド・ピント
  chiefofstaff           = { type = 9 id = 44007 } # C・J・デ・ラ・モッテ
  chiefofarmy            = { type = 9 id = 44008 } # E・ノボア・フエンテス
  chiefofnavy            = { type = 9 id = 44009 } # C・J・デ・ラ・モッテ
  chiefofair             = { type = 9 id = 44010 } # ダリオ・ムヒカ・ガンボア

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "チリ陸軍"
    location = 840
    division = {
      id             = { type = 12500 id = 2 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 3 }
      name           = "第2歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 4 }
      name           = "チリ第1山岳師団"
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 5 }
      name           = "第1騎兵師団"
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12500 id = 6 }
    name     = "チリ海軍"
    location = 840
    base     = 840
    division = {
      id             = { type = 12500 id = 7 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12500 id = 9 }
      name           = "BACH アルミランテ・ラトーレ"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 12500 id = 14 }
      name           = "BACH アルミランテ・オヒギンズ"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 10 }
      name           = "BACH ブランコ・エンカラダ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 11 }
      name           = "BACH チャカブコ"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 12 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 13 }
      name           = "第2潜水隊"
      type           = submarine
      model          = 1
    }
  }
}
