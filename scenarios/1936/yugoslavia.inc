##############################
# Country definition for YUG #
##############################
province = { id = 382 anti_air = 2 } # �U�N���u
province = {
  id = 384 # �X�v���g
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 388 anti_air = 2 } # �h�D�u�����j�N
province = {
  id = 389 # �|�h�S���c�@
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 453 # �x�I�O���[�h
  anti_air = 3
  air_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = YUG
  capital            = 453 # �x�I�O���[�h
  manpower           = 155
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "YUG" NumberOfSpies = 7 }

  nationalprovinces      = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  ownedprovinces         = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  controlledprovinces    = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 4120 9010 6210 6300 3010 3020 3030 3400 8040 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 20001 } # �p�����E�J���W�����W�F���B�`
  headofgovernment       = { type = 9 id = 20002 } # �~�����E�X�g�W���f�B�m���B�b�`
  foreignminister        = { type = 9 id = 20003 } # �~�����E�X�g�W���f�B�m���B�b�`
  armamentminister       = { type = 9 id = 20004 } # �{�K���W���u�E�W�F���e�B�N
  ministerofsecurity     = { type = 9 id = 20005 } # �p�����E�J���W�����W�F���B�`
  ministerofintelligence = { type = 9 id = 20006 } # �{�����H�W�F�E���V�����B�b�`
  chiefofstaff           = { type = 9 id = 20007 } # �y�[�^���E�R�V�b�N
  chiefofarmy            = { type = 9 id = 20008 } # �A���N�T���_�[�E�V���J�[���}���R���B�b�`
  chiefofnavy            = { type = 9 id = 20009 } # �{�S���W���u�E�C���b�`
  chiefofair             = { type = 9 id = 20010 } # �f���T���E�V�����B�b�`

  landunit = {
    id       = { type = 19800 id = 1 }
    name     = "���[�S�X���r�A��4�R"
    location = 453
    division = {
      id             = { type = 19800 id = 2 }
      name           = "��27�T�t�X�J�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 3 }
    name     = "���[�S�X���r�A��7�R"
    location = 453
    division = {
      id             = { type = 19800 id = 4 }
      name           = "��32�g���O���t�X�J�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 5 }
      name           = "�g���O���t�X�L������"
      type           = bergsjaeger
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 6 }
      name           = "��1�R���t�c"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 7 }
    name     = "���[�S�X���r�A��1�R"
    location = 453
    division = {
      id             = { type = 19800 id = 8 }
      name           = "��7�|�e�B�X�J�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 9 }
      name           = "��3�R���t�c"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 10 }
    name     = "���[�S�X���r�A��2�R"
    location = 386
    division = {
      id             = { type = 19800 id = 11 }
      name           = "��10�{�T���X�J�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 12 }
      name           = "��17�����o�X�J�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 13 }
    name     = "���[�S�X���r�A��3�R"
    location = 415
    division = {
      id             = { type = 19800 id = 14 }
      name           = "��13�w���c�F�S���@�c�J�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 15 }
      name           = "��15�[�c�J�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 16 }
    name     = "��3�R"
    location = 384
    division = {
      id             = { type = 19800 id = 17 }
      name           = "��5�X�}�f�C�X�J�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 18 }
      name           = "��20�u���K���j�c�J�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 19 }
      name           = "��22�C�o���X�J�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 20 }
    name     = "��5�R"
    location = 380
    division = {
      id             = { type = 19800 id = 21 }
      name           = "��8�N���C���X�J�����t�c"
      type           = infantry
      extra          = artillery
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 22 }
      name           = "��9�e�B���c�J�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 23 }
      name           = "��2�R���t�c"
      type           = cavalry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 19800 id = 24 }
    name     = "��6�R"
    location = 453
    division = {
      id             = { type = 19800 id = 25 }
      name           = "��3�h�D�i�t�X�J�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 19800 id = 26 }
      name           = "��4�R���t�c"
      type           = cavalry
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 19800 id = 30 }
    name     = "���[�S�X���r�A�C�R"
    location = 384
    base     = 384
    division = {
      id             = { type = 19800 id = 32 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 19800 id = 33 }
      name           = "��1������"
      type           = submarine
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 19800 id = 27 }
    name     = "���[�S�X���r�A��R"
    location = 453
    base     = 453
    division = {
      id             = { type = 19800 id = 28 }
      name           = "��2�퓬�q��A��"
      type           = interceptor
      model          = 0
      strength       = 30
    }
    division = {
      id             = { type = 19800 id = 29 }
      name           = "��26��p�����@�A��"
      type           = tactical_bomber
      model          = 0
      strength       = 30
    }
  }
}
