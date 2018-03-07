##############################
# Country definition for COL #
##############################
province = {
  id = 803 # バランキーヤ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}
province = { id = 813 anti_air = 2 } # ボゴタ

#####################
# Country main data #
#####################

country = {
  tag                = COL
  capital            = 813 # ボゴタ
  manpower           = 28
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }

  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6210 6300 3010 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 37001 } # アルフォンソ・ロペス・プマレホ
  headofgovernment       = { type = 9 id = 37002 } # アルフォンソ・ロペス・プマレホ
  foreignminister        = { type = 9 id = 37003 } # エルネスト・ゴンサレス・ピエドライタ
  armamentminister       = { type = 9 id = 37004 } # ベニト・エルナンデス
  ministerofsecurity     = { type = 9 id = 37005 } # ホルヘ・ロア・マルティネス
  ministerofintelligence = { type = 9 id = 37006 } # フェルナンド・ロンドノ・イ・ロンドノ
  chiefofstaff           = { type = 9 id = 37007 } # ホルヘ・メルカド・サンチェス
  chiefofarmy            = { type = 9 id = 37008 } # エドゥアルド・ポワリエ・エスコバル
  chiefofnavy            = { type = 9 id = 37009 } # ルイス・アセベド
  chiefofair             = { type = 9 id = 37010 } # ヘルマン・オラーノ

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "コロンビア陸軍"
    location = 813
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "第1師団"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 80
    }
    division = {
      id             = { type = 23000 id = 4001 }
      name           = "第1騎兵旅団「モンテリナ」"
      type           = cavalry
      model          = 0
      strength       = 80
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4002 }
    name     = "コロンビア海軍"
    location = 803
    base     = 803
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "第1駆逐隊"
      type           = destroyer
      model          = 0
    }
  }
}
