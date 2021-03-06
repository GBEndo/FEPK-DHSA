
##############################
# Country definition for TUR #
##############################

province =
{ id         = 439
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # �C�Y�~�b�g
province =
{ id       = 448
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
}            # �A���J��

#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 448
  manpower               = 165
  transports             = 35
  escorts                = 10
  tc_mod = 1.0500	#1.0+0.05
  ai_settings	= { flags = {
  	Bosporus = 1
  } }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
    relation =
    { tag        = YUG
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 1010  1110  1190  14000 2010  2020  2150  2290  2300  2310  2400  2450  2460  2510  3010  3020  3070  3130  3190  3400 
                             4010  4020  4120  5010  5080  5090  6210  8010  8020  8040  8050  9010 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  SpyInfo                = { country = "TUR" NumberOfSpies = 7 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  SpyInfo                = { country = "SYR" NumberOfSpies = 3 }
  SpyInfo                = { country = "LEB" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 12001 }
  headofgovernment       = { type = 9 id = 12002 }
  foreignminister        = { type = 9 id = 12003 }
  armamentminister       = { type = 9 id = 12004 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12006 }
  chiefofstaff           = { type = 9 id = 12007 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12009 }
  chiefofair             = { type = 9 id = 12010 }
  landunit =
  { location = 448
    name     = "��1�R"
    id       = { type = 11700 id = 8 }
    division =
    { id           = { type = 11700 id = 9 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��1�����t�c"
    }
    division =
    { id           = { type = 11700 id = 10 }
      type         = infantry
      extra        = artillery
      strength     = 100
      organisation = 30
      name         = "��3�����t�c"
    }
  }
  landunit =
  { location = 409
    name     = "��2�R"
    id       = { type = 11700 id = 11 }
    division =
    { id           = { type = 11700 id = 12 }
      type         = infantry
      extra        = anti_air
      strength     = 100
      organisation = 30
      name         = "��5�����t�c"
    }
  }
  landunit =
  { location = 408
    name     = "��3�R"
    id       = { type = 11700 id = 13 }
    division =
    { id           = { type = 11700 id = 14 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��7�����t�c"
    }
  }
  landunit =
  { location = 445
    name     = "��4�R"
    id       = { type = 11700 id = 15 }
    division =
    { id           = { type = 11700 id = 16 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��9�����t�c"
    }
  }
  landunit =
  { location = 450
    name     = "��5�R"
    id       = { type = 11700 id = 17 }
    division =
    { id           = { type = 11700 id = 18 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��11�����t�c"
    }
  }
  landunit =
  { location = 1851
    name     = "��6�R"
    id       = { type = 11700 id = 19 }
    division =
    { id           = { type = 11700 id = 20 }
      type         = infantry
      extra        = anti_air
      strength     = 100
      organisation = 30
      name         = "��13�����t�c"
    }
  }
  landunit =
  { location = 1855
    name     = "��7�R"
    id       = { type = 11700 id = 21 }
    division =
    { id           = { type = 11700 id = 22 }
      type         = infantry
      extra        = anti_tank
      strength     = 100
      organisation = 30
      name         = "��15�����t�c"
    }
  }
  landunit =
  { location = 1854
    name     = "��8�R"
    id       = { type = 11700 id = 23 }
    division =
    { id           = { type = 11700 id = 24 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��17�����t�c"
    }
  }
  landunit =
  { location = 1852
    name     = "��9�R"
    id       = { type = 11700 id = 25 }
    division =
    { id           = { type = 11700 id = 26 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "��19�����t�c"
    }
  }
  landunit =
  { location = 1853
    name     = "��10�R"
    id       = { type = 11700 id = 27 }
    division =
    { id           = { type = 11700 id = 28 }
      type         = bergsjaeger
      extra        = artillery
      strength     = 80
      organisation = 30
      name         = "��1�R�x�t�c"
    }
  }
  landunit =
  { location = 442
    name     = "�g���R�R���R"
    id       = { type = 11700 id = 29 }
    division =
    { id           = { type = 11700 id = 30 }
      type         = cavalry
      strength     = 100
      organisation = 30
      name         = "��1�R���t�c"
    }
    division =
    { id           = { type = 11700 id = 31 }
      type         = cavalry
      strength     = 100
      organisation = 30
      name         = "��3�R���t�c"
    }
    division =
    { id           = { type = 11700 id = 32 }
      type         = cavalry
      strength     = 50
      organisation = 30
      name         = "��5�\���R���t�c"
    }
  }
  # #####Turkey `36 ######
  navalunit =
  { location = 439
    base     = 439
    name     = "�g���R�C�R"
    id       = { type = 11700 id = 1 }
    division =
    { id    = { type = 11700 id = 3 }
      name  = "TDT �����X"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 11700 id = 4 }
      name  = "TDT �n�~�f�B�G"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11700 id = 5 }
      name  = "TDT ���W�f�B�G"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11700 id = 7 }
      name  = "��1�쒀��"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 11700 id = 6 }
      name  = "��1������"
      type  = submarine
      model = 0
    }
    division =
    { id   = { type = 11700 id = 100 }
      name = "���V�b�h�E�p�V����"
      type = transport
    }
  }
  airunit =
  { location = 448
    base     = 448
    name     = "�g���R��1��R"
    id       = { type = 11700 id = 33 }
    division =
    { id           = { type = 25635 id = 34 }
      type         = interceptor
      model        = 0
      strength     = 48
      organisation = 30
      name         = "��1�퓬�q��Q"
    }
    division =
    { id           = { type = 25635 id = 35 }
      type         = tactical_bomber
      model        = 0
      strength     = 52
      organisation = 30
      name         = "��1��p�����q��Q"
    }
  }
}
