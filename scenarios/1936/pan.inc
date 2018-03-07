##############################
# Country definition for PAN #
##############################
province = {
  id = 888 # パナマ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  capital            = 888 # パナマ
  manpower           = 3
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }

  nationalprovinces      = { 889 888 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }

  techapps               = { 4010 2150 2290 1010 1190 5010 5080 5090 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95001 } # アルモディオ・アリアス・デ・ラ・マドリ
  headofgovernment       = { type = 9 id = 95002 } # アルモディオ・アリアス・デ・ラ・マドリ
  foreignminister        = { type = 9 id = 95003 } # ナルシソ・ガライ・ディアス
  armamentminister       = { type = 9 id = 95004 } # ダニエル・C・ピンソン
  ministerofsecurity     = { type = 9 id = 95005 } # イグナシオ・E・メンドーサ
  ministerofintelligence = { type = 9 id = 95006 } # エセキエル・フェルナンデス・ハエン
  chiefofstaff           = { type = 9 id = 95007 } # ファン・レモン
  chiefofarmy            = { type = 9 id = 95008 } # ボリバル・ビリャリノ
  chiefofnavy            = { type = 9 id = 95009 } # ファン・A・エルナンデス
  chiefofair             = { type = 9 id = 95010 } # ファン・レモン

  landunit = {
    id       = { type = 14600 id = 50 }
    name     = "パナマ陸軍"
    location = 888
    division = {
      id             = { type = 14600 id = 5000 }
      name           = "第1歩兵旅団"
      type           = infantry
      strength       = 60
    }
  }
}
