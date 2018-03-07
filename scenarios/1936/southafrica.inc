##############################
# Country definition for SAF #
##############################
province = {
  id = 1108 # �E�H�����B�X�x�C
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1116 # �P�[�v�^�E��
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1117 anti_air = 1 } # �|�[�g�G���U�x�X
province = {
  id = 1119 # �_�[�o��
  anti_air = 3
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 1120 anti_air = 3 } # ���n�l�X�u���N

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  capital            = 1121 # �v���g���A
  manpower           = 20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }

  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1109 1108 1107 1106 1110 }

  techapps               = { 4010 4020 4120 4130 2150 2010 2290 2300 2310 2450 2460 2510 1010 1020 1190 1200 1210 5010 5020 5080 5090 5190 5310 9010 9020 9030 9140 6010 6030 6110 6120 8010 8020 8030 8040 8050 8070 8100 8120 3010 14000 1310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 70001 } # �N�������h�����݃W���[�W�E���B���G
  headofgovernment       = { type = 9 id = 70002 } # �W�F�[���Y�E�w���c�H�[�N
  foreignminister        = { type = 9 id = 70003 } # �W�F�[���Y�E�w���c�H�[�N
  armamentminister       = { type = 9 id = 70004 } # �j�R���[�X�E�n�t�F���n
  ministerofsecurity     = { type = 9 id = 70005 } # �����EC�E�X�}�b�c
  ministerofintelligence = { type = 9 id = 70006 } # �����EC�E�X�}�b�c
  chiefofstaff           = { type = 9 id = 70007 } # �s�G�[���E�t�@������C�l�t�F���g
  chiefofarmy            = { type = 9 id = 70008 } # �����EC�E�X�}�b�c
  chiefofnavy            = { type = 9 id = 70009 } # �s�G�[���E�I�����@�[���m�[��
  chiefofair             = { type = 9 id = 70010 } # �s�G�[���E�t�@������C�l�t�F���g

  landunit = {
    id       = { type = 26600 id = 1 }
    name     = "�P�[�v�R�c"
    location = 1116
    division = {
      id             = { type = 26600 id = 2 }
      name           = "�P�[�v���ԕ���"
      type           = garrison
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 3 }
    name     = "���B�b�g�o�[�e���X�����g�R�c"
    location = 1120
    division = {
      id             = { type = 26600 id = 4 }
      name           = "���B�b�g�o�[�e���X�����g���ԕ���"
      type           = garrison
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 26600 id = 5 }
    name     = "�i�^�[���R�c"
    location = 1119
    division = {
      id             = { type = 26600 id = 6 }
      name           = "�i�^�[�����ԕ���"
      type           = garrison
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 26600 id = 7 }
    name     = "��A�t���J�C�R"
    location = 1116
    base     = 1116
    division = {
      id             = { type = 26600 id = 10 }
      name           = "SAN ��1�A����"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 11 }
      name           = "SAN ��2�A����"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 12 }
      name           = "SAN ��3�A����"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 13 }
      name           = "SAN ��4�A����"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 14 }
      name           = "SAN ��5�A����"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 15 }
      name           = "SAN ��6�A����"
      type           = transport
    }
  }
}