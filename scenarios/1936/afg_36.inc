##############################
# Country definition for AFG #
##############################

country = {
  tag                = AFG
  capital            = 1486 # カブール
  manpower           = 110
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }

  nationalprovinces      = { 1486 1493 1492 1484 }
  ownedprovinces         = { 1486 1493 1492 1484 }
  controlledprovinces    = { 1486 1493 1492 1484 }

  techapps               = { 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 54001 } # ムハンメド・ザヒール
  headofgovernment       = { type = 9 id = 54002 } # ムハンメド・ハシム
  foreignminister        = { type = 9 id = 54003 } # ハジ・ファイズ・ムハンメド・ジケリア
  armamentminister       = { type = 9 id = 54004 } # アブドゥル・マジド・ザブリ
  ministerofsecurity     = { type = 9 id = 54005 } # ムハンメド・ハシム
  ministerofintelligence = { type = 9 id = 54006 } # シャー・マフムード・ガージ
  chiefofstaff           = { type = 9 id = 54007 } # モハンメド・ダウド
  chiefofarmy            = { type = 9 id = 54008 } # モハンメド・ダウド
  chiefofnavy            = { type = 9 id = 54009 } # ムハンメド・ザヒール
  chiefofair             = { type = 9 id = 54010 } # モハンメド・ダウド

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "アフガニスタン王立軍"
    location = 1486
    division = {
      id             = { type = 10000 id = 11 }
      name           = "王立衛兵隊"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 2 }
      name           = "ファイザーバード民兵隊"
      type           = militia
      strength       = 80
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "ガズニ民兵隊"
      type           = militia
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10000 id = 4 }
    name     = "ヘラート軍"
    location = 1486
    division = {
      id             = { type = 10000 id = 5 }
      name           = "ヘラート民兵隊"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 6 }
      name           = "ヘラート騎兵隊"
      type           = cavalry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10000 id = 7 }
    name     = "カンダハル軍"
    location = 1493
    division = {
      id             = { type = 10000 id = 8 }
      name           = "ジャララバード民兵隊"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "カンダハル民兵隊"
      type           = militia
      strength       = 100
    }
  }
}
