##############################
# Country definition for URU #
##############################
province = {
  id = 849 # モンテビデオ
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = URU
  capital            = 849 # モンテビデオ
  manpower           = 7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "URU" NumberOfSpies = 4 }

  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 41001 } # ガブリエル・テラ
  headofgovernment       = { type = 9 id = 41002 } # ガブリエル・テラ
  foreignminister        = { type = 9 id = 41003 } # ホセ・エスパルテル
  armamentminister       = { type = 9 id = 41004 } # アルフレド・バルドミル
  ministerofsecurity     = { type = 9 id = 41005 } # ハインツ・グロッケンバーガー
  ministerofintelligence = { type = 9 id = 41006 } # クリスティアノ・ピラグイ・トレリェス
  chiefofstaff           = { type = 9 id = 41007 } # マヌエル・エインス・アスプルア
  chiefofarmy            = { type = 9 id = 41008 } # ホルヘ・エリオ・メンドーサ
  chiefofnavy            = { type = 9 id = 41009 } # カルロス・ジャクソン・ウリベ
  chiefofair             = { type = 9 id = 41010 } # コスメ・アルバレス・ベリッソ

  landunit = {
    id       = { type = 13700 id = 40 }
    name     = "ウルグアイ陸軍"
    location = 849
    division = {
      id             = { type = 13700 id = 4000 }
      name           = "第4歩兵旅団「ドン=クラウディオ」"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}
