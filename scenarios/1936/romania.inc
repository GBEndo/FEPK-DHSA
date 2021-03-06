##############################
# Country definition for ROM #
##############################
province = {
  id = 423 # �R���X�^���c�@
  ic = 1
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 424 # �u�J���X�g
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}
province = { id = 431 ic = 2 anti_air = 3 } # �v���C�F�V���e�B
province = { id = 435 anti_air = 1 } # �C�Y�}�C�[��

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  capital            = 424 # �u�J���X�g
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }

  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  controlledprovinces    = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }

  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2020 2290 2300 2310 2400 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3020 3400 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 22001 } # �J����2��
  headofgovernment       = { type = 9 id = 22002 } # �Q�I���O�E�^�^���X�N
  foreignminister        = { type = 9 id = 22003 } # �j�R���G�E�e�B�g�D���X�N
  armamentminister       = { type = 9 id = 22004 } # �R���X�^���`���E�u���e�B�A�k
  ministerofsecurity     = { type = 9 id = 22005 } # �C�X�g���[�e�E�}�C�Z�X�N
  ministerofintelligence = { type = 9 id = 22006 } # �~�n�C���E�����]�t
  chiefofstaff           = { type = 9 id = 22007 } # �C�I���E�A���g�l�X�N
  chiefofarmy            = { type = 9 id = 22008 } # �}�����E�V�A�E�X
  chiefofnavy            = { type = 9 id = 22009 } # �j�R���G�E�J�����t�B��
  chiefofair             = { type = 9 id = 22010 } # �_���e�E���B�U���e

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "��7�R�c"
    location = 495
    division = {
      id             = { type = 20600 id = 2 }
      name           = "��1�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "��18�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 4 }
      name           = "��19�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 5 }
    name     = "��1�R�c"
    location = 426
    division = {
      id             = { type = 20600 id = 6 }
      name           = "��2�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 7 }
      name           = "��3�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 8 }
      name           = "��4�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 9 }
      name           = "��11�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 10 }
    name     = "��5�R�c"
    location = 430
    division = {
      id             = { type = 20600 id = 11 }
      name           = "��5�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 12 }
      name           = "��6�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 13 }
      name           = "��13�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 14 }
    name     = "��4�R�c"
    location = 424
    division = {
      id             = { type = 20600 id = 15 }
      name           = "��7�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 16 }
      name           = "��8�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 17 }
      name           = "��14�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 47 }
      name           = "��1���b�t�c"
      type           = light_armor
      model          = 0
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 18 }
    name     = "��2�R�c"
    location = 431
    division = {
      id             = { type = 20600 id = 19 }
      name           = "��9�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 20 }
      name           = "��10�����t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 21 }
    name     = "��3�R�c"
    location = 435
    division = {
      id             = { type = 20600 id = 22 }
      name           = "��12�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 23 }
      name           = "��15�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 24 }
      name           = "��21�����t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 25 }
    name     = "��6�R�c"
    location = 433
    division = {
      id             = { type = 20600 id = 26 }
      name           = "��16�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 27 }
      name           = "��17�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 28 }
      name           = "��20�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20600 id = 29 }
    name     = "�R�x���c"
    location = 429
    division = {
      id             = { type = 20600 id = 30 }
      name           = "��1�R�x�����t�c"
      type           = bergsjaeger
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 31 }
      name           = "��2�R�x�����t�c"
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 32 }
      name           = "��3�R�x�����t�c"
      type           = bergsjaeger
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 33 }
    name     = "���[�}�j�A�R���c"
    location = 431
    division = {
      id             = { type = 20600 id = 34 }
      name           = "��1�R���t�c"
      type           = cavalry
      extra          = artillery
      strength       = 40
    }
    division = {
      id             = { type = 20600 id = 35 }
      name           = "��5�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 36 }
      name           = "��6�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 37 }
      name           = "��7�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 38 }
      name           = "��8�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 39 }
      name           = "��9�R���t�c"
      type           = cavalry
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 20600 id = 40 }
    name     = "���[�}�j�A�͑�"
    location = 423
    base     = 423
    division = {
      id             = { type = 20600 id = 41 }
      name           = "NMS ���Q���E�t�F���f�B�i���h��"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 20600 id = 49 }
      name           = "NMS �f���t�B�k����"
      type           = submarine
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 20600 id = 42 }
    name     = "���v�^��R"
    location = 424
    base     = 424
    division = {
      id             = { type = 20600 id = 43 }
      name           = "��1�퓬�q��Q"
      type           = interceptor
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 44 }
      name           = "��1��p�����q��Q"
      type           = tactical_bomber
      model          = 0
      strength       = 10
    }
    division = {
      id             = { type = 20600 id = 45 }
      name           = "��1����q��Q"
      type           = naval_bomber
      model          = 0
      strength       = 28
    }
  }
}
