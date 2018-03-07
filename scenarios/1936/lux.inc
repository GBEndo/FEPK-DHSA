##############################
# Country definition for LUX #
##############################

country = {
  tag                = LUX
  capital            = 71 # ���N�Z���u���N
  manpower           = 0
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
  }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }

  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }

  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 } # �V�������b�e
  headofgovernment       = { type = 9 id = 66002 } # �W���[�t�E�x�b�V��
  foreignminister        = { type = 9 id = 66003 } # �W���[�t�E�x�b�V��
  armamentminister       = { type = 9 id = 66004 } # �s�G�[���E�f���|��
  ministerofsecurity     = { type = 9 id = 66005 } # �m���x���g�E�h�D�����g
  ministerofintelligence = { type = 9 id = 66006 } # �j�R���X�E�}���P
  chiefofstaff           = { type = 9 id = 66007 } # �s�G�[���E�f���|��
  chiefofarmy            = { type = 9 id = 66008 } # �G�~�[���E�V���y���[
  chiefofnavy            = { type = 9 id = 66009 } # �G�~�[���E�V���y���[
  chiefofair             = { type = 9 id = 66010 } # �j�R���X�E�f�B�[�g���q

  landunit = {
    id       = { type = 27500 id = 1 }
    name     = "���N�Z���u���N�R"
    location = 71
    division = {
      id             = { type = 27500 id = 2 }
      name           = "��1���y�h�q�t�c"
      type           = infantry
      strength       = 30
    }
  }
}