
##############################
# Country definition for GRE #
##############################

province = { id = 392 landfort = 5 } # Ioannina
province =
{ id         = 396
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # Crete
province =
{ id         = 401
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Athens
province = { id = 411 landfort = 5 anti_air = 2 } # Salonika

#####################
# Country main data #
#####################

country =
{ tag                    = GRE
  manpower               = 70
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 401
  transports             = 40
  escorts                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 5
    freedom           = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 409 414}
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2400 2510 5010 5080 5090 5190 6010 3010 3020 3070 3130 3400 8020 8040
                             8050
                           }
  diplomacy =
  { relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
    relation =
    { tag        = YUG
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 18208 }	#�A���N�T���h���X�E�U�C�~�X
  headofgovernment       = { type = 9 id = 18209 }	#�p�i�M�X�E�c�@���_���X
  foreignminister        = { type = 9 id = 18210 }	#�f�B�~�g���I�X�E�}�L�V���X
  armamentminister       = { type = 9 id = 18091 }	#�A���N�V���[�E�c�@���g�X
  ministerofsecurity     = { type = 9 id = 18114 }	#�Q�I���M�I�X�E�j�R���C�f�X
  ministerofintelligence = { type = 9 id = 18134 }	#�A�i�X�^�V�I�X�E�o���f�B���B���A�X
  chiefofstaff           = { type = 9 id = 18155 }	#�M�I���M�I�X�E�R���f�B���X
  chiefofarmy            = { type = 9 id = 18212 }	#�M�I���M�I�X�E�R���f�B���X
  chiefofnavy            = { type = 9 id = 18213 }	#�A���N�T���h���X�E�n�`�L���A�R�X
  chiefofair             = { type = 9 id = 18010 }	#�G���t�e���I�X�E���F�l�[���X
  landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "�G���i�X�������R"
    division =
    { id       = { type = 15500 id = 2 }
      name     = "��2�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 3 }
      name     = "��3�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 4 }
      name     = "��4�����t�c"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 15500 id = 5 }
    location = 403
    name     = "�G���i�X��1�R"
    division =
    { id       = { type = 15500 id = 6 }
      name     = "��1�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "��9�����t�c"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 15500 id = 8 }
    location = 411
    name     = "�G���i�X��2�R"
    division =
    { id       = { type = 15500 id = 9 }
      name     = "��6�����t�c"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 10 }
      name     = "��10�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 11 }
      name     = "��11�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 12 }
      name     = "��17�����t�c"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 13 }
    location = 403
    name     = "�G���i�X��3�R"
    division =
    { id       = { type = 15500 id = 14 }
      name     = "��7�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 15 }
      name     = "��14�����t�c"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 15500 id = 16 }
    location = 392
    name     = "�G���i�X��4�R"
    division =
    { id       = { type = 15500 id = 17 }
      name     = "��12�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 18 }
      name     = "��13�����t�c"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 19 }
    location = 396
    name     = "�G���i�X��5�R"
    division =
    { id       = { type = 15500 id = 20 }
      name     = "��5�����t�c"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 21 }
      name     = "��8�����t�c"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 22 }
      name     = "��1�R���t�c"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
  navalunit =
  { id       = { type = 15500 id = 23 }
    location = 401
    base     = 401
    name     = "�G���i�X�����C�R"
    division =
    { id    = { type = 15500 id = 30 }
      name  = "BEN �Q�I���M�I�X�E�A���F���t"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 15500 id = 31 }
      name  = "BEN �w��"
      type  = light_cruiser
      model = 0
    }
    division =
    { id       = { type = 15500 id = 28 }
      name     = "��1�쒀��"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 32 }
      name     = "��2�쒀��"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 29 }
      name     = "��1������"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id       = { type = 15500 id = 33 }
      name     = "��2������"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id   = { type = 15500 id = 24 }
      name = "��1�C��A����"
      type = transport
    }
    division =
    { id   = { type = 15500 id = 25 }
      name = "��2�C��A����"
      type = transport
    }
  }
}
