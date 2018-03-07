##############################
# Country definition for ECU #
##############################
province = {
  id = 815 # キト
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  capital            = 815 # キト
  manpower           = 8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }

  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40001 } # フェデリコ・パエス・チリボアガ
  headofgovernment       = { type = 9 id = 40002 } # フェデリコ・パエス・チリボアガ
  foreignminister        = { type = 9 id = 40003 } # アルベルト・ラレア・チリボアガ
  armamentminister       = { type = 9 id = 40004 } # ファビアン・デル・カステリョ
  ministerofsecurity     = { type = 9 id = 40005 } # ダビデ・フロレス
  ministerofintelligence = { type = 9 id = 40006 } # アウレリオ・モスケラ・ナルバエス
  chiefofstaff           = { type = 9 id = 40007 } # ベニグノ・アンドラーデ・フロレス
  chiefofarmy            = { type = 9 id = 40008 } # ヒルベルト・エンリケス・ガリョ
  chiefofnavy            = { type = 9 id = 40009 } # ファン・ラモン・カストロ
  chiefofair             = { type = 9 id = 40010 } # コスメ・レネリャ・バルバト

  landunit = {
    id       = { type = 29000 id = 50 }
    name     = "エクアドル陸軍"
    location = 815
    division = {
      id             = { type = 29000 id = 5000 }
      name           = "第1歩兵旅団"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
}
