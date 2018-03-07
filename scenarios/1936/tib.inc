##############################
# Country definition for TIB #
##############################

country = {
  tag                = TIB
  capital            = 1453 # ���T
  manpower           = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  free = {
    ic             = 4
    energy         = 10
    metal          = 5
    rare_materials = 3
  }

  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 1442 1443 1444 1455 1454 1877 1888 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }

  techapps               = { 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 73001 } # �_���C�E���}14��
  headofgovernment       = { type = 9 id = 73002 } # ���e�B���O�E�����|�V�F
  foreignminister        = { type = 9 id = 73003 } # ���e�B���O�E�����|�V�F
  armamentminister       = { type = 9 id = 73004 } # �c�F�|���E�V���J�u�p
  ministerofsecurity     = { type = 9 id = 73005 } # ���e�B���O�E�����|�V�F
  ministerofintelligence = { type = 9 id = 73006 } # W�EG�E�N���f�����O
  chiefofstaff           = { type = 9 id = 73007 } # �M���g�E�����h�D
  chiefofarmy            = { type = 9 id = 73008 } # �e���p�E�W���~�A���O
  chiefofnavy            = { type = 9 id = 73009 } # �`���}�E�T���t�F
  chiefofair             = { type = 9 id = 73010 } # �T���|�E�c�F�����O�E���O�W��

  landunit = {
    id       = { type = 10700 id = 1 }
    name     = "�`�x�b�g���R"
    location = 1453
    division = {
      id             = { type = 10700 id = 2 }
      name           = "�f�ˑ�1�t"
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 10700 id = 3 }
      name           = "���U��10����"
      type           = militia
    }
    division = {
      id             = { type = 10700 id = 4 }
      name           = "���U��17����"
      type           = militia
    }
  }
}