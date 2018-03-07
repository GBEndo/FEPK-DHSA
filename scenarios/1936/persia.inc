##############################
# Country definition for PER #
##############################
province = {
  id = 1497 # バンダルアッバース
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PER
  capital            = 1502 # テヘラン
  manpower           = 96
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }
  SpyInfo                = { country = "PER" NumberOfSpies = 5 }

  nationalprovinces      = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 53001 } # レザー・パフラヴィー
  headofgovernment       = { type = 9 id = 53002 } # マフムード・ジャム
  foreignminister        = { type = 9 id = 53003 } # イノヤトゥラー・カーン・サミ
  armamentminister       = { type = 9 id = 53004 } # アーマッド・カーン・ナクジャーヴァン
  ministerofsecurity     = { type = 9 id = 53005 } # アリ・アクバー・デイヴァ
  ministerofintelligence = { type = 9 id = 53006 } # レザー・ミザニ
  chiefofstaff           = { type = 9 id = 53007 } # レザー・パフラヴィー
  chiefofarmy            = { type = 9 id = 53008 } # アブドレザ・アフカーミ
  chiefofnavy            = { type = 9 id = 53009 } # アーマッド・ミラ・コスラヴァニ
  chiefofair             = { type = 9 id = 53010 } # アーマッド・カーン・ナクジャーヴァン

  landunit = {
    id       = { type = 16600 id = 1 }
    name     = "ペルシア軍"
    location = 1502
    division = {
      id             = { type = 16600 id = 2 }
      name           = "第1歩兵師団"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 16600 id = 3 }
      name           = "第1騎兵師団"
      type           = cavalry
    }
  }
}
