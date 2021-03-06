##############################
# Country definition for CXB #
##############################

country = {
  tag                = CXB
  regular_id         = CHI
  puppet             = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1442 # �i����
  dissent            = 25
  extra_tc           = 2
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
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1442 1441 1273 1440 1443 1276 1274 1444 1439 }
  ownedprovinces         = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  controlledprovinces    = { 1442 1441 1273 1440 1443 1274 1444 1439 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 504001 } # �n��� (�}�[�E�z���N�C)
  headofgovernment       = { type = 9 id = 504002 } # �n��� (�}�[�E�z���N�C)
  foreignminister        = { type = 9 id = 504003 } # �t�@���E�`��
  armamentminister       = { type = 9 id = 504004 } # �c�E�V�F��
  ministerofsecurity     = { type = 9 id = 504005 } # �����Q (���[�E�V�[�`����)
  ministerofintelligence = { type = 9 id = 504006 } # �n���o (�}�[�E�t���s��)
  chiefofstaff           = { type = 9 id = 504007 } # �n���� (�}�[�E�v�[�`��)
  chiefofarmy            = { type = 9 id = 504008 } # �n���� (�}�[�E�v�[�`��)
  chiefofnavy            = { type = 9 id = 504009 } # �n���� (�}�[�E�v�[�`��)
  chiefofair             = { type = 9 id = 504010 } # �n���F (�}�[�E�v�[�t�@��)

  landunit = {
    id       = { type = 22200 id = 1 }
    name     = "��15���R"
    location = 1440
    division = {
      id             = { type = 22200 id = 2 }
      name           = "��35�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22200 id = 3 }
    name     = "��11�R"
    location = 1441
    division = {
      id             = { type = 22200 id = 4 }
      name           = "��7�V�����t"
      type           = militia
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22200 id = 6 }
      name           = "��10�Ɨ��t"
      type           = infantry
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    location = 1443
    division = {
      id             = { type = 22200 id = 5 }
      name           = "��7�V�R���t"
      type           = cavalry
      model          = 0
      strength       = 100
      max_strength   = 100
      experience     = 30
    }
  }
  landunit = {
    location = 1444
    division = {
      id             = { type = 22200 id = 9 }
      name           = "��1�R���t"
      type           = cavalry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22200 id = 7 }
    name     = "��2�V�R"
    location = 1441
    division = {
      id             = { type = 22200 id = 8 }
      name           = "��9�V�����t"
      type           = infantry
      model          = 0
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22200 id = 11 }
    name     = "�g�D���K�j�X�^���R"
    location = 1441
    division = {
      id             = { type = 22200 id = 12 }
      name           = "�g�D���K���t"
      type           = militia
      model          = 0
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 9 }
    name     = "��3�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 10 }
      name           = "��3�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 23 }
    name     = "��10�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 24 }
      name           = "��10�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 33 }
    name     = "��15�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 34 }
      name           = "��15�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 60 }
    name     = "��25�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 61 }
      name           = "��25�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 75 }
    name     = "��31�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 76 }
      name           = "��31�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 99 }
    name     = "��41�R"
    location = 1442
    division = {
      id             = { type = 22000 id = 100 }
      name           = "��41�R"
      type           = infantry
      model          = 0
      experience     = 30
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 174 }
    name     = "��25�����t"
    location = 1442
    division = {
      id             = { type = 22000 id = 175 }
      name           = "��25�����t"
      type           = infantry
      model          = 0
      strength       = 50
      max_strength   = 50
      experience     = 30
    }
    dig_in   = 20.000
  }
}
