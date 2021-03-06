
##############################
# Country definition for SAU #
##############################

province =
{ id         = 1804
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # ���f�B�i

#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1807
  manpower               = 27
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = AUS value = 50 }
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
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  SpyInfo                = { country = "SAU" NumberOfSpies = 4 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "OMN" NumberOfSpies = 3 }
  SpyInfo                = { country = "YEM" NumberOfSpies = 3 }
  SpyInfo                = { country = "PER" NumberOfSpies = 3 }
  SpyInfo                = { country = "AFG" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }
  landunit =
  { location = 1807
    name     = "�T�E�W�����R"
    id       = { type = 22600 id = 1 }
    division =
    { id   = { type = 22600 id = 2 }
      name = "�T�E�W��1���������t�c"
      type = infantry
    }
    division =
    { id   = { type = 22600 id = 3 }
      name = "�����߉q�t�c"
      type = militia
    }
    division =
    { id   = { type = 22600 id = 4 }
      name = "�T�E�W�����R�����u���f�B�i�v"
      type = cavalry
    }
  }
}
