##############################
# Country definition for IRQ #
##############################
province = {
  id = 1823 # バスラ
  anti_air = 2
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 1864 anti_air = 1 } # モスル
province = {
  id = 1866 # バグダッド
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = IRQ
  puppet             = ENG
  control            = ENG
  capital            = 1866 # バグダッド
  manpower           = 15
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 1000
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }

  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 }
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 91001 } # ガージー1世
  headofgovernment       = { type = 9 id = 91002 } # ヤシン・パシャ・アル・ハシミ
  foreignminister        = { type = 9 id = 91003 } # ヌーリー・アッ＝サイード
  armamentminister       = { type = 9 id = 91004 } # ガージー1世
  ministerofsecurity     = { type = 9 id = 91005 } # アリ・アブン・フセイン
  ministerofintelligence = { type = 9 id = 91006 } # ヤシン・パシャ・アル・ハシミ
  chiefofstaff           = { type = 9 id = 91007 } # バクル・シドゥキ
  chiefofarmy            = { type = 9 id = 91008 } # フレデリク・G・ピーク
  chiefofnavy            = { type = 9 id = 91009 } # A・R・H・ナイ
  chiefofair             = { type = 9 id = 91010 } # アリ・ベン・ジャワド

  landunit = {
    id       = { type = 22500 id = 3 }
    name     = "イラク王立軍"
    location = 1866
    division = {
      id             = { type = 22500 id = 4 }
      name           = "イラク第1歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 5 }
      name           = "イラク第2歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 6 }
      name           = "イラク第3歩兵師団"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 7 }
      name           = "イラク第4歩兵師団"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 8 }
      name           = "イラク第1自動車化歩兵師団"
      type           = infantry
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 22500 id = 1 }
    name     = "王立陸軍航空隊"
    location = 1866
    base     = 1866
    division = {
      id             = { type = 22500 id = 2 }
      name           = "RIAF 第1戦闘航空隊"
      type           = interceptor
      model          = 0
      strength       = 30
    }
  }
}
