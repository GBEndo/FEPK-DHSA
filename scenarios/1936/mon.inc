##############################
# Country definition for MON #
##############################
province = {
  id = 1404 # �E�����o�[�g��
  air_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MON
  puppet             = SOV
  control            = SOV
  capital            = 1404 # �E�����o�[�g��
  manpower           = 7
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 25 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }

  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1207 1398 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 } # �A�i���f�B�[���E�A�}��
  headofgovernment       = { type = 9 id = 94002 } # �h�M�W�����B���E�����T���V����
  foreignminister        = { type = 9 id = 94003 } # �y���W�f�B���E�Q���f��
  armamentminister       = { type = 9 id = 94004 } # �W�����r���E�����x
  ministerofsecurity     = { type = 9 id = 94005 } # �W�����g�T���O�����E�_���f�B���X����
  ministerofintelligence = { type = 9 id = 94006 } # �z�����[�M�[���E�`���C�o���T��
  chiefofstaff           = { type = 9 id = 94007 } # �`�~�h
  chiefofarmy            = { type = 9 id = 94008 } # �`�~�h
  chiefofnavy            = { type = 9 id = 94009 } # V�EG�E�p�C�A�Z���t
  chiefofair             = { type = 9 id = 94010 } # �E�����t

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "�����S���E�i�C�����_�t�R"
    location = 1404
    division = {
      id             = { type = 30500 id = 2 }
      name           = "�����S����1�_�����t�c"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 30500 id = 3 }
      name           = "�i�C�����_�t��2�R���t�c"
      type           = cavalry
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "�i�C�����_�t��3�����t�c"
      type           = militia
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "�i�C�����_�t��4�����t�c"
      type           = militia
    }
  }
}