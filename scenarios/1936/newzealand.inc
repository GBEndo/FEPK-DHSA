##############################
# Country definition for NZL #
##############################
province = {
  id = 1871 # �E�F�����g��
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NZL
  capital            = 1871 # �E�F�����g��
  manpower           = 18
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 15

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NZL" NumberOfSpies = 5 }

  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }

  techapps               = { 1010 1020 1190 1200 1210 1220 1310 14000 2010 2290 2300 2310 2450 2460 2510 3010 3020 3070 3080 4010 4020 4120 4130 5010 5020 5080 5090 5190 5310 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 9010 9020 9030 9140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 55001 } # �W�����W���E�����N�g�����A�����f����
  headofgovernment       = { type = 9 id = 55002 } # �}�C�P���E�W���Z�t�E�T���F�[�W
  foreignminister        = { type = 9 id = 55003 } # �}�C�P���E�W���Z�t�E�T���F�[�W
  armamentminister       = { type = 9 id = 55004 } # �E�H���^�[�E�i�b�V��
  ministerofsecurity     = { type = 9 id = 55005 } # �E�B���A���E�p���[
  ministerofintelligence = { type = 9 id = 55006 } # �P�l�X�E�t�H�[�N�X
  chiefofstaff           = { type = 9 id = 55007 } # �E�B���A���E�V���N���A���o�[�W�F�X
  chiefofarmy            = { type = 9 id = 55008 } # �E�B���A���E�V���N���A���o�[�W�F�X
  chiefofnavy            = { type = 9 id = 55009 } # E�ER�E�h�������h
  chiefofair             = { type = 9 id = 55010 } # R�EA�E�R�N����

  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "�j���[�W�[�����h�����R"
    location = 1871
    division = {
      id             = { type = 10600 id = 2 }
      name           = "�j���[�W�[�����h��2�����t�c"
      type           = infantry
      extra          = engineer
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10600 id = 3 }
    name     = "�k���R�ǋ�"
    location = 1869
    division = {
      id             = { type = 10600 id = 4 }
      name           = "��1���e�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 5 }
      name           = "�j���[�W�[�����h��3�����t�c"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10600 id = 6 }
    name     = "�����R�ǋ�"
    location = 1872
    division = {
      id             = { type = 10600 id = 7 }
      name           = "��2���e�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 8 }
      name           = "�j���[�W�[�����h��1�����t�c"
      type           = infantry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10600 id = 9 }
    name     = "�암�R�ǋ�"
    location = 1873
    division = {
      id             = { type = 10600 id = 10 }
      name           = "��3���e�R���t�c"
      type           = cavalry
      strength       = 30
    }
    division = {
      id             = { type = 10600 id = 11 }
      name           = "�j���[�W�[�����h��4�����t�c"
      type           = infantry
      extra          = anti_air
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 10600 id = 12 }
    name     = "HM �j���[�W�[�����h�C�R"
    location = 1871
    base     = 1871
    division = {
      id             = { type = 10600 id = 15 }
      name           = "��1�A����"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 20 }
      name           = "��2�A����"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 21 }
      name           = "��3�A����"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 22 }
      name           = "��4�A����"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10600 id = 23 }
      name           = "��5�A����"
      type           = transport
      model          = 0
    }
  }
}