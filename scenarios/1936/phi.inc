##############################
# Country definition for PHI #
##############################
province = {
  id = 1737 # マニラ
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 1739 # クラークフィールド
  anti_air = 4
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PHI
  puppet             = USA
  control            = USA
  capital            = 1737 # マニラ
  manpower           = 0
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 500
  money          = 10
  transports     = 50

  diplomacy = {
    relation = { tag = AST value = 40 }
    relation = { tag = JAP value = 1 }
    relation = { tag = LIB value = 200 }
    relation = { tag = NZL value = 25 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }

  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }

  techapps               = { 4010 2150 2290 1010 1190 5080 5090 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 50001 } # マニュエル・ケソン
  headofgovernment       = { type = 9 id = 50002 } # セルヒオ・オスメニャナ
  foreignminister        = { type = 9 id = 50003 } # キンティン・パレデス
  armamentminister       = { type = 9 id = 50004 } # エルピディオ・キリノ
  ministerofsecurity     = { type = 9 id = 50005 } # ホセ・ユロ
  ministerofintelligence = { type = 9 id = 50006 } # ベニト・N・エブエン
  chiefofstaff           = { type = 9 id = 50007 } # パウリノ・サントス
  chiefofarmy            = { type = 9 id = 50008 } # レオンシオ・S・タン
  chiefofnavy            = { type = 9 id = 50009 } # サンティアゴ・ヌバル
  chiefofair             = { type = 9 id = 50010 } # ペラージョ・クルス

  landunit = {
    id       = { type = 11804 id = 1 }
    name     = "マニラ守備部隊"
    location = 1737
    division = {
      id             = { type = 11804 id = 2 }
      name           = "警察軍"
      type           = garrison
      strength       = 30
    }
  }
}
