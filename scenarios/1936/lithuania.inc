##############################
# Country definition for LIT #
##############################
province = {
  id = 206 # メーメル
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 207 # カウナス
  air_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LIT
  capital            = 207 # カウナス
  manpower           = 28
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = {
      tag        = EST
      value      = 120
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LAT
      value      = 120
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = POL value = -75 }
    relation = { tag = SOV value = -30 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 206 207 511 208 209 577 }
  ownedprovinces         = { 206 207 511 577 }
  controlledprovinces    = { 206 207 511 577 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 28001 } # アンターナス・スメトナ
  headofgovernment       = { type = 9 id = 28002 } # ユオザス・トゥベリス
  foreignminister        = { type = 9 id = 28003 } # スタシス・ロゾライティス
  armamentminister       = { type = 9 id = 28004 } # ヴァルデマラス・ヴィタウタス＝カルネキス
  ministerofsecurity     = { type = 9 id = 28005 } # アンターナス・スメトナ
  ministerofintelligence = { type = 9 id = 28006 } # ドヴァス・ザウニウス
  chiefofstaff           = { type = 9 id = 28007 } # ヨナス・ガルヴィディス＝ビカウスカス
  chiefofarmy            = { type = 9 id = 28008 } # スタシス・ラシュティキス
  chiefofnavy            = { type = 9 id = 28009 } # ガルニス・ディルマンタス
  chiefofair             = { type = 9 id = 28010 } # アンタナス・グスタイティス

  landunit = {
    id       = { type = 26500 id = 1 }
    name     = "リトアニア陸軍"
    location = 207
    division = {
      id             = { type = 26500 id = 2 }
      name           = "第1歩兵旅団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 26500 id = 3 }
      name           = "第2歩兵旅団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 26500 id = 4 }
      name           = "第3歩兵旅団"
      type           = infantry
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 26500 id = 7 }
    name     = "リトアニア海軍"
    location = 206
    base     = 206
    division = {
      id             = { type = 26500 id = 8 }
      name           = "第1輸送隊"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 26500 id = 5 }
    name     = "リトアニア空軍"
    location = 206
    base     = 206
    division = {
      id             = { type = 26500 id = 6 }
      name           = "第1戦闘航空隊"
      type           = interceptor
      model          = 0
      strength       = 45
    }
  }
}
