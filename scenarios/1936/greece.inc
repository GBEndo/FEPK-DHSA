##############################
# Country definition for GRE #
##############################
province = { id = 392 landfort = 5 } # �C�I�A�j�i
province = {
  id = 396 # �N���^
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 401 # �A�e�l
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 411 landfort = 5 anti_air = 2 } # �T���j�J

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  capital            = 401 # �A�e�l
  manpower           = 70
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 40
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }

  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2400 2510 5010 5080 5090 5190 6010 3010 3020 3070 3130 3400 8020 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 18001 } # �Q�I���M�I�X2��
  headofgovernment       = { type = 9 id = 18002 } # �R���X�^���e�B�m�X�E�f�����`�X
  foreignminister        = { type = 9 id = 18003 } # �R���X�^���e�B�m�X�E�f�����`�X
  armamentminister       = { type = 9 id = 18004 } # �Q�I���M�I�X�E�}���g�U���B�m�X
  ministerofsecurity     = { type = 9 id = 18005 } # �Q�I���M�I�X�E���S�Z�e�B�X
  ministerofintelligence = { type = 9 id = 18006 } # �Q�I���M�I�X�E���S�Z�e�B�X
  chiefofstaff           = { type = 9 id = 18007 } # �e�I�h�[���E�p���K���X
  chiefofarmy            = { type = 9 id = 18008 } # �A���N�T���h���X�E�p�p�S�X
  chiefofnavy            = { type = 9 id = 18009 } # �A�i�X�^�V�I�E�T�P�����I�E
  chiefofair             = { type = 9 id = 18010 } # �G���t�e���I�X�E���F�l�[���X

  landunit = {
    id       = { type = 15500 id = 1 }
    name     = "�G���i�X��1�R"
    location = 401
    division = {
      id             = { type = 15500 id = 2 }
      name           = "��2�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 3 }
      name           = "��3�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 4 }
      name           = "��4�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 5 }
    name     = "�G���i�X��2�R"
    location = 403
    division = {
      id             = { type = 15500 id = 6 }
      name           = "��1�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 7 }
      name           = "��9�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 8 }
    name     = "�G���i�X��3�R"
    location = 411
    division = {
      id             = { type = 15500 id = 9 }
      name           = "��6�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 10 }
      name           = "��10�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 11 }
      name           = "��11�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 12 }
      name           = "��17�����t�c"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 13 }
    name     = "�G���i�X��4�R"
    location = 403
    division = {
      id             = { type = 15500 id = 14 }
      name           = "��7�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 15 }
      name           = "��14�����t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 16 }
    name     = "�G���i�X��5�R"
    location = 392
    division = {
      id             = { type = 15500 id = 17 }
      name           = "��12�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 18 }
      name           = "��13�����t�c"
      type           = infantry
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15500 id = 19 }
    name     = "�G���i�X��6�R"
    location = 396
    division = {
      id             = { type = 15500 id = 20 }
      name           = "��5�����t�c"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 21 }
      name           = "��8�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 22 }
      name           = "��1�R���t�c"
      type           = cavalry
      extra          = artillery
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 15500 id = 23 }
    name     = "�G���i�X�����C�R"
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 30 }
      name           = "BEN �Q�I���M�I�X�E�A���F���t"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 15500 id = 31 }
      name           = "BEN �w��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 15500 id = 28 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 32 }
      name           = "��2�쒀��"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 29 }
      name           = "��1������"
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 33 }
      name           = "��2������"
      type           = submarine
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 15500 id = 24 }
      name           = "��1�C��A����"
      type           = transport
    }
    division = {
      id             = { type = 15500 id = 25 }
      name           = "��2�C��A����"
      type           = transport
    }
  }
}
