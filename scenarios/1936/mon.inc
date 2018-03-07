##############################
# Country definition for MON #
##############################
province = {
  id = 1404 # ウランバートル
  air_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MON
  puppet             = SOV
  control            = SOV
  capital            = 1404 # ウランバートル
  manpower           = 7
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 25 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }

  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1207 1398 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 } # アナンディーン・アマル
  headofgovernment       = { type = 9 id = 94002 } # ドギジャヴィン・ルヴサンシャラ
  foreignminister        = { type = 9 id = 94003 } # ペルジディン・ゲンデン
  armamentminister       = { type = 9 id = 94004 } # ジャムビン・ランベ
  ministerofsecurity     = { type = 9 id = 94005 } # ジャムトサングリン・ダムディンスレン
  ministerofintelligence = { type = 9 id = 94006 } # ホルローギーン・チョイバルサン
  chiefofstaff           = { type = 9 id = 94007 } # チミド
  chiefofarmy            = { type = 9 id = 94008 } # チミド
  chiefofnavy            = { type = 9 id = 94009 } # V・G・パイアセロフ
  chiefofair             = { type = 9 id = 94010 } # ウランフ

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "モンゴル・ナイラムダフ軍"
    location = 1404
    division = {
      id             = { type = 30500 id = 2 }
      name           = "モンゴル第1狙撃兵師団"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 30500 id = 3 }
      name           = "ナイラムダフ第2騎兵師団"
      type           = cavalry
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "ナイラムダフ第3民兵師団"
      type           = militia
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "ナイラムダフ第4民兵師団"
      type           = militia
    }
  }
}
