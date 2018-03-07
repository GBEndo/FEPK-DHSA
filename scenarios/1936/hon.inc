##############################
# Country definition for HON #
##############################
province = {
  id = 760 # テグシガルパ
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = HON
  capital            = 760 # テグシガルパ
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "HON" NumberOfSpies = 1 }

  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 79001 } # ティブルシオ・カリアス・アンディーノ
  headofgovernment       = { type = 9 id = 79002 } # カルロス・アルベルト・ウクレス
  foreignminister        = { type = 9 id = 79003 } # ティブルシオ・カリアス・アンディーノ
  armamentminister       = { type = 9 id = 79004 } # ロベルト・ミチェリェティ・バイン
  ministerofsecurity     = { type = 9 id = 79005 } # カルロス・アルベルト・ウクレス
  ministerofintelligence = { type = 9 id = 79006 } # ライムンド・ストチレル・ガルシア
  chiefofstaff           = { type = 9 id = 79007 } # ティブルシオ・カリアス・アンディーノ
  chiefofarmy            = { type = 9 id = 79008 } # ライムンド・ストチレル・ガルシア
  chiefofnavy            = { type = 9 id = 79009 } # カルロス・バウペル・コメサ
  chiefofair             = { type = 9 id = 79010 } # グスタボ・シュミット

  landunit = {
    id       = { type = 19500 id = 55 }
    name     = "ホンジュラス陸軍"
    location = 760
    division = {
      id             = { type = 19500 id = 5500 }
      name           = "第1歩兵旅団「フランチェスコ・マラザン」"
      type           = infantry
      extra          = anti_air
      strength       = 60
    }
  }
}
