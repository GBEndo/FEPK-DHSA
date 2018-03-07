##############################
# Country definition for POL #
##############################
province = { id = 208 anti_air = 1 } # ���B���j���X
province = {
  id = 211 # ���_
  anti_air = 3
  air_base = { size = 3 current_size = 3 }
}
province = {
  id = 229 # �X�^�j�X�����t
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 303 # �_���c�B�q
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}
province = { id = 305 anti_air = 1 } # �g����
province = { id = 307 anti_air = 2 } # �|�Y�i�j
province = { id = 479 anti_air = 2 } # �N���N�t
province = {
  id = 483 # �E�[�`
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 485 # �����V����
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
}
province = {
  id = 504 # �u���X�g���g�t�X�N
  air_base = { size = 3 current_size = 3 }
}
province = { id = 509 anti_air = 1 } # �X���@�E�L

#####################
# Country main data #
#####################

country = {
  tag                = POL
  capital            = 485 # �����V����
  manpower           = 275
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = {
      tag        = CZE
      value      = -1
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -10 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = -75 }
    relation = {
      tag        = ROM
      value      = 40
      guaranteed = { year = 1934 month = december day = 30 }
    }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "POL" NumberOfSpies = 7 }

  nationalprovinces      = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222 229 562 214 212 221 225 226 227 228 231 218 }
  ownedprovinces         = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222 229 562 214 }
  controlledprovinces    = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222 229 562 214 }

  techapps               = { 1010 1020 1110 1190 1200 1310 14000 2010 2020 2150 2290 2300 2310 2400 2450 2460 2510 3010 3020 3400 3410 3470 4010 4020 4120 4130 5010 5080 5090 5190 6010 6030 8040 8050 9010 9020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 13001 } # �C�O�i�c�B�E���V�`�c�L
  headofgovernment       = { type = 9 id = 13002 } # �}���A���E�Y�B���h�������R�V�`���E�R�t�X�L
  foreignminister        = { type = 9 id = 13003 } # ���[�t�E�x�b�N
  armamentminister       = { type = 9 id = 13004 } # �^�f�E�V���E�J�X�v�W�c�L
  ministerofsecurity     = { type = 9 id = 13005 } # �����f�B�X���t�E���`���L�F���B�`
  ministerofintelligence = { type = 9 id = 13006 } # T�E�y���`���X�L�E�O�W�F�S�V
  chiefofstaff           = { type = 9 id = 13007 } # �G�h���@���g�E���b�c���V�~�O�E�B
  chiefofarmy            = { type = 9 id = 13008 } # �G�h���@���g�E���b�c���V�~�O�E�B
  chiefofnavy            = { type = 9 id = 13009 } # �W���[�W�[�E�X�E�B���X�L
  chiefofair             = { type = 9 id = 13010 } # �W���[�t�E�U�W���b�N

  landunit = {
    id       = { type = 18600 id = 1 }
    name     = "�N���N�t�R"
    location = 479
    division = {
      id             = { type = 18600 id = 2 }
      name           = "��6�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 3 }
      name           = "��7�����t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18600 id = 4 }
      name           = "��22�R�x�����t�c"
      type           = bergsjaeger
    }
    division = {
      id             = { type = 18600 id = 5 }
      name           = "��21�R�x�����t�c"
      type           = bergsjaeger
    }
    division = {
      id             = { type = 18600 id = 6 }
      name           = "��23�����t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18600 id = 7 }
    name     = "�E�[�`�R"
    location = 483
    division = {
      id             = { type = 18600 id = 8 }
      name           = "��2�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 9 }
      name           = "��10�����t�c"
      type           = infantry
      extra          = anti_air
    }
    division = {
      id             = { type = 18600 id = 10 }
      name           = "��29�����t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18600 id = 11 }
    name     = "���u�����R"
    location = 487
    division = {
      id             = { type = 18600 id = 12 }
      name           = "��18�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 13 }
      name           = "��28�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 14 }
      name           = "��30�����t�c"
      type           = infantry
      extra          = anti_tank
    }
  }
  landunit = {
    id       = { type = 18600 id = 15 }
    name     = "���h�����R"
    location = 486
    division = {
      id             = { type = 18600 id = 16 }
      name           = "��8�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 17 }
      name           = "��20�����t�c"
      type           = infantry
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 18600 id = 18 }
    name     = "�|���[�W�F�R"
    location = 303
    division = {
      id             = { type = 18600 id = 19 }
      name           = "��4�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 20 }
      name           = "��16�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 21 }
      name           = "��9�����t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 18600 id = 22 }
      name           = "��15�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 23 }
      name           = "��27�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 58 }
      name           = "�m���H�O���c�J�R�����c"
      type           = cavalry
    }
  }
  landunit = {
    id       = { type = 18600 id = 24 }
    name     = "�|�Y�i���R"
    location = 307
    division = {
      id             = { type = 18600 id = 25 }
      name           = "��14�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 26 }
      name           = "��17�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 27 }
      name           = "��25�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 28 }
      name           = "��26�����t�c"
      type           = infantry
      extra          = anti_air
    }
    division = {
      id             = { type = 18600 id = 57 }
      name           = "�N���N�t�X�J�R�����c"
      type           = cavalry
    }
  }
  landunit = {
    id       = { type = 18600 id = 29 }
    name     = "�v���V���R"
    location = 305
    division = {
      id             = { type = 18600 id = 30 }
      name           = "���W���m���H��3�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 31 }
      name           = "��12�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 32 }
      name           = "��13�����t�c"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 18600 id = 33 }
      name           = "��19�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 56 }
      name           = "�N���\���@�R�����c"
      type           = cavalry
    }
  }
  landunit = {
    id       = { type = 18600 id = 34 }
    name     = "�����V�����R"
    location = 485
    division = {
      id             = { type = 18600 id = 1706 }
      name           = "�R�i�ߕ�"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 18600 id = 35 }
      name           = "�}�]���B�G�c�J�R�����c"
      type           = cavalry
      extra          = engineer
    }
    division = {
      id             = { type = 18600 id = 36 }
      name           = "���W���m���H��1�����t�c�u�s�E�X�c�L�v"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 37 }
      name           = "��5�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 38 }
      name           = "�J���p�b�J��11�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 18600 id = 39 }
      name           = "��24�����t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 18600 id = 40 }
    name     = "�\���R"
    location = 487
    division = {
      id             = { type = 18600 id = 41 }
      name           = "��31�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 42 }
      name           = "��33�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 43 }
      name           = "��35�����t�c�i�\�����j"
      type           = infantry
      extra          = artillery
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 44 }
      name           = "��36�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 45 }
      name           = "��38�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 46 }
      name           = "��39�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 47 }
      name           = "��41�����t�c�i�\�����j"
      type           = infantry
      extra          = anti_air
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 48 }
      name           = "��44�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 49 }
      name           = "��45�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 50 }
      name           = "��55�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 51 }
      name           = "��53�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
    division = {
      id             = { type = 18600 id = 52 }
      name           = "��54�����t�c�i�\�����j"
      type           = infantry
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 18600 id = 53 }
    name     = "�|�[�����h�C�R"
    location = 303
    base     = 303
    division = {
      id             = { type = 18600 id = 54 }
      name           = "��1�쒀��"
      type           = destroyer
      model          = 1
      strength       = 40
    }
    division = {
      id             = { type = 18600 id = 55 }
      name           = "��1������"
      type           = submarine
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 18600 id = 59 }
    name     = "�ǌ����cIII/1�q��c"
    location = 485
    base     = 485
    division = {
      id             = { type = 18600 id = 60 }
      name           = "�ǌ����cIII/1�q��c"
      type           = interceptor
      model          = 0
    }
    division = {
      id             = { type = 18600 id = 61 }
      name           = "�ǌ����cIV/1�q��c"
      type           = interceptor
      model          = 0
    }
    division = {
      id             = { type = 18600 id = 62 }
      name           = "��1�c�B�G�Y�L�t�����q��c"
      type           = tactical_bomber
      model          = 0
    }
  }
}