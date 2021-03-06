##############################
# Country definition for FRA #
##############################
province = {
  id = 32 # �u���X�g
  ic = 1
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 35 anti_air = 2 } # �i���g
province = {
  id = 38 # �V�F���u�[��
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}
province = { id = 39 anti_air = 1 } # �J�[��
province = {
  id = 44 # ���[��
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 56 # �p��
  ic = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 59 # �V���[��
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 62 # �I�Z�[��
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 72 # ���X
  landfort = 10
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
}
province = { id = 73 landfort = 10 anti_air = 2 } # �X�g���X�u�[��
province = { id = 316 landfort = 10 anti_air = 2 } # �~�����[�Y
province = { id = 317 anti_air = 1 } # �V���[����
province = { id = 320 ic = 1 anti_air = 1 } # ���B�V�[
province = {
  id = 325 # �{���h�[
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 359 # �g�D�[���[�Y
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 364 # �}���Z�C��
  ic = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 366 landfort = 5 } # �j�[�X
province = { id = 527 landfort = 3 } # �O���m�[�u��
province = { id = 528 ic = 1 } # ������
province = { id = 875 supplypool = 1 } # �J�C�G���k
province = {
  id = 939 # �`���j�X
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 949 # �A���W�F
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
  supplypool = 500
  oilpool = 1
}
province = {
  id = 953 # �I����
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 958 # �J�T�u�����J
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 981 # �_�J�[��
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 993 # �A�r�W����
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 1037 supplypool = 1 } # �W�u�`
province = {
  id = 1328 # �n�m�C
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1337 # �T�C�S��
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  supplypool = 100
  oilpool = 1
}
province = {
  id = 1794 # �x�C���[�g
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  capital            = 56 # �p��
  manpower           = 325
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 300
  escorts        = 60

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation = {
      tag        = BEL
      value      = 120
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation = {
      tag        = HOL
      value      = 75
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = {
      tag        = LUX
      value      = 120
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = NEP value = 150 }
    relation = {
      tag        = NOR
      value      = 0
      guaranteed = { year = 1934 month = august day = 30 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = {
      tag        = POL
      value      = 100
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 10 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation = {
      tag        = TUR
      value      = 50
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1935 month = january day = 7 }
    }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 10 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }

  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59 60 61 62 63 318 317 316 73 72 64 53 44 43 18 54 42 55 41 56 57 58 32 33 34 35 36 37 38 39 40 320 321 528 }
  ownedprovinces         = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59 60 61 62 63 318 317 316 73 72 64 53 44 43 18 54 42 55 41 56 57 58 32 33 34 35 36 37 38 39 40 320 321 528 875 898 899 956 969 968 959 958 960 966 1014 970 1013 943 942 945 944 946 947 949 948 951 950 952 953 935 934 936 938 937 939 940 941 1862 1861 1863 1792 1793 1794 1795 1037 973 974 975 1083 1084 998 976 977 978 981 984 987 989 990 985 980 986 979 994 996 997 1005 1006 991 995 993 1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335 1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004 }
  controlledprovinces    = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59 60 61 62 63 318 317 316 73 72 64 53 44 43 18 54 42 55 41 56 57 58 32 33 34 35 36 37 38 39 40 320 321 528 875 898 899 956 969 968 959 958 960 966 1014 970 1013 943 942 945 944 946 947 949 948 951 950 952 953 935 934 936 938 937 939 940 941 1862 1861 1863 1792 1793 1794 1795 1037 973 974 975 1083 1084 998 976 977 978 981 984 987 989 990 985 980 986 979 994 996 997 1005 1006 991 995 993 1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335 1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004 }

  techapps               = { 1010 1020 1110 1190 1200 1310 14000 2010 2020 2030 2040 2150 2290 2300 2310 2400 2450 2460 2510 3010 3020 3030 3070 3080 3090 3100 3130 3140 3150 3190 3200 3210 3220 3250 3260 3270 3280 3320 3330 3400 3410 3470 3420 3480 4010 4020 4120 4130 5010 5020 5050 5080 5090 5190 5310 5320 5470 5480 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 9010 9020 9030 9040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 2001 } # �A���x�[���E���u����
  headofgovernment       = { type = 9 id = 2002 } # �A���x�[���E�T���[
  foreignminister        = { type = 9 id = 2003 } # �s�G�[�����G�e�B�G���k�E�t�����_��
  armamentminister       = { type = 9 id = 2004 } # ���@���T���E�I���I�[��
  ministerofsecurity     = { type = 9 id = 2005 } # �}���N�X�E�h�����C
  ministerofintelligence = { type = 9 id = 2006 } # �W���Z�t�E�p�K�m��
  chiefofstaff           = { type = 9 id = 2007 } # ���[���X�E�K������
  chiefofarmy            = { type = 9 id = 2008 } # ���[���X�E�K������
  chiefofnavy            = { type = 9 id = 2009 } # �t�����\���E�_������
  chiefofair             = { type = 9 id = 2010 } # ���B�N�g���E�h�D�i��

  landunit = {
    id       = { type = 13500 id = 1 }
    name     = "��7�R"
    location = 55
    division = {
      id             = { type = 13500 id = 2 }
      name           = "��4�����t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 13500 id = 3 }
      name           = "��60�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 5 }
      name           = "��41�\����Ԏt�c"
      type           = light_armor
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 6 }
      name           = "��25�����ԉ��t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 8 }
    name     = "��1�R"
    location = 63
    division = {
      id             = { type = 13500 id = 9 }
      name           = "��1�y�����ԉ��t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 13500 id = 10 }
      name           = "��1�����t�c"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 13500 id = 11 }
      name           = "��2�\����Ԏt�c"
      type           = light_armor
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 15 }
      name           = "��12�����ԉ��t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
    }
    division = {
      id             = { type = 13500 id = 17 }
      name           = "��2�k�A�t���J�����t�c"
      type           = infantry
      extra          = anti_tank
    }
  }
  landunit = {
    id       = { type = 13500 id = 18 }
    name     = "��9�R"
    location = 64
    division = {
      id             = { type = 13500 id = 19 }
      name           = "��1�y�R���t�c"
      type           = cavalry
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 21 }
      name           = "��4�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 23 }
      name           = "��1�����ԉ������t�c"
      type           = infantry
      model          = 1
      extra          = armored_car
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 24 }
      name           = "��18�����t�c"
      type           = infantry
      extra          = anti_air
    }
  }
  landunit = {
    id       = { type = 13500 id = 26 }
    name     = "��2�R"
    location = 72
    division = {
      id             = { type = 13500 id = 27 }
      name           = "��2�y�R���t�c"
      type           = cavalry
    }
    division = {
      id             = { type = 13500 id = 29 }
      name           = "��71�����t�c"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 13500 id = 31 }
      name           = "��41�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 32 }
      name           = "��1�A���n�����t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 13500 id = 35 }
    name     = "��3�R"
    location = 53
    division = {
      id             = { type = 13500 id = 36 }
      name           = "��3�y�R���t�c"
      type           = cavalry
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 37 }
      name           = "��6�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 39 }
      name           = "��8�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 41 }
      name           = "��3�k�A�t���J�����t�c"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 13500 id = 43 }
      name           = "��26�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 45 }
      name           = "��42�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 47 }
      name           = "��20�����t�c"
      type           = infantry
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 13500 id = 49 }
    name     = "��4�R"
    location = 316
    division = {
      id             = { type = 13500 id = 51 }
      name           = "��11�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 52 }
      name           = "��45�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 54 }
      name           = "��52�A�t���J�����t�c"
      type           = infantry
      extra          = artillery
    }
  }
  landunit = {
    id       = { type = 13500 id = 55 }
    name     = "��5�R"
    location = 366
    division = {
      id             = { type = 13500 id = 57 }
      name           = "��24�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 58 }
      name           = "��31�R�x�����t�c"
      type           = bergsjaeger
    }
    division = {
      id             = { type = 13500 id = 61 }
      name           = "��70�����t�c"
      type           = infantry
      extra          = anti_tank
    }
    division = {
      id             = { type = 13500 id = 62 }
      name           = "��30�����t�c"
      type           = infantry
      extra          = anti_tank
    }
  }
  landunit = {
    id       = { type = 13500 id = 64 }
    name     = "��8�R"
    location = 73
    division = {
      id             = { type = 13500 id = 706 }
      name           = "�}�W�m���i�ߕ�"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 65 }
      name           = "��13�����t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 67 }
      name           = "��19�����t�c"
      type           = infantry
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 68 }
      name           = "��54�����t�c"
      type           = infantry
    }
  }
  landunit = {
    id       = { type = 13500 id = 70 }
    name     = "�A���v�X�R"
    location = 527
    division = {
      id             = { type = 13500 id = 71 }
      name           = "��65�R�x�����t�c"
      type           = bergsjaeger
    }
    division = {
      id             = { type = 13500 id = 72 }
      name           = "��64�R�x�����t�c"
      type           = bergsjaeger
    }
  }
  landunit = {
    id       = { type = 13500 id = 76 }
    name     = "��19�~���e�[���n��R"
    location = 949
    division = {
      id             = { type = 13500 id = 77 }
      name           = "��85�A�t���J�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 79 }
      name           = "��182�A�t���J�����t�c"
      type           = infantry
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13500 id = 82 }
    name     = "�`���j�W�A�R"
    location = 939
    division = {
      id             = { type = 14000 id = 709 }
      name           = "�A�t���J�R�i�ߕ�"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 83 }
      name           = "��83�A�t���J�����t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 85 }
      name           = "��81�A�t���J�����t�c"
      type           = infantry
    }
    division = {
      id             = { type = 13500 id = 88 }
      name           = "��6�y�R���t�c"
      type           = cavalry
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 13500 id = 89 }
    name     = "�����b�R��"
    location = 959
    division = {
      id             = { type = 13500 id = 90 }
      name           = "��3�����b�R�t�c"
      type           = infantry
      extra          = anti_tank
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13500 id = 91 }
    name     = "�C���h�V�i��"
    location = 1337
    division = {
      id             = { type = 13500 id = 92 }
      name           = "�g���L���t�c"
      type           = infantry
      strength       = 65
    }
    division = {
      id             = { type = 13500 id = 93 }
      name           = "�R�[�`�V�i=�J���{�W�A�t�c"
      type           = infantry
      extra          = engineer
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13500 id = 94 }
    name     = "�����R"
    location = 1037
    division = {
      id             = { type = 13500 id = 95 }
      name           = "��1�y������"
      type           = infantry
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 96 }
      name           = "��1/2�R�x���t�c"
      type           = bergsjaeger
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 13500 id = 98 }
    name     = "�t�����X��1�͑�"
    location = 32
    base     = 32
    division = {
      id             = { type = 13500 id = 99 }
      name           = "MN �x�A���k"
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 400 }
      name           = "MN �A���W�F��"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 126 }
      name           = "MN �v�����Q"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 127 }
      name           = "MN �f���P�C�E�g���[�A��"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 129 }
      name           = "MN �����b�g�E�s�P"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 131 }
      name           = "MN ���E�K���\�j�G�[��"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 243 }
      name           = "MN ���E�}���X"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 244 }
      name           = "MN ���E���C���D�Y"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 245 }
      name           = "MN ���E�t�H���g�D�l"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 100 }
    name     = "�t�����X��2�͑�"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 101 }
      name           = "MN �N�[���x"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 103 }
      name           = "MN �p��"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 118 }
      name           = "MN �V���t����"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 116 }
      name           = "MN �f���P�[�k"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 259 }
      name           = "MN �v�����g��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 133 }
      name           = "MN �W�����k�E�_���N"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 139 }
      name           = "MN �u���X�g�[�Y"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 144 }
      name           = "MN ���E�{���h��"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 246 }
      name           = "MN �u�[���l�[�Y"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 104 }
    name     = "�t�����X��3�͑�"
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 105 }
      name           = "MN �I�[�V����"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 109 }
      name           = "MN �u���^�[�j��"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 120 }
      name           = "MN �t�H�b�V��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 115 }
      name           = "MN �g�D�[�����B��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 255 }
      name           = "MN �t�H���o��"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 152 }
      name           = "MN �t�O�["
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 157 }
      name           = "MN ���E�t�[�h�����C����"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 242 }
      name           = "MN �o�X�N"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 110 }
    name     = "�t�����X��4�͑�"
    location = 32
    base     = 32
    division = {
      id             = { type = 13500 id = 111 }
      name           = "MN �����[�k"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 113 }
      name           = "MN �v�����@���X"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 122 }
      name           = "MN �R���x�[��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 124 }
      name           = "MN �f���v��"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 137 }
      name           = "MN �G�~�[���E�x���^��"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 165 }
      name           = "MN �t�����f��"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 171 }
    name     = "��1������"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 172 }
      name           = "��1������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 177 }
      name           = "��2������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 248 }
      name           = "��3������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 268 }
      name           = "��4������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 247 }
      name           = "��1������"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13500 id = 181 }
    name     = "��2������"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 249 }
      name           = "��6������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 250 }
      name           = "��7������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 251 }
      name           = "��8������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 182 }
      name           = "��9������"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 187 }
      name           = "��10������"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 191 }
    name     = "��3������"
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 254 }
      name           = "��11������"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 252 }
      name           = "��12������"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 253 }
      name           = "��13������"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 192 }
      name           = "��14������"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 197 }
      name           = "��15������"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 198 }
    name     = "�����A����"
    location = 1337
    base     = 1337
    division = {
      id             = { type = 13500 id = 199 }
      name           = "��1�A����"
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 200 }
      name           = "��2�A����"
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 201 }
      name           = "��3�A����"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 13500 id = 202 }
    name     = "�����A����"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 203 }
      name           = "��4�A����"
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 204 }
      name           = "��5�A����"
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 205 }
      name           = "��6�A����"
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 500 }
      name           = "��7�A����"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 13500 id = 206 }
    name     = "��1�����q��Q"
    location = 56
    base     = 56
    division = {
      id             = { type = 13500 id = 207 }
      name           = "��1��p�����q��Q"
      type           = tactical_bomber
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 211 }
      name           = "��2��p�����q��Q"
      type           = tactical_bomber
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 215 }
      name           = "��3��p�����q��Q"
      type           = tactical_bomber
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 218 }
    name     = "��4�����q��Q"
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 219 }
      name           = "��6��p�����q��Q"
      type           = tactical_bomber
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 222 }
    name     = "��5�����q��Q"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 223 }
      name           = "��7��p�����q��Q"
      type           = tactical_bomber
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 226 }
    name     = "��1�퓬�q��Q"
    location = 56
    base     = 56
    division = {
      id             = { type = 13500 id = 227 }
      name           = "��24�퓬�q��Q"
      type           = interceptor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 231 }
      name           = "��21�퓬�q��Q"
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 234 }
    name     = "��3�퓬�q��Q"
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 235 }
      name           = "��23�퓬�q��Q"
      type           = interceptor
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 13500 id = 300 }
    name           = "MN �_���P���N"
    type           = battlecruiser
    model          = 3
    cost           = 7.2
    date           = { year = 1936 month = october day = 1 }
  }
}
