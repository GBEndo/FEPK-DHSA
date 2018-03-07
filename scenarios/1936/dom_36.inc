##############################
# Country definition for DOM #
##############################
province = {
  id = 894 # サントドミンゴ
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = DOM
  capital            = 894 # サントドミンゴ
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }

  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 49001 } # ラファエル・トルヒーヨ
  headofgovernment       = { type = 9 id = 49002 } # ハシント・ビエンベニード・ペイナード
  foreignminister        = { type = 9 id = 49003 } # エリアス・ブラチェ
  armamentminister       = { type = 9 id = 49004 } # マヌエル・デ・ヘスス・トロンコソ
  ministerofsecurity     = { type = 9 id = 49005 } # ラファエル・トルヒーヨ
  ministerofintelligence = { type = 9 id = 49006 } # ヘスス・ダ・コスタ・ルイス
  chiefofstaff           = { type = 9 id = 49007 } # ラファエル・トルヒーヨ
  chiefofarmy            = { type = 9 id = 49008 } # ラファエル・トルヒーヨ
  chiefofnavy            = { type = 9 id = 49009 } # ウンベルト・ロハス
  chiefofair             = { type = 9 id = 49010 } # アニバル・バリェホ・ソーサ

  landunit = {
    id       = { type = 28000 id = 75 }
    name     = "ドミニカ共和国陸軍"
    location = 894
    division = {
      id             = { type = 28000 id = 7500 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 50
    }
  }
}
