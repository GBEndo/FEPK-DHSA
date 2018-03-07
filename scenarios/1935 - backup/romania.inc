
##############################
# Country definition for ROM #
##############################

province =
{ id         = 423
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 1
}              # �R���X�^���c�@
province =
{ id       = 424
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}            # �u�J���X�g
province = { id = 431 anti_air = 3 ic = 2 } # �v���G�X�e�B
province = { id = 435 anti_air = 1 } # �C�X�}�C��

#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424
  manpower               = 150
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 3 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  controlledprovinces    = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2020 2290 2300 2310 2400 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010
                             6020 3010 3020 3400 8040 8050
                           }
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation =
    { tag        = TUR
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation =
    { tag        = YUG
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  headofstate            = { type = 9 id = 22001 }
  headofgovernment       = { type = 9 id = 22002 }
  foreignminister        = { type = 9 id = 22003 }
  armamentminister       = { type = 9 id = 22004 }
  ministerofsecurity     = { type = 9 id = 22005 }
  ministerofintelligence = { type = 9 id = 22006 }
  chiefofstaff           = { type = 9 id = 22007 }
  chiefofarmy            = { type = 9 id = 22008 }
  chiefofnavy            = { type = 9 id = 22009 }
  chiefofair             = { type = 9 id = 22010 }
  landunit =
  { location = 495 # Timisoara
    name     = "��7�R�c"
    id       = { type = 20600 id = 1 }
    division =
    { id       = { type = 20600 id = 2 }
      name     = "��1�����t�c" # Timisoara
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 3 }
      name     = "��18�����t�c" # Sibiu
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 4 }
      name     = "��19�����t�c"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 426 # Craiova
    name     = "��1�R�c"
    id       = { type = 20600 id = 5 }
    division =
    { id       = { type = 20600 id = 6 }
      name     = "��2�����t�c"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 20600 id = 7 }
      name     = "��3�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 8 }
      name     = "��4�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 9 }
      name     = "��11�����t�c"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 430 # Brasov
    name     = "��5�R�c"
    id       = { type = 20600 id = 10 }
    division =
    { id       = { type = 20600 id = 11 }
      name     = "��5�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 12 }
      name     = "��6�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 13 }
      name     = "��13�����t�c"
      type     = infantry
      extra    = anti_air
      strength = 70
    }
  }
  landunit =
  { location = 424 # Bucuresti
    name     = "��4�R�c"
    id       = { type = 20600 id = 14 }
    division =
    { id       = { type = 20600 id = 15 }
      name     = "��7�����t�c"
      type     = infantry
      strength = 70
      extra    = anti_air
    }
    division =
    { id       = { type = 20600 id = 16 }
      name     = "��8�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 17 }
      name     = "��14�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 47 }
      name     = "��1���b�t�c"
      type     = light_armor
      model    = 0
      strength = 60
    }
  }
  landunit =
  { location = 431
    name     = "��2�R�c"
    id       = { type = 20600 id = 18 }
    division =
    { id       = { type = 20600 id = 19 }
      name     = "��9�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 20 }
      name     = "��10�����t�c"
      type     = infantry
      extra    = anti_tank
      strength = 70
    }
  }
  landunit =
  { location = 435 # Chisinau
    name     = "��3�R�c"
    id       = { type = 20600 id = 21 }
    division =
    { id       = { type = 20600 id = 22 }
      name     = "��12�����t�c"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 20600 id = 23 }
      name     = "��15�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 24 }
      name     = "��21�����t�c"
      type     = infantry
      strength = 70
      extra    = anti_tank
    }
  }
  landunit =
  { location = 433
    name     = "��6�R�c"
    id       = { type = 20600 id = 25 }
    division =
    { id       = { type = 20600 id = 26 }
      name     = "��16�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 27 }
      name     = "��17�����t�c"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 28 }
      name     = "��20�����t�c"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 429
    name     = "�R�x���c"
    id       = { type = 20600 id = 29 }
    division =
    { id       = { type = 20600 id = 30 }
      name     = "��1�R�x�����t�c"
      type     = bergsjaeger
      strength = 100
      extra    = artillery
    }
    division =
    { id       = { type = 20600 id = 31 }
      name     = "��2�R�x�����t�c"
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 20600 id = 32 }
      name     = "��3�R�x�����t�c"
      type     = bergsjaeger
      strength = 100
    }
  }
  landunit =
  { location = 431 # Ploiesti
    name     = "���[�}�j�A�R���c"
    id       = { type = 20600 id = 33 }
    division =
    { id       = { type = 20600 id = 34 }
      name     = "��1�R���t�c"
      type     = cavalry
      strength = 40
      extra    = artillery
    }
    division =
    { id       = { type = 20600 id = 35 }
      name     = "��5�R���t�c"
      type     = cavalry
      strength = 30
    }
    division =
    { id       = { type = 20600 id = 36 }
      name     = "��6�R���t�c"
      type     = cavalry
      strength = 30
    }
    division =
    { id       = { type = 20600 id = 37 }
      name     = "��7�R���t�c"
      type     = cavalry
      strength = 30
    }
    division =
    { id       = { type = 20600 id = 38 }
      name     = "��8�R���t�c"
      type     = cavalry
      strength = 30
    }
    division =
    { id       = { type = 20600 id = 39 }
      name     = "��9�R���t�c"
      type     = cavalry
      strength = 30
    }
  }
  navalunit =
  { location = 423 # Constanta
    base     = 423
    name     = "���[�}�j�A�͑�"
    id       = { type = 20600 id = 40 }
    division =
    { id    = { type = 20600 id = 41 }
      name  = "�uNMS ���Q���E�t�F���f�B�i���h�v��"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 20600 id = 49 }
      name  = "�uNMS �f���t�B�k���v��"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 424 # Bucuresti
    base     = 424
    name     = "���v�^��R"
    id       = { type = 20600 id = 42 }
    division =
    { id       = { type = 20600 id = 43 }
      name     = "��1�퓬�q��Q"
      type     = interceptor
      model    = 0
      strength = 50
    }
    division =
    { id       = { type = 20600 id = 44 }
      name     = "��1��p�����q��Q"
      type     = tactical_bomber
      model    = 0
      strength = 10
    }
    division =
    { id       = { type = 20600 id = 45 }
      name     = "��1����q��Q"
      type     = naval_bomber
      model    = 0
      strength = 28
    }
  }
}