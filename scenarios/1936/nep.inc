##############################
# Country definition for NEP #
##############################

country = {
  tag                = NEP
  puppet             = ENG
  control            = ENG
  capital            = 1473 # カトマンズ
  manpower           = 7
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 9
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 75001 } # トリブーヴァナ
  headofgovernment       = { type = 9 id = 75002 } # ジュダ・ラナ
  foreignminister        = { type = 9 id = 75003 } # ケシャー・ラナ
  armamentminister       = { type = 9 id = 75004 } # モハン・ラナ
  ministerofsecurity     = { type = 9 id = 75005 } # ジュダ・ラナ
  ministerofintelligence = { type = 9 id = 75006 } # バベル・ラナ
  chiefofstaff           = { type = 9 id = 75007 } # ジュダ・ラナ
  chiefofarmy            = { type = 9 id = 75008 } # パドマ・ラナ
  chiefofnavy            = { type = 9 id = 75009 } # ルドラ・ラナ
  chiefofair             = { type = 9 id = 75010 } # キラン・ラナ

  landunit = {
    id       = { type = 31500 id = 1 }
    name     = "ネパール王立軍"
    location = 1473
    division = {
      id             = { type = 31500 id = 2 }
      name           = "ネパール王立近衛師団"
      type           = bergsjaeger
      model          = 1
      strength       = 100
    }
  }
}
