
##############################
# Country definition for CGX #
##############################

province = { id = 1248 supplypool = 500 oilpool = 50 } # Shantou
province =
{ id         = 1313
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}              # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Hainan

#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 10
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  transports             = 10
  capital                = 1319 # Nanning
  manpower               = 200
  dissent                = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 3
  }
free = {
	 ic 		 = 4
	 energy 	 = 10
	 metal	 	 = 5
	 rare_materials	 = 3
}
  SpyInfo                = { country = "CGX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  nationalprovinces      = { 1258 1310 1311 1309 1319 1325 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 1325 1312 1313 1249 1248 1314 1317 1318 1320 1321 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 3010 3130 }
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 150 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
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
  # ######
  # GUANGXI OOB
  # ######
  landunit =
  { location = 1313 # Guangzhou
    name     = "��1�R�c"
    leader = 502001 # Chen Jitang
    id       = { type = 22400 id = 1 }
    division =
    { experience = 30
      id         = { type = 22400 id = 2 }
      name       = "�V���������������t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 3 }
      name       = "��1�Ɨ������t"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 4 }
      name       = "�x���t"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "��1�R"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 5 }
    division =
    { experience = 30
      id         = { type = 22400 id = 6 }
      name       = "��1�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 7 }
      name       = "��2�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 8 }
      name       = "��3�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "��2�R"
    # ## leader = # Chang Ta
    id       = { type = 22400 id = 9 }
    division =
    { experience = 30
      id         = { type = 22400 id = 10 }
      name       = "��4�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 11 }
      name       = "��5�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 12 }
      name       = "��6�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1318 # Maoming
    name     = "��3�R"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 13 }
    division =
    { experience = 30
      id         = { type = 22400 id = 14 }
      name       = "��7�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 15 }
      name       = "��8�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 16 }
      name       = "��9�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "��4�R�c"
    leader = 502004 # Li Zongren
    id       = { type = 22400 id = 17 }
    division =
    { experience = 30
      id         = { type = 22400 id = 18 }
      name       = "��19�R"
      type       = infantry
      strength   = 30
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "��7�R"
    # ## leader = # Liao Lei
    id       = { type = 22400 id = 19 }
    division =
    { experience = 30
      id         = { type = 22400 id = 20 }
      name       = "��19�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 21 }
      name       = "��21�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 22 }
      name       = "��22�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 23 }
      name       = "��24�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1319 # Nanning
    name     = "��15�R"
    leader = 502006 # Bai Chongxi
    id       = { type = 22400 id = 24 }
    division =
    { experience = 30
      id         = { type = 22400 id = 25 }
      name       = "��42�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 26 }
      name       = "��43�����t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 27 }
      name       = "��44�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 28 }
      name       = "��45�����t"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "�L���x����"
    leader   = 502003
    id       = { type = 22400 id = 29 }
    division =
    { experience = 30
      id         = { type = 22400 id = 30 }
      name       = "�L�������t"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "�L���x����"
    id       = { type = 22400 id = 31 }
    division =
    { experience = 30
      id         = { type = 22400 id = 32 }
      name       = "�L�������t"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 33 }
      name       = "�L�������R"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1321 # Hainan
    name     = "�C��x����"
    id       = { type = 22400 id = 34 }
    division =
    { experience = 30
      id         = { type = 22400 id = 35 }
      name       = "��9�Ɨ��t"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "��9�R"
    # ## leader = 50089 # Hao Menglin
    id       = { type = 22000 id = 20 }
    division =
    { experience = 30
      id         = { type = 22000 id = 21 }
      name       = "��9�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "��28�R"
    # leader = X # ?
    id       = { type = 22000 id = 67 }
    division =
    { experience = 30
      id         = { type = 22000 id = 68 }
      name       = "��28�R"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "�Γ�x����"
    # ## leader = #
    id       = { type = 22000 id = 192 }
    division =
    { experience   = 30
      id           = { type = 22000 id = 193 }
      name         = "��34�����t"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1311 # Wuzhou
    name     = "�J�g�x����"
    # ## leader = #
    id       = { type = 22000 id = 215 }
    division =
    { id           = { type = 22000 id = 216 }
      name         = "��37�Ɨ�������"
      type         = infantry
      max_strength = 25
      strength     = 25
      model        = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "��20�R"
    leader = 502010 # Yu Hanmou
    id       = { type = 22000 id = 106 }
    division =
    { id    = { type = 22000 id = 107 }
      name  = "��20�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "��2�R"
    # ## leader = 50050 # Jiang Dingwen
    id       = { type = 22000 id = 6 }
    division =
    { id    = { type = 22000 id = 7 }
      name  = "��2�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1249 # Chao'an
    name     = "��16�R"
    # ## leader = # Li Yunyan
    id       = { type = 22000 id = 36 }
    division =
    { id    = { type = 22000 id = 37 }
      name  = "��16�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "��36�R"
    # ## leader = # Chou Hunyuan
    id       = { type = 22000 id = 87 }
    division =
    { id    = { type = 22000 id = 88 }
      name  = "��36�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "��14�R"
    # ## leader = #
    id       = { type = 22000 id = 161 }
    division =
    { id    = { type = 22000 id = 162 }
      name  = "��14�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "��18�R"
    # ## leader = 50219 # Luo Zhuoying
    id       = { type = 22000 id = 38 }
    division =
    { id    = { type = 22000 id = 39 }
      name  = "��18�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "��26�R"
    # ## leader = 50104 # Xiao Zhichu
    id       = { type = 22000 id = 62 }
    division =
    { id    = { type = 22000 id = 63 }
      name  = "��26�R"
      type  = infantry
      model = 0
    }
  }
  # ##### NAVY OOB ######
  navalunit =
  { location = 1313 # Guangzhou
    name     = "�L���C�R"
    leader   = 502013
    id       = { type = 22400 id = 40 }
    base     = 1313
    division =
    { id    = { type = 22400 id = 43 }
      name  = "��1�A�����"
      type  = transport
      model = 0
    }
  }
  # ##### AIR FORCE OOB ######
  airunit =
  { location = 1313 # Guangzhou
    name     = "�L���R"
    base     = 1313 # Guangzhou
    id       = { type = 22400 id = 38 }
    division =
    { id           = { type = 22400 id = 39 }
      name         = "�L���Ɨ���s��"
      type         = interceptor
      model        = 0
      max_strength = 40
      strength     = 20
    }
  }
}