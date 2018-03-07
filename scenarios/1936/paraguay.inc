##############################
# Country definition for PAR #
##############################
province = {
  id = 837 # アスンシオン
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  capital            = 837 # アスンシオン
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "PAR" NumberOfSpies = 4 }

  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 42001 } # エウセビオ・アヤラ
  headofgovernment       = { type = 9 id = 42002 } # エウセビオ・アヤラ
  foreignminister        = { type = 9 id = 42003 } # ルイス・アルベルト・リアル
  armamentminister       = { type = 9 id = 42004 } # フェデリコ・チャべス
  ministerofsecurity     = { type = 9 id = 42005 } # ニコラス・デルガド
  ministerofintelligence = { type = 9 id = 42006 } # ファン・マヌエル・フルトス
  chiefofstaff           = { type = 9 id = 42007 } # イゴール・エルン
  chiefofarmy            = { type = 9 id = 42008 } # マヌエル・T・アポンテ
  chiefofnavy            = { type = 9 id = 42009 } # マヌエル・T・アポンテ
  chiefofair             = { type = 9 id = 42010 } # ビセンテ・アルモナシド

  landunit = {
    id       = { type = 15600 id = 60 }
    name     = "パラグアイ陸軍"
    location = 837
    division = {
      id             = { type = 15600 id = 6000 }
      name           = "第1歩兵師団"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 15600 id = 6001 }
      name           = "第106国家警察旅団"
      type           = militia
      strength       = 100
    }
  }
}
