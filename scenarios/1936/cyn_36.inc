##############################
# Country definition for CYN #
##############################
province = { id = 1282 ic = 1 } # �N��

#####################
# Country main data #
#####################

country = {
  tag                = CYN
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1307 # ����
  dissent            = 25
  extra_tc           = 4
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = 200 }
  }

  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 7
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 501001 } # ���_ (�����E����)
  headofgovernment       = { type = 9 id = 501002 } # ���_ (�����E����)
  foreignminister        = { type = 9 id = 501003 } # �����_ (�`���E�E�`�[�W���E)
  armamentminister       = { type = 9 id = 501004 } # �����P (�����[�E�E�F���t�C)
  ministerofsecurity     = { type = 9 id = 501005 } # ������ (�e�B���E�`�[�p��)
  ministerofintelligence = { type = 9 id = 501006 } # �ċ��� (�~�E�c�B�A�~��)
  chiefofstaff           = { type = 9 id = 501007 } # ���_ (�����E����)
  chiefofarmy            = { type = 9 id = 501008 } # ���_ (�����E����)
  chiefofnavy            = { type = 9 id = 501009 } # Ḋ� (���[�E�n��)
  chiefofair             = { type = 9 id = 501010 } # Ḋ� (���[�E�n��)

  landunit = {
    id       = { type = 22100 id = 1 }
    name     = "�_��x����"
    location = 1307
    leader   = 501006
    division = {
      id             = { type = 22100 id = 2 }
      name           = "��21�Ɨ���"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 3 }
      name           = "��22�Ɨ���"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 4 }
      name           = "��23�Ɨ���"
      type           = infantry
      model          = 0
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22100 id = 11 }
    name     = "��24�R"
    location = 1281
    leader   = 501004
    division = {
      id             = { type = 22100 id = 12 }
      name           = "��136�����t"
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22100 id = 13 }
      name           = "��137�����t"
      type           = infantry
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 270 }
    name     = "�l��ۈ���"
    location = 1362
    division = {
      id             = { type = 22000 id = 271 }
      name           = "�l��ۈ���"
      type           = militia
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 122 }
    name     = "��47�R"
    location = 1362
    division = {
      id             = { type = 22000 id = 123 }
      name           = "��47�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 49 }
    name     = "��21�R"
    location = 1362
    division = {
      id             = { type = 22000 id = 50 }
      name           = "��21�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 57 }
    name     = "��23�R"
    location = 1308
    division = {
      id             = { type = 22000 id = 58 }
      name           = "��23�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 109 }
    name     = "��44�R"
    location = 1308
    division = {
      id             = { type = 22000 id = 110 }
      name           = "��44�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 113 }
    name     = "��45�R"
    location = 1308
    division = {
      id             = { type = 22000 id = 114 }
      name           = "��45�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 156 }
    name     = "��7���R"
    location = 1327
    division = {
      id             = { type = 22000 id = 157 }
      name           = "��7���R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 12 }
    name     = "��4�R"
    location = 1327
    division = {
      id             = { type = 22000 id = 13 }
      name           = "��4�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 15 }
    name     = "��5�R"
    location = 1327
    division = {
      id             = { type = 22000 id = 16 }
      name           = "��5�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 45 }
    name     = "��20�R"
    location = 1307
    division = {
      id             = { type = 22000 id = 46 }
      name           = "��20�R"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 218 }
    name     = "�M�B�i�ߕ�"
    location = 1307
    division = {
      id             = { type = 22000 id = 219 }
      name           = "�M�B�i�ߕ�"
      type           = infantry
      model          = 0
    }
  }
  landunit = {
    id       = { type = 22000 id = 272 }
    name     = "�M�B�ۈ���"
    location = 1307
    division = {
      id             = { type = 22000 id = 273 }
      name           = "�M�B�ۈ���"
      type           = militia
      model          = 0
    }
  }
}
