
##############################
# Country definition for BEL #
##############################

province =
{ id         = 45
  naval_base = { size = 3 current_size = 3 }
}              # �Q���g
province =
{ id       = 50
  air_base = { size = 6 current_size = 3 }
  anti_air = 2
}            # �A���g���[�v
province =
{ id       = 51
  air_base = { size = 6 current_size = 6 }
  anti_air = 1
}            # �u�����b�Z��
province = { id = 68 landfort = 2 anti_air = 2 } # ���G�[�W��
province =
{ id         = 1095
  oilpool    = 1
  supplypool = 50
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}              # �o�i�i

#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 51
  manpower               = 40
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  transports             = 100
  escorts                = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 2
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 6 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 8 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  SpyInfo                = { country = "SAF" NumberOfSpies = 3 }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2510  1010  1020  1310  1190  1200  1110  9010  5010 
                             5020  5080  5090  5190  6010  6020  14000
                           }
  diplomacy =
  { relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 15001 }
  headofgovernment       = { type = 9 id = 15002 }
  foreignminister        = { type = 9 id = 15003 }
  armamentminister       = { type = 9 id = 15004 }
  ministerofsecurity     = { type = 9 id = 15005 }
  ministerofintelligence = { type = 9 id = 15006 }
  chiefofstaff           = { type = 9 id = 15007 }
  chiefofarmy            = { type = 9 id = 15008 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15010 }
  landunit =
  { id       = { type = 11500 id = 1 }
    location = 51
    name     = "��1�R"
    division =
    { id    = { type = 11500 id = 2 }
      name  = "��1�����t�c"
      type  = infantry
      model = 0
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 11500 id = 3 }
    location = 52
    name     = "��2�R"
    division =
    { id    = { type = 11500 id = 4 }
      name  = "��2�����t�c"
      type  = infantry
      model = 0
    }
    division =
    { id    = { type = 11500 id = 5 }
      name  = "��3�����t�c"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 6 }
    location = 51
    name     = "��3�R"
    division =
    { id    = { type = 11500 id = 7 }
      name  = "��1���t�c"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 8 }
    location = 69
    name     = "��4�R"
    division =
    { id    = { type = 11500 id = 9 }
      name  = "��4�����t�c"
      type  = infantry
      model = 0
      extra = engineer
    }
    division =
    { id    = { type = 11500 id = 10 }
      name  = "��5�����t�c"
      type  = infantry
      model = 0
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 11500 id = 11 }
    location = 70
    name     = "��5�R"
    division =
    { id    = { type = 11500 id = 12 }
      name  = "��6�����t�c"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 13 }
    location = 68
    name     = "��6�R"
    division =
    { id    = { type = 11500 id = 14 }
      name  = "��2���t�c"
      type  = infantry
      model = 0
    }
    division =
    { id    = { type = 11500 id = 15 }
      name  = "��7�����t�c"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 16 }
    location = 45
    name     = "��7�R"
    division =
    { id    = { type = 11500 id = 17 }
      name  = "��1�A���f���k���t�c"
      type  = bergsjaeger
      model = 0
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 11500 id = 18 }
    location = 51
    name     = "���R���R"
    division =
    { id    = { type = 11500 id = 19 }
      name  = "��1�����ԉ��t�c"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id    = { type = 11500 id = 20 }
      name  = "��1�擱�R���t�c"
      type  = cavalry
      model = 1
    }
  }
  landunit =
  { id       = { type = 11500 id = 21 }
    location = 1095
    name     = "�A���n�߉q�R"
    division =
    { id    = { type = 11500 id = 22 }
      name  = "��1�B���߉q�t�c"
      type  = infantry
      model = 0
    }
  }
  navalunit =
  { id       = { type = 11500 id = 23 }
    location = 45
    base     = 45
    name     = "��1�A����"
    division =
    { id   = { type = 11500 id = 24 }
      name = "�C�R��1�A����"
      type = transport
    }
    division =
    { id   = { type = 11500 id = 26 }
      name = "�C�R��2�A����"
      type = transport
    }
  }
}
