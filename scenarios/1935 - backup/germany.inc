##############################
# Country definition for GER #
##############################
province = { id = 66 landfort = 1 } # �A�[�w��
province = {
  id = 67 # �G�b�Z��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 74 landfort = 1 anti_air = 2 } # �U�[���u�����b�P��
province = { id = 75 landfort = 1 } # �P����
province = { id = 76 anti_air = 2 } # �h���g�����g
province = {
  id = 80 # ���B���w�����X�n�[�t�F��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 82 # �J�b�Z��
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = { id = 88 anti_air = 2 } # �n���u���N
province = { id = 89 anti_air = 1 } # �����[�x�b�N
province = {
  id = 90 # �L�[��
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 296 # ���X�g�N
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 298 anti_air = 2 } # �}�N�f�u���N
province = {
  id = 300 # �x������
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = { id = 304 supplypool = 100 } # �G���r���O
province = { id = 310 anti_air = 1 } # ���C�v�c�B�q
province = { id = 312 anti_air = 1 } # �j�������x���N
province = {
  id = 313 # �t�����N�t���g�E�A���E�}�C��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 314 # �V���g�D�b�g�K���g
  landfort = 1
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = { id = 315 landfort = 1 } # �t���C�u���N
province = {
  id = 376 # �~�����w��
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 473 # �u���X���E
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 510 # �P�[�j�q�X�x���N
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = GER
  capital            = 300 # �x������
  manpower           = 850
  peacetime_ic_mod       = 0.9
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 35
  escorts        = 23
  tc_mod = 1.0500	#1.0+0.05
  ai_settings	= { flags = {
  	Kiel_Canel = 1
  } }
  diplomacy = {
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = {
      tag        = BUL
      value      = 25
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = {
      tag        = CZE
      value      = -25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = ENG value = 1 }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = EST value = 10 }
    relation = {
      tag        = FIN
      value      = 25
      guaranteed = { year = 1934 month = august day = 22 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation = {
      tag        = ITA
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation = {
      tag        = POL
      value      = -10
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = POR value = 75 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = SWE
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 10
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1932 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 10 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 9 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 6 }
  SpyInfo                = { country = "POL" NumberOfSpies = 8 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 9 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 8 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 8 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 6 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 9 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 3 }

  nationalprovinces      = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 72 73 316 71 }
  ownedprovinces         = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 }
  controlledprovinces    = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 }

  techapps               = { 4010 4020 4120 4130 4250 2150 2010 2020 2030 2290 2300 2310 2320 2400 2450 2460 2510 1010 1020 1190 1200 1210 1220 1110 1310 5010 5020 5080 5090 5190 5310 5470 5480 5490 5550 9010 9020 9030 9040 9050 9090 6210 6220 6230 6240 6250 8010 8020 8030 8040 8050 8080 8150 8160 8170 3010 3020 3070 3080 3090 3100 3130 3140 3150 3160 3190 3200 3210 3220 3250 3260 3270 3280 3320 3400 3410 3470 3420 3480 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 2
    free_market       = 5
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 } # �A�h���t�E�q�g���[
  headofgovernment       = { type = 9 id = 2 } # ���h���t�E�w�X
  foreignminister        = { type = 9 id = 3 } # �R���X�^���e�B���E�t�H���E�m�C���[�g
  armamentminister       = { type = 9 id = 77 } # �q�����}���E�V���n�g
  ministerofsecurity     = { type = 9 id = 5 } # ���B���w�����E�t���b�N
  ministerofintelligence = { type = 9 id = 6 } # ���B���w�����E�J�i���X
  chiefofstaff           = { type = 9 id = 7 } # ���[�g���B�q�E�x�b�N
  chiefofarmy            = { type = 9 id = 8 } # ���F���i�[�E�t�H���E�t���b�`��
  chiefofnavy            = { type = 9 id = 9 } # �G�[���q�E���[�_�[
  chiefofair             = { type = 9 id = 10 } # �w���}���E�Q�[�����O
  dormant_leaders        = { 
  	544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 1101925 1101926 
  	798 # von Boehm-Ermolli
	811 # von Esebeck F.
	826 # von Kayser
	809 # von Epp
	804 # von dem Bussche-Ippenbrug
	662 # Brandt F.W.
	700 # Fleck
	791 # von Bergmann
	790 # von Berendt
	746 # Heye
  	}
  dormant_ministers      = { 229 267 260 270 }

  landunit = {
    id       = { type = 14500 id = 34 }
    name     = "��1�R�c"
    location = 510
    division = {
      id             = { type = 14500 id = 35 }
      name           = "��1�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 36 }
      name           = "��11�����t�c"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14500 id = 37 }
      name           = "��21�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 38 }
    name     = "��2�R�c"
    location = 302
    division = {
      id             = { type = 14500 id = 39 }
      name           = "��2�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 40 }
      name           = "��12�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 41 }
      name           = "��32�����t�c"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 42 }
    name     = "��3�R�c"
    location = 300
    division = {
      id             = { type = 14500 id = 1706 }
      name           = "A�R�W�c"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 43 }
      name           = "��3�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "��23�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "��8�R�c"
    location = 300
    division = {
      id             = { type = 14500 id = 46 }
      name           = "��8�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 47 }
      name           = "��18�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 48 }
      name           = "��28�����t�c"
      type           = infantry
      model          = 1
      extra          = engineer
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 49 }
    name     = "��5�R"
    location = 314
    division = {
      id             = { type = 14500 id = 50 }
      name           = "��5�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 51 }
      name           = "��25�����t�c"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "��35�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 53 }
    name     = "��6�R"
    location = 81
    division = {
      id             = { type = 14500 id = 54 }
      name           = "��6�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 55 }
      name           = "��16�����t�c"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 56 }
      name           = "��26�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 57 }
    name     = "��9�R"
    location = 313
    division = {
      id             = { type = 14500 id = 58 }
      name           = "��9�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 59 }
      name           = "��15�����t�c"
      type           = infantry
      model          = 1
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 60 }
      name           = "��29�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 61 }
    name     = "��12�R"
    location = 76
    division = {
      id             = { type = 14500 id = 62 }
      name           = "��33�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 63 }
      name           = "��34�����t�c"
      type           = infantry
      model          = 1
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "��36�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 65 }
    name     = "��4�R"
    location = 311
    division = {
      id             = { type = 14500 id = 66 }
      name           = "��4�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 67 }
      name           = "��14�����t�c"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "��24�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 69 }
    name     = "��7�R"
    location = 376
    division = {
      id             = { type = 14500 id = 70 }
      name           = "��7�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 71 }
      name           = "��10�����t�c"
      type           = infantry
      model          = 1
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 72 }
      name           = "��17�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 73 }
      name           = "��27�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "��10�R"
    location = 88
    division = {
      id             = { type = 14500 id = 75 }
      name           = "��20�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 76 }
      name           = "��22�����t�c"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "��30�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 78 }
    name     = "��11�R"
    location = 86
    division = {
      id             = { type = 14500 id = 79 }
      name           = "��13�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 80 }
      name           = "��19�����t�c"
      type           = infantry
      model          = 1
      extra          = anti_air
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 81 }
      name           = "��31�����t�c"
      type           = infantry
      model          = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 82 }
    name     = "��1���b�R�c"
    location = 300
    division = {
      id             = { type = 14500 id = 83 }
      name           = "��1���b�t�c"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 84 }
      name           = "��2���b�t�c"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "��3���b�t�c"
      type           = light_armor
      model          = 0
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 14500 id = 1 }
    name     = "�h�C�c�C�R"
    location = 80
    base     = 80
    division = {
      id             = { type = 14500 id = 2 }
      name           = "KMS �h�C�b�`�������g"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 3 }
      name           = "KMS �A�h�~�����E�V�F�[�A"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 4 }
      name           = "KMS �j�������x���N"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 5 }
      name           = "KMS ���C�v�c�B�q"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 6 }
      name           = "KMS �P�[�j�q�X�x���O"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 7 }
      name           = "KMS �J�[���X���[�G"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "KMS �P����"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 14500 id = 9 }
      name           = "KMS �G���f��"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 17750 id = 10 }
      name           = "KMS ���I�p���g"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 20 }
    name     = "U�{�[�g��2�͑�"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 21 }
      name           = "U�{�[�g��2�͑�"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 25 }
      name           = "U�{�[�g��3�͑�"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 26 }
    name     = "U�{�[�g��1�͑�"
    location = 80
    base     = 80
    division = {
      id             = { type = 14500 id = 27 }
      name           = "U�{�[�g��1�͑�"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14500 id = 28 }
    name     = "�o���g�͑�"
    location = 510
    base     = 510
    division = {
      id             = { type = 14500 id = 29 }
      name           = "KMS �V�����X���B�q=�z���V���^�C��"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 30 }
      name           = "KMS �V�����W�G��"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 31 }
      name           = "KMS ���H���t"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 32 }
      name           = "KMS �e�B�[�K�["
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 33 }
      name           = "KMS ���N�X"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 92 }
      name           = "KMS ���O�A��"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 14500 id = 86 }
    name     = "��2�q��͑�"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 87 }
      name           = "��2�����q��c�u�z���c�n�}�[�v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 88 }
      name           = "��3�����q��c�u�u���b�c�v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 89 }
      name           = "��51�}�~�������q��c"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 90 }
      name           = "��2�퓬�q��c�u���q�g�z�[�t�F���v"
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 91 }
      name           = "��26�퓬�q��c�u�V�����[�Q�[�^�[�v"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 95 }
    name     = "��3�q��͑�"
    location = 473
    base     = 473
    division = {
      id             = { type = 14500 id = 96 }
      name           = "��53�����q��c�u���M�I���E�R���h���v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 97 }
      name           = "��25�����q��c"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "��30�����q��c�u�A�h���[�v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 99 }
    name     = "��4�q��͑�"
    location = 82
    base     = 82
    division = {
      id             = { type = 14500 id = 100 }
      name           = "��1�����q��c�u�q���f���u���N�v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 101 }
      name           = "��3�퓬�q��c�u�E�[�f�b�g�v"
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 102 }
    name     = "��5�q��͑�"
    location = 376
    base     = 376
    division = {
      id             = { type = 14500 id = 103 }
      name           = "��4�����q��c�u�Q�l�����E���F�[�t�@�[�v"
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 14500 id = 500 }
    name           = "KMS �O���[�t�E�V���y�["
    type           = heavy_cruiser
    model          = 3
    cost           = 5.6
    date           = { year = 1936 month = january day = 6 }
  }
  division_development = {
    id             = { type = 14500 id = 502 }
    name           = "U�{�[�g��4�͑�"
    type           = submarine
    model          = 1
    cost           = 1.6
    date           = { year = 1936 month = march day = 1 }
  }
}
