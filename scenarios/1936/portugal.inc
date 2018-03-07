##############################
# Country definition for POR #
##############################
province = { id = 335 anti_air = 1 } # �|���g
province = {
  id = 336 # ���X�{��
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 983 # �r�T�E
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1090 # �T���g��
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1094 # �J�r���_
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1101 # �x���Q��
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1123 # �C�j�����o�l
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1146 # ���F���f������
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1316 # �S��
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1658 # ���`���[��
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1867 # �A�]���X����
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = POR
  capital            = 336 # ���X�{��
  manpower           = 70
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 50
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }

  nationalprovinces      = { 335 336 337 344 345 1867 }
  ownedprovinces         = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  controlledprovinces    = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }

  techapps               = { 1010 1110 1190 2010 2020 2150 2290 2300 2310 2450 2460 2510 3010 3020 3070 3400 3410 3470 4010 4020 4120 5010 5080 5090 5190 6010 6020 8040 8050 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 9001 } # �A���g�j�I�E�f�E�t���S�\�E�J�����i
  headofgovernment       = { type = 9 id = 9002 } # A�E�I�����F�C���E�T���U�[��
  foreignminister        = { type = 9 id = 9003 } # A�E�I�����F�C���E�T���U�[��
  armamentminister       = { type = 9 id = 9004 } # ���E���E�u�����_��
  ministerofsecurity     = { type = 9 id = 9005 } # �}���I�E�p�C�X�E�\�E�T
  ministerofintelligence = { type = 9 id = 9006 } # �y�h���E�e�I�g�j�I�E�y���C��
  chiefofstaff           = { type = 9 id = 9007 } # �^�b�\�E�~�����_�E�J�u����
  chiefofarmy            = { type = 9 id = 9008 } # J�EA�E���o�g�E�O�G��
  chiefofnavy            = { type = 9 id = 9009 } # �W���C���E�A�t���C�V��
  chiefofair             = { type = 9 id = 9010 } # �}�j���G���E�S�E���F�C�A

  landunit = {
    id       = { type = 19600 id = 1000 }
    name     = "�|���g�K�����R"
    location = 336
    division = {
      id             = { type = 19600 id = 1001 }
      name           = "��1�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 19600 id = 1002 }
      name           = "��2�����t�c"
      type           = infantry
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 19600 id = 1003 }
    name     = "�|���g�K���C��A����"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 1004 }
      name           = "��1����A����"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 19600 id = 1005 }
    name     = "�R���j�A����A����"
    location = 983
    base     = 983
    division = {
      id             = { type = 19600 id = 1006 }
      name           = "��2����A����"
      type           = transport
    }
    division = {
      id             = { type = 19600 id = 1007 }
      name           = "�h�E����"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 19600 id = 9302 }
    name     = "�|���g�K���C�R"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9303 }
      name           = "���B�A�i�h�J�V���e����"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19600 id = 9304 }
      name           = "��1������"
      type           = submarine
      model          = 1
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 19600 id = 9300 }
    name     = "�|���g�K����R"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9301 }
      name           = "��1��p������"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }
}