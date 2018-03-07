##############################
# Country definition for CZE #
##############################
province = { id = 466 landfort = 5 } # ストラコニツェ
province = { id = 467 landfort = 2 } # ターボル
province = {
  id = 469 # プラハ
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}
province = { id = 470 anti_air = 2 } # プルゼニ
province = { id = 471 landfort = 5 } # ウースチー
province = { id = 472 landfort = 6 } # リベレツ
province = { id = 474 landfort = 6 } # オストラヴァ
province = { id = 475 landfort = 2 anti_air = 2 } # ブルノ
province = {
  id = 476 # ブラティスラヴァ
  ic = 5
  landfort = 2
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
}
province = { id = 477 landfort = 1 } # バンスカー・ビストリツァ
province = { id = 490 ic = 3 } # コシツェ

#####################
# Country main data #
#####################

country = {
  tag                = CZE
  capital            = 469 # プラハ
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
  SpyInfo                = { country = "CZE" NumberOfSpies = 7 }

  nationalprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }

  techapps               = { 1010 1020 1110 1190 1310 14000 2010 2020 2030 2040 2150 2290 2300 2310 2450 2460 2510 4010 4020 4120 5010 5020 5080 5090 5190 6010 6020 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 9
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24001 } # エドヴァルド・ベネシュ
  headofgovernment       = { type = 9 id = 24002 } # ミラン・ホッジャ
  foreignminister        = { type = 9 id = 24003 } # エドヴァルド・ベネシュ
  armamentminister       = { type = 9 id = 24004 } # ヨセフ・カルファス
  ministerofsecurity     = { type = 9 id = 24005 } # イワン・デレール
  ministerofintelligence = { type = 9 id = 24006 } # フランティセク・マフニック
  chiefofstaff           = { type = 9 id = 24007 } # フランティセク・マフニック
  chiefofarmy            = { type = 9 id = 24008 } # ルドヴィーク・クレジ
  chiefofnavy            = { type = 9 id = 24009 } # アントニン・ハサル
  chiefofair             = { type = 9 id = 24010 } # エミール・ヤノウスカ
  dormant_ministers      = { 24129 }	#Vlassov

  landunit = {
    id       = { type = 23000 id = 1 }
    name     = "第8軍予備"
    location = 490
    division = {
      id             = { type = 26000 id = 2 }
      name           = "第9師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 3 }
      name           = "第15師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 4 }
      name           = "第21師団"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 5 }
    name     = "総司令部予備"
    location = 467
    division = {
      id             = { type = 26000 id = 6 }
      name           = "第1快速師団"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 7 }
      name           = "第4師団"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 8 }
      name           = "第12師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 9 }
      name           = "第13自動車化師団"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 26000 id = 10 }
      name           = "第16師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 11 }
      name           = "第22師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 12 }
    name     = "第1軍"
    location = 471
    division = {
      id             = { type = 26000 id = 13 }
      name           = "第18師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 14 }
      name           = "第2師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 15 }
      name           = "第5師団"
      type           = infantry
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 16 }
      name           = "第3師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 17 }
      name           = "第17師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 18 }
    name     = "第2軍"
    location = 472
    division = {
      id             = { type = 26000 id = 19 }
      name           = "第1山岳旅団"
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 20 }
      name           = "第7師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 21 }
    name     = "第4軍"
    location = 477
    division = {
      id             = { type = 26000 id = 22 }
      name           = "第3快速師団"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 23 }
      name           = "第10師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 24 }
      name           = "第11師団"
      type           = infantry
      model          = 0
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 25 }
    name     = "第3軍"
    location = 467
    division = {
      id             = { type = 26000 id = 26 }
      name           = "第2快速師団"
      type           = light_armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 27 }
      name           = "第4快速師団"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 28 }
      name           = "第14自動車化師団"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 26000 id = 29 }
      name           = "第19師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 30 }
      name           = "第6師団"
      type           = infantry
      model          = 0
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 31 }
      name           = "第20師団"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
}
