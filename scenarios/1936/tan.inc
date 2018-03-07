##############################
# Country definition for TAN #
##############################

country = {
  tag                = TAN
  capital            = 1418 # �L�W��
  manpower           = 1
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }

  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 71001 } # �T���`���N�E�g�J
  headofgovernment       = { type = 9 id = 71002 } # �P���`�N���E�[��
  foreignminister        = { type = 9 id = 71003 } # �P���`�N���E�[��
  armamentminister       = { type = 9 id = 71004 } # S�ET�E�y�������R
  ministerofsecurity     = { type = 9 id = 71005 } # A�ED�E�N���t�`�F���R
  ministerofintelligence = { type = 9 id = 71006 } # ���@�����[�E���W���E�N
  chiefofstaff           = { type = 9 id = 71007 } # �^���`���N�E�V���}
  chiefofarmy            = { type = 9 id = 71008 } # �^���`���N�E�V���}
  chiefofnavy            = { type = 9 id = 71009 } # V�EI�E�N���R�t�X�L�[
  chiefofair             = { type = 9 id = 71010 } # I�EP�E���K�����X�L�[

  landunit = {
    id       = { type = 31600 id = 1 }
    name     = "�g�D���X�J��1�R"
    location = 1418
    division = {
      id             = { type = 31600 id = 2 }
      name           = "�g�D���@���X�J��1�_�����t�c"
      type           = infantry
      strength       = 100
    }
  }
}