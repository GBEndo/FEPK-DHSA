
##############################
# Country definition for PRU #
##############################

province =
{ id         = 830
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # ���}

#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 830
  manpower               = 22
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 831 829 830 821 816 818 }
  ownedprovinces         = { 831 829 830 821 816 }
  controlledprovinces    = { 831 829 830 821 816 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 3130 3410 3470 6010 3010 3070 3400 8020 8040 8050 }
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "PRU" NumberOfSpies = 4 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 39001 }
  headofgovernment       = { type = 9 id = 39002 }
  foreignminister        = { type = 9 id = 39003 }
  armamentminister       = { type = 9 id = 39004 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39006 }
  chiefofstaff           = { type = 9 id = 39007 }
  chiefofarmy            = { type = 9 id = 39008 }
  chiefofnavy            = { type = 9 id = 39009 }
  chiefofair             = { type = 9 id = 39010 }
  landunit =
  { id       = { type = 17600 id = 1 }
    name     = "�y���[���R"
    location = 830
    division =
    { id       = { type = 17600 id = 2 }
      name     = "�y���[��1�����t�c�u�{���O�l�V�v"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 3 }
      name     = "�y���[��2�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 4 }
      name     = "�y���[��3�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 5 }
      name     = "�y���[��1���ꕺ���c"
      strength = 100
      type     = bergsjaeger
    }
  }
  navalunit =
  { id       = { type = 17600 id = 6 }
    name     = "�y���[�C�R"
    location = 830
    base     = 830
    # Two DDs:
    division =
    { id    = { type = 17600 id = 7 }
      name  = "�X���A�i��"
      type  = destroyer
      model = 0
    }
    # Built 1907:
    division =
    { id    = { type = 17600 id = 8 }
      name  = "ARP �A���~�����e�E�O���E"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 17600 id = 9 }
      name  = "ARP �R���l���E�{���O�l�V"
      type  = heavy_cruiser
      model = 0
    }
    # Submarine division:
    division =
    { id    = { type = 17600 id = 10 }
      name  = "�^�N�i��"
      type  = submarine
      model = 1
    }
  }
}