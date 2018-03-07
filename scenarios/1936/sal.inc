##############################
# Country definition for SAL #
##############################
province = {
  id = 759 # サンサルバドル
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SAL
  capital            = 759 # サンサルバドル
  manpower           = 5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "SAL" NumberOfSpies = 2 }

  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 77001 } # マキシミリアノ・エルナンデス・マルティネス
  headofgovernment       = { type = 9 id = 77002 } # マキシミリアノ・エルナンデス・マルティネス
  foreignminister        = { type = 9 id = 77003 } # ミゲル・アンヘル・アラウジョ
  armamentminister       = { type = 9 id = 77004 } # アルベルト・ゴメス・サラテ
  ministerofsecurity     = { type = 9 id = 77005 } # フィデル・クリスティノ・ガライ
  ministerofintelligence = { type = 9 id = 77006 } # オスカル・A・ボラノス
  chiefofstaff           = { type = 9 id = 77007 } # マルコ・A・モリナ
  chiefofarmy            = { type = 9 id = 77008 } # マキシミリアノ・エルナンデス・マルティネス
  chiefofnavy            = { type = 9 id = 77009 } # ラウル・ロドルフィ・サンチェス
  chiefofair             = { type = 9 id = 77010 } # ウンベルト・アベルレ

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "サルバドル陸軍"
    location = 759
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "第1歩兵旅団"
      type           = infantry
      extra          = anti_air
      strength       = 40
    }
  }
}
