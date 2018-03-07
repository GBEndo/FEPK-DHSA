##############################
# Country definition for CSX #
##############################
province = {
  id = 1205 # �k��
  air_base = { size = 5 current_size = 5 }
}
province = {
  id = 1216 # �ϓ�
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CSX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # ����
  dissent            = 25
  extra_tc           = 20
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  ownedprovinces         = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  controlledprovinces    = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 503001 } # 腎��R (�C�F���E�V�[�V����)
  headofgovernment       = { type = 9 id = 503002 } # 腎��R (�C�F���E�V�[�V����)
  foreignminister        = { type = 9 id = 503003 } # ���ӏ� (�����E�c�@���V���[)
  armamentminister       = { type = 9 id = 503004 } # ����` (�t�E�Y�I�C�[)
  ministerofsecurity     = { type = 9 id = 503005 } # �ȗk�� (�N�E�����P)
  ministerofintelligence = { type = 9 id = 503006 } # ���k (�V�����E�`�F��)
  chiefofstaff           = { type = 9 id = 503007 } # 腎��R (�C�F���E�V�[�V����)
  chiefofarmy            = { type = 9 id = 503008 } # 腎��R (�C�F���E�V�[�V����)
  chiefofnavy            = { type = 9 id = 503009 } # �h�~�g���[�E�N�����`�F�t
  chiefofair             = { type = 9 id = 503010 } # 腎��R (�C�F���E�V�[�V����)

  landunit = {
    id       = { type = 22300 id = 1 }
    name     = "�R���x����"
    location = 1225
    division = {
      id             = { type = 22300 id = 2 }
      name           = "��1�Ɨ���"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 7 }
      name           = "��1�R���t"
      type           = cavalry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 9 }
    name     = "��34�R"
    location = 1226
    division = {
      id             = { type = 22300 id = 10 }
      name           = "��66�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 12 }
      name           = "��71�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 13 }
    name     = "��35�R"
    location = 1208
    division = {
      id             = { type = 22300 id = 14 }
      name           = "��72�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 16 }
    name     = "�V���x����"
    location = 1208
    division = {
      id             = { type = 22300 id = 17 }
      name           = "�V���x����"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 18 }
    name     = "��29�R"
    location = 1205
    division = {
      id             = { type = 22300 id = 19 }
      name           = "��37�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 20 }
      name           = "��37�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 21 }
      name           = "��37�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 22 }
      name           = "��37�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 23 }
      name           = "��9�R���t"
      type           = cavalry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 24 }
      name           = "��39�Ɨ���"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 26 }
    name     = "�͖k�x����"
    location = 1210
    division = {
      id             = { type = 22300 id = 27 }
      name           = "�͖k�ۈ���"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 28 }
    name     = "�`���n���x����"
    location = 1206
    division = {
      id             = { type = 22300 id = 29 }
      name           = "�`���n���ۈ���"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 30 }
    name     = "��3���R"
    location = 1216
    division = {
      id             = { type = 22300 id = 31 }
      name           = "��22�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 32 }
      name           = "��22�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 35 }
    name     = "��12�R"
    location = 1216
    division = {
      id             = { type = 22300 id = 36 }
      name           = "��20�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 22300 id = 37 }
      name           = "��81�����t"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22300 id = 38 }
    name     = "�R���x����"
    location = 1216
    division = {
      id             = { type = 22300 id = 39 }
      name           = "�R���ۈ���"
      type           = infantry
      model          = 0
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 27 }
    name     = "��13�R"
    location = 1208
    division = {
      id             = { type = 22000 id = 28 }
      name           = "��13�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 43 }
    name     = "��19�R"
    location = 1225
    division = {
      id             = { type = 22000 id = 44 }
      name           = "��19�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 79 }
    name     = "��32�R"
    location = 1212
    division = {
      id             = { type = 22000 id = 80 }
      name           = "��32�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 83 }
    name     = "��33�R"
    location = 1209
    division = {
      id             = { type = 22000 id = 84 }
      name           = "��33�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 103 }
    name     = "��42�R"
    location = 1226
    division = {
      id             = { type = 22000 id = 104 }
      name           = "��42�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 128 }
    name     = "��53�R"
    location = 1210
    division = {
      id             = { type = 22000 id = 129 }
      name           = "��53�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 136 }
    name     = "��63�R"
    location = 1272
    division = {
      id             = { type = 22000 id = 137 }
      name           = "��63�R"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 145 }
    name     = "���k�R���R"
    location = 1272
    division = {
      id             = { type = 22000 id = 146 }
      name           = "���k�R���R"
      type           = cavalry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 205 }
    name     = "�b�@�V������"
    location = 1272
    division = {
      id             = { type = 22000 id = 206 }
      name           = "�b�@�V������"
      type           = infantry
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 266 }
    name     = "�R���ۈ���"
    location = 1225
    division = {
      id             = { type = 22000 id = 267 }
      name           = "�R���ۈ���"
      type           = militia
      model          = 0
      locked         = yes
    }
  }
}