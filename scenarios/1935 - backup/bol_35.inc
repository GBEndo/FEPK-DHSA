
##############################
# Country definition for BOL #
##############################

province =
{ id       = 832
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # La Paz

#####################
# Country main data #
#####################

country =
{ tag                    = BOL
  manpower               = 8
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 832
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }
  SpyInfo                = { country = "PAR" NumberOfSpies = 3 }
  SpyInfo                = { country = "PRU" NumberOfSpies = 3 }
  SpyInfo                = { country = "URU" NumberOfSpies = 3 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 43001 }
  headofgovernment       = { type = 9 id = 43002 }
  foreignminister        = { type = 9 id = 43003 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43005 }
  ministerofintelligence = { type = 9 id = 43006 }
  chiefofstaff           = { type = 9 id = 43007 }
  chiefofarmy            = { type = 9 id = 43008 }
  chiefofnavy            = { type = 9 id = 43009 }
  chiefofair             = { type = 9 id = 43010 }
  # Human Wave
  landunit =
  { id       = { type = 17000 id = 40 }
    name     = "�{���r�A���R"
    location = 832
    division =
    { id       = { type = 17000 id = 4000 }
      name     = "��1�������c�u�V�����E�{���[�o���v"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 17000 id = 4001 }
      name     = "�{���r�A��1�������c"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4002 }
      name     = "�{���r�A��2�������c"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4003 }
      name     = "��1�R�����c�u�`���R�v"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
}
