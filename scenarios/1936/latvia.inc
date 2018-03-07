##############################
# Country definition for LAT #
##############################
province = {
  id = 197 # リガ
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LAT
  capital            = 197 # リガ
  manpower           = 20
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
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
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
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 205 204 203 197 202 198 }
  ownedprovinces         = { 205 204 203 197 202 198 }
  controlledprovinces    = { 205 204 203 197 202 198 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 3400 8040 }

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
  headofstate            = { type = 9 id = 27001 } # アルバーツ・クヴィエシス
  headofgovernment       = { type = 9 id = 27002 } # カルリス・ウルマニス
  foreignminister        = { type = 9 id = 27003 } # カルリス・ウルマニス
  armamentminister       = { type = 9 id = 27004 } # ルドヴィクス・ツティス
  ministerofsecurity     = { type = 9 id = 27005 } # ヴィリス・グルビス
  ministerofintelligence = { type = 9 id = 27006 } # ハーマニス・アプシティス
  chiefofstaff           = { type = 9 id = 27007 } # イルニス・バロディス
  chiefofarmy            = { type = 9 id = 27008 } # ルドルフス・バンゲルスキス
  chiefofnavy            = { type = 9 id = 27009 } # トマス・スパーデ
  chiefofair             = { type = 9 id = 27010 } # ヤン・インダンス

  landunit = {
    id       = { type = 24500 id = 1 }
    name     = "ラトヴィア陸軍"
    location = 197
    division = {
      id             = { type = 24500 id = 2 }
      name           = "クルゼメ師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 24500 id = 3 }
      name           = "ヴィジェメ師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 24500 id = 4 }
      name           = "ゼムガレ師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 24500 id = 5 }
      name           = "ラトガレ師団"
      type           = infantry
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 24500 id = 6 }
    name     = "ラトヴィア海軍"
    location = 197
    base     = 197
    division = {
      id             = { type = 24500 id = 7 }
      name           = "第1潜水隊"
      type           = submarine
      model          = 0
      strength       = 40
    }
  }
}
