##############################
# Country definition for CGX #
##############################
province = { id = 1248 supplypool = 500 oilpool = 50 } # ����
province = {
  id = 1313 # �A�B
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1320 # �L�B�p
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1321 # �C�쓇
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CGX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1319 # ��J
  dissent            = 20
  extra_tc           = 10
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 10
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 150 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 1258 1310 1311 1309 1319 1325 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }

  techapps               = { 4010 2150 2290 1010 1190 3010 3130 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 502013 } # �ӊ��� (�t�[�E�n���~��)
  headofgovernment       = { type = 9 id = 502002 } # ���@�m (���[�E�c���W�F��)
  foreignminister        = { type = 9 id = 502018 } # ���Z�[ (���[�E�`�V�F���j
  armamentminister       = { type = 9 id = 502012 } # �]���d (���E�n�����E)
  ministerofsecurity     = { type = 9 id = 502005 } # ���[�E�`����
  ministerofintelligence = { type = 9 id = 502006 } # ���Z�[ (���[�E�`�V�F��)
  chiefofstaff           = { type = 9 id = 502007 } # �����U (�p�C�E�`�����V)
  chiefofarmy            = { type = 9 id = 502011 } # ���Z�� (�`�F���E�`�^��)
  chiefofnavy            = { type = 9 id = 502009 } # �����U (�p�C�E�`�����V)
  chiefofair             = { type = 9 id = 502015 } # �����s (�z�A���E�N�A�����C)
  dormant_ministers = {
  	502003	#������ (�����E�`���I�~���j
  }

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "��1�R�c"
    location = 1313
    leader   = 502001
    division = {
      id             = { type = 22400 id = 2 }
      name           = "�V���������������t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 3 }
      name           = "��1�Ɨ������t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "�x���t"
      type           = militia
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 5 }
    name     = "��1�R"
    location = 1312
    division = {
      id             = { type = 22400 id = 6 }
      name           = "��1�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 7 }
      name           = "��2�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 8 }
      name           = "��3�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "��2�R"
    location = 1248
    division = {
      id             = { type = 22400 id = 10 }
      name           = "��4�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "��5�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "��6�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 13 }
    name     = "��3�R"
    location = 1318
    division = {
      id             = { type = 22400 id = 14 }
      name           = "��7�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 15 }
      name           = "��8�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 16 }
      name           = "��9�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 17 }
    name     = "��4�R�c"
    location = 1258
    leader   = 502004
    division = {
      id             = { type = 22400 id = 18 }
      name           = "��19�R"
      type           = infantry
      model          = 0
      strength       = 30
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 19 }
    name     = "��7�R"
    location = 1310
    division = {
      id             = { type = 22400 id = 20 }
      name           = "��19�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 21 }
      name           = "��21�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 22 }
      name           = "��22�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 23 }
      name           = "��24�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 24 }
    name     = "��15�R"
    location = 1319
    leader   = 502006
    division = {
      id             = { type = 22400 id = 25 }
      name           = "��42�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 26 }
      name           = "��43�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 27 }
      name           = "��44�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 28 }
      name           = "��45�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 29 }
    name     = "�L���x����"
    location = 1313
    leader   = 502003
    division = {
      id             = { type = 22400 id = 30 }
      name           = "�L�������t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 31 }
    name     = "�L���x����"
    location = 1258
    division = {
      id             = { type = 22400 id = 32 }
      name           = "�L�������t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 33 }
      name           = "�L�������R"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 34 }
    name     = "�C��x����"
    location = 1321
    division = {
      id             = { type = 22400 id = 35 }
      name           = "��9�Ɨ��t"
      type           = infantry
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 20 }
    name     = "��9�R"
    location = 1309
    division = {
      id             = { type = 22000 id = 21 }
      name           = "��9�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 67 }
    name     = "��28�R"
    location = 1310
    division = {
      id             = { type = 22000 id = 68 }
      name           = "��28�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 192 }
    name     = "�Γ�x����"
    location = 1258
    division = {
      id             = { type = 22000 id = 193 }
      name           = "��34�����t"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 215 }
    name     = "�J�g�x����"
    location = 1311
    division = {
      id             = { type = 22000 id = 216 }
      name           = "��37�Ɨ�������"
      type           = infantry
      model          = 0
      strength       = 25
      max_strength   = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 106 }
    name     = "��20�R"
    location = 1312
    leader   = 502010
    division = {
      id             = { type = 22000 id = 107 }
      name           = "��20�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 6 }
    name     = "��2�R"
    location = 1313
    division = {
      id             = { type = 22000 id = 7 }
      name           = "��2�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 36 }
    name     = "��16�R"
    location = 1249
    division = {
      id             = { type = 22000 id = 37 }
      name           = "��16�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 87 }
    name     = "��36�R"
    location = 1248
    division = {
      id             = { type = 22000 id = 88 }
      name           = "��36�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 161 }
    name     = "��14�R"
    location = 1309
    division = {
      id             = { type = 22000 id = 162 }
      name           = "��14�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 38 }
    name     = "��18�R"
    location = 1310
    division = {
      id             = { type = 22000 id = 39 }
      name           = "��18�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 62 }
    name     = "��26�R"
    location = 1258
    division = {
      id             = { type = 22000 id = 63 }
      name           = "��26�R"
      type           = infantry
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 22400 id = 40 }
    name     = "�L���C�R"
    location = 1313
    base     = 1313
    leader   = 502013
    division = {
      id             = { type = 22400 id = 43 }
      name           = "��1�A�����"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22400 id = 38 }
    name     = "�L���R"
    location = 1313
    base     = 1313
    division = {
      id             = { type = 22400 id = 39 }
      name           = "�L���Ɨ���s��"
      type           = interceptor
      model          = 0
      strength       = 20
      max_strength   = 40
    }
  }
}