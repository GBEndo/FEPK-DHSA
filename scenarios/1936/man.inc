##############################
# Country definition for MAN #
##############################
province = {
  id = 1379 # �����_
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  capital            = 1390 # �V��
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 100
  money          = 10
  free = {
    energy         = 14
    metal          = 7
    rare_materials = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1397 1398 1386 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }

  techapps               = { 1010 1190 2150 2290 2400 4010 5080 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 } # ��V (�v�[�C�[)
  headofgovernment       = { type = 9 id = 58002 } # ���i�� (�`�����E�`���t�C)
  foreignminister        = { type = 9 id = 58003 } # ���i�� (�`�����E�`���t�C)
  armamentminister       = { type = 9 id = 58004 } # ���ЍM (���[�E�V���I�P��)
  ministerofsecurity     = { type = 9 id = 58005 } # �`���E�`���[�n��
  ministerofintelligence = { type = 9 id = 58006 } # �쓇�F�q
  chiefofstaff           = { type = 9 id = 58007 } # �g�� (�`�E�V��)
  chiefofarmy            = { type = 9 id = 58008 } # �g�� (�`�E�V��)
  chiefofnavy            = { type = 9 id = 58009 } # �Z���Q�C�E���~���`�F�t
  chiefofair             = { type = 9 id = 58010 } # ���R���K

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "��V��1�R��"
    location = 1389
    division = {
      id             = { type = 28500 id = 2 }
      name           = "�ޏB��7�����"
      type           = militia
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 28500 id = 3 }
    name     = "�ꎙ�����3�R��"
    location = 1382
    division = {
      id             = { type = 28500 id = 4 }
      name           = "�ޏB��9�����"
      type           = militia
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 28500 id = 5 }
    name     = "�����_��4�R��"
    location = 1379
    division = {
      id             = { type = 28500 id = 6 }
      name           = "�ޏB��10�����"
      type           = militia
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 7 }
    name     = "������5�R��"
    location = 1374
    division = {
      id             = { type = 28500 id = 8 }
      name           = "�ޏB��12�����"
      type           = militia
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28500 id = 9 }
    name     = "�g�ё�2�R��"
    location = 1389
    division = {
      id             = { type = 28500 id = 10 }
      name           = "�ޏB��8�����"
      type           = militia
      strength       = 60
    }
    division = {
      id             = { type = 28500 id = 11 }
      name           = "�ޏB��2�R����"
      type           = cavalry
      strength       = 45
    }
  }
}
