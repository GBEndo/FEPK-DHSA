##############################
# Country definition for HAI #
##############################
province = {
  id = 892 # ポルトープランス
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = HAI
  capital            = 892 # ポルトープランス
  manpower           = 9
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "HAI" NumberOfSpies = 1 }

  nationalprovinces      = { 892 }
  ownedprovinces         = { 892 }
  controlledprovinces    = { 892 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 2
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 78001 } # ステニオ・ヴィンセント
  headofgovernment       = { type = 9 id = 78002 } # ステニオ・ヴィンセント
  foreignminister        = { type = 9 id = 78003 } # アルベール・ブランシェ
  armamentminister       = { type = 9 id = 78004 } # エミル・レスコ
  ministerofsecurity     = { type = 9 id = 78005 } # ルイ・ダブテス・ベレガルド
  ministerofintelligence = { type = 9 id = 78006 } # セバスチャン・デ・アロンデ
  chiefofstaff           = { type = 9 id = 78007 } # エミル・レスコ
  chiefofarmy            = { type = 9 id = 78008 } # エミル・レスコ
  chiefofnavy            = { type = 9 id = 78009 } # アルフレッド・ネモール
  chiefofair             = { type = 9 id = 78010 } # G・エドゥアール・ロイ

  landunit = {
    id       = { type = 17500 id = 53 }
    name     = "ハイチ陸軍"
    location = 892
    division = {
      id             = { type = 17500 id = 5301 }
      name           = "ハイチ第1歩兵旅団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
}
