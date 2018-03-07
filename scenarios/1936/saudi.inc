##############################
# Country definition for SAU #
##############################
province = {
  id = 1804 # ���f�B�i
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SAU
  capital            = 1807 # �����h
  manpower           = 27
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  SpyInfo                = { country = "SAU" NumberOfSpies = 4 }

  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 63001 } # �A�u�h�D���E�A�W�Y�E�A���E�T�E�h
  headofgovernment       = { type = 9 id = 63002 } # �T�E�h�E�A���E�T�E�h
  foreignminister        = { type = 9 id = 63003 } # �t�@�C�T���E�A���E�T�E�h
  armamentminister       = { type = 9 id = 63004 } # �t�@�C�T���E�A���E�T�E�h
  ministerofsecurity     = { type = 9 id = 63005 } # �n�[���h�E�A���E�T�E�h
  ministerofintelligence = { type = 9 id = 63006 } # �n�[���h�E�A���E�T�E�h
  chiefofstaff           = { type = 9 id = 63007 } # �T�E�h�E�A���E�T�E�h
  chiefofarmy            = { type = 9 id = 63008 } # �t�@�C�T���E�A���E�T�E�h
  chiefofnavy            = { type = 9 id = 63009 } # �t�@�C�T���E�A���E�T�E�h
  chiefofair             = { type = 9 id = 63010 } # �t�@�C�T���E�A���E�T�E�h

  landunit = {
    id       = { type = 22600 id = 1 }
    name     = "�T�E�W�����R"
    location = 1807
    division = {
      id             = { type = 22600 id = 2 }
      name           = "�T�E�W��1���������t�c"
      type           = infantry
    }
    division = {
      id             = { type = 22600 id = 3 }
      name           = "�����߉q�t�c"
      type           = militia
    }
    division = {
      id             = { type = 22600 id = 4 }
      name           = "�T�E�W�����R�����u���f�B�i�v"
      type           = cavalry
    }
  }
}