##############################
# Country definition for YEM #
##############################

country = {
  tag                = YEM
  puppet             = ENG
  control            = ENG
  capital            = 1812 # サヌア
  manpower           = 5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }

  nationalprovinces      = { 1812 1813 1814 }
  ownedprovinces         = { 1812 }
  controlledprovinces    = { 1812 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 93001 } # ヤヒヤ・アル・ハミド
  headofgovernment       = { type = 9 id = 93002 } # ヤヒヤ・アル・ハミド
  foreignminister        = { type = 9 id = 93003 } # ヤヒヤ・アル・ハミド
  armamentminister       = { type = 9 id = 93004 } # アフマド・アル・ハミド
  ministerofsecurity     = { type = 9 id = 93005 } # ヤヒヤ・アル・ハミド
  ministerofintelligence = { type = 9 id = 93006 } # アフマド・アル・ハミド
  chiefofstaff           = { type = 9 id = 93007 } # ヤヒヤ・アル・ハミド
  chiefofarmy            = { type = 9 id = 93008 } # アフマド・アル・ハミド
  chiefofnavy            = { type = 9 id = 93009 } # マンスール・アル・バドル
  chiefofair             = { type = 9 id = 93010 } # マンスール・アル・バドル

  landunit = {
    id       = { type = 16800 id = 1 }
    name     = "イエメン王立軍"
    location = 1812
    division = {
      id             = { type = 16800 id = 2 }
      name           = "親衛師団"
      type           = cavalry
      strength       = 15
      max_strength   = 15
    }
  }
}
