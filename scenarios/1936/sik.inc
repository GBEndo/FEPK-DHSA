##############################
# Country definition for SIK #
##############################

country = {
  tag                = SIK
  capital            = 1433 # 迪化
  dissent            = 30
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
    relation = { tag = JAP value = -80 }
  }

  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 1422 1429 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1446 1430 1431 1445 1447 1435 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 } # 盛世才 (ション・シーツァイ)
  headofgovernment       = { type = 9 id = 72002 } # ホージャ・ニヤズ
  foreignminister        = { type = 9 id = 72003 } # 盛世才 (ション・シーツァイ)
  armamentminister       = { type = 9 id = 72004 } # ハビブラー・フセイノフ
  ministerofsecurity     = { type = 9 id = 72005 } # チャン・シーリャン
  ministerofintelligence = { type = 9 id = 72006 } # ヴィクトル・A・F・ポリノフ
  chiefofstaff           = { type = 9 id = 72007 } # 盛世才 (ション・シーツァイ)
  chiefofarmy            = { type = 9 id = 72008 } # 盛世才 (ション・シーツァイ)
  chiefofnavy            = { type = 9 id = 72009 } # 薩鎭冰 (サー・ヂェンビン)
  chiefofair             = { type = 9 id = 72010 } # ピオトル・オルロフ

  landunit = {
    id       = { type = 25600 id = 1 }
    name     = "新疆保安隊"
    location = 1433
    division = {
      id             = { type = 25600 id = 2 }
      name           = "新疆第1師"
      type           = infantry
    }
    division = {
      id             = { type = 25600 id = 3 }
      name           = "新疆第7隊"
      type           = militia
    }
    division = {
      id             = { type = 25600 id = 4 }
      name           = "新疆第8隊"
      type           = militia
    }
  }
}
