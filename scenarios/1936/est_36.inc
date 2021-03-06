##############################
# Country definition for EST #
##############################
province = {
  id = 194 # タリン
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = EST
  capital            = 194 # タリン
  manpower           = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LAT
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = {
      tag        = LIT
      value      = 120
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 193 194 195 196 199 }
  ownedprovinces         = { 193 194 195 196 199 }
  controlledprovinces    = { 193 194 195 196 199 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 3400 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 26001 } # コンスタンティン・パッツ
  headofgovernment       = { type = 9 id = 26002 } # コンスタンティン・パッツ
  foreignminister        = { type = 9 id = 26003 } # ユリウス・セリャマ
  armamentminister       = { type = 9 id = 26004 } # カール・セルター
  ministerofsecurity     = { type = 9 id = 26005 } # カレル・エンパル
  ministerofintelligence = { type = 9 id = 26006 } # カレル・エンパル
  chiefofstaff           = { type = 9 id = 26007 } # ニコライ・レエク
  chiefofarmy            = { type = 9 id = 26008 } # ヨハン・ライドネル
  chiefofnavy            = { type = 9 id = 26009 } # ヴォルデマール・メレ
  chiefofair             = { type = 9 id = 26010 } # リヒャルト・トンベルク

  landunit = {
    id       = { type = 30000 id = 1 }
    name     = "エストニア第1軍"
    location = 194
    division = {
      id             = { type = 30000 id = 2 }
      name           = "第1歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 30000 id = 3 }
      name           = "第2歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 30000 id = 4 }
      name           = "第3歩兵師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
