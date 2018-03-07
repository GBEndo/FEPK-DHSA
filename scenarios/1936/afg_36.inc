##############################
# Country definition for AFG #
##############################

country = {
  tag                = AFG
  capital            = 1486 # �J�u�[��
  manpower           = 110
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }

  nationalprovinces      = { 1486 1493 1492 1484 }
  ownedprovinces         = { 1486 1493 1492 1484 }
  controlledprovinces    = { 1486 1493 1492 1484 }

  techapps               = { 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 54001 } # ���n�����h�E�U�q�[��
  headofgovernment       = { type = 9 id = 54002 } # ���n�����h�E�n�V��
  foreignminister        = { type = 9 id = 54003 } # �n�W�E�t�@�C�Y�E���n�����h�E�W�P���A
  armamentminister       = { type = 9 id = 54004 } # �A�u�h�D���E�}�W�h�E�U�u��
  ministerofsecurity     = { type = 9 id = 54005 } # ���n�����h�E�n�V��
  ministerofintelligence = { type = 9 id = 54006 } # �V���[�E�}�t���[�h�E�K�[�W
  chiefofstaff           = { type = 9 id = 54007 } # ���n�����h�E�_�E�h
  chiefofarmy            = { type = 9 id = 54008 } # ���n�����h�E�_�E�h
  chiefofnavy            = { type = 9 id = 54009 } # ���n�����h�E�U�q�[��
  chiefofair             = { type = 9 id = 54010 } # ���n�����h�E�_�E�h

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "�A�t�K�j�X�^�������R"
    location = 1486
    division = {
      id             = { type = 10000 id = 11 }
      name           = "�����q����"
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 2 }
      name           = "�t�@�C�U�[�o�[�h������"
      type           = militia
      strength       = 80
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "�K�Y�j������"
      type           = militia
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10000 id = 4 }
    name     = "�w���[�g�R"
    location = 1486
    division = {
      id             = { type = 10000 id = 5 }
      name           = "�w���[�g������"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 6 }
      name           = "�w���[�g�R����"
      type           = cavalry
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10000 id = 7 }
    name     = "�J���_�n���R"
    location = 1493
    division = {
      id             = { type = 10000 id = 8 }
      name           = "�W�������o�[�h������"
      type           = militia
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "�J���_�n��������"
      type           = militia
      strength       = 100
    }
  }
}