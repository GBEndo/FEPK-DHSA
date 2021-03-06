
##############################
# Country definition for BRA #
##############################

province = { id = 847 anti_air = 1 } # �N���e�B�o
province =
{ id         = 848
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # �|���g�A���O��
province = { id = 883 anti_air = 2 } # �S�C�A�X
province =
{ id         = 885
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # ���I�f�W���l�C��
province =
{ id         = 886
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # �T���p�E��

#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 125
  capital                = 885
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3070 3130
                             3250 3400 8010 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  SpyInfo                = { country = "BRA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  SpyInfo                = { country = "PRU" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34003 }
  armamentminister       = { type = 9 id = 34211 }
  ministerofsecurity     = { type = 9 id = 34200 }
  ministerofintelligence = { type = 9 id = 34006 }
  chiefofstaff           = { type = 9 id = 34209 }
  chiefofarmy            = { type = 9 id = 34210 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34212 }
  landunit =
  { id       = { type = 18000 id = 1 }
    name     = "�u���W����1���R"
    location = 883
    division =
    { id       = { type = 18000 id = 2 }
      name     = "��1�����t�c"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 18000 id = 3 }
      name     = "��2�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 4 }
      name     = "��268�����x���t�c"
      strength = 100
      type     = militia
      extra    = anti_air
    }
    division =
    { id       = { type = 18000 id = 5 }
      name     = "��269�����x���t�c"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 18000 id = 6 }
    name     = "�u���W����2���R"
    location = 885
    division =
    { id       = { type = 18000 id = 7 }
      name     = "��3�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 8 }
      name     = "��92�R���t�c"
      strength = 100
      type     = cavalry
    }
  }
  navalunit =
  { id       = { type = 18000 id = 11 }
    location = 885
    base     = 885
    name     = "�C��A����"
    division =
    { id   = { type = 18000 id = 12 }
      name = "��1�C��A����"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 13 }
      name = "��2�C��A����"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 14 }
      name = "��3�C��A����"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 15 }
      name = "��4�C��A����"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 16 }
      name = "��5�C��A����"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 17 }
      name = "��6�C��A����"
      type = transport
    }
  }
  navalunit =
  { name     = "�u���W���C�R"
    id       = { type = 18000 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 18000 id = 19 }
      name  = "NRB �T���p�E��"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 18000 id = 29 }
      name  = "NRB �~�i�X�W�F���C�X"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 18000 id = 21 }
      name  = "NRB �o�C�A"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 18000 id = 23 }
      name  = "NRB ���I�O�����f�h�X��"
      type  = light_cruiser
      model = 0
    }
  }
  airunit =
  { id       = { type = 18000 id = 9 }
    name     = "�u���W����R"
    location = 885
    base     = 885
    division =
    { id       = { type = 18000 id = 10 }
      name     = "��1�퓬�q��Q"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
}
