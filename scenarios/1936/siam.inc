##############################
# Country definition for SIA #
##############################
province = {
  id = 1345 # �g���u��
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  capital            = 1343 # �o���R�N
  manpower           = 145
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }

  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 1304 1349 1350 1303 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1020 1190 1110 2450 2460 2510 5080 5090 4120 6210 6300 3010 3070 3400 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 62001 } # ���[�}8��
  headofgovernment       = { type = 9 id = 62002 } # �v�����[�E�p�z���|���p���n�Z�[�i�[
  foreignminister        = { type = 9 id = 62003 } # �n�E�T���v�^�V��
  armamentminister       = { type = 9 id = 62004 } # �v�����[�E�p�z���|���p���n�Z�[�i�[
  ministerofsecurity     = { type = 9 id = 62005 } # �v���[�f�B�[�E�p�m������
  ministerofintelligence = { type = 9 id = 62006 } # �v���[�f�B�[�E�p�m������
  chiefofstaff           = { type = 9 id = 62007 } # �v���[�N�E�s�u�[���\���N���[��
  chiefofarmy            = { type = 9 id = 62008 } # �v���[�N�E�s�u�[���\���N���[��
  chiefofnavy            = { type = 9 id = 62009 } # �v���[�f�B�[�E�p�m������
  chiefofair             = { type = 9 id = 62010 } # �t���E���F�`�����������O�T���g

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "�^�C�����R"
    location = 1345
    division = {
      id             = { type = 23600 id = 2 }
      name           = "�^�C��1�����t�c"
      type           = infantry
      strength       = 90
    }
    division = {
      id             = { type = 23600 id = 3 }
      name           = "�^�C��2�����t�c"
      type           = infantry
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23600 id = 4 }
    name     = "�^�C�����x�@�R"
    location = 1343
    division = {
      id             = { type = 23600 id = 5 }
      name           = "�^�C�����x�@��1�t�c"
      type           = garrison
      extra          = police
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 23600 id = 6 }
    name     = "�^�C�����C�R"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 7 }
      name           = "RTNS �X���A���^��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 8 }
      name           = "RTNS �h���u��"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 10 }
      name           = "�v�����A����"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 23600 id = 12 }
    name     = "�^�C������R"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 13 }
      name           = "RTAF ��1�퓬�q���"
      type           = interceptor
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 23600 id = 14 }
      name           = "RTAF ��1��p�����q���"
      type           = tactical_bomber
      model          = 0
      strength       = 44
    }
  }
}