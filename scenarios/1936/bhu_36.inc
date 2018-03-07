##############################
# Country definition for BHU #
##############################

country = {
  tag                = BHU
  puppet             = ENG
  control            = ENG
  capital            = 1455 # �v�i�J
  manpower           = 5
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 74001 } # �W�O���E�����`���N
  headofgovernment       = { type = 9 id = 74002 } # �\�i���E�g�u�K�C�E�h���W
  foreignminister        = { type = 9 id = 74003 } # �\�i���E�g�u�K�C�E�h���W
  armamentminister       = { type = 9 id = 74004 } # �A�n�}�h�E�A�N�n�Y
  ministerofsecurity     = { type = 9 id = 74005 } # �}�����|�X�E�o�[�o�C�E���M�A���|
  ministerofintelligence = { type = 9 id = 74006 } # ���W�i���h�EB�E�X�e�B�[�����X
  chiefofstaff           = { type = 9 id = 74007 } # �i���M�����E�o�n�h�D�[��
  chiefofarmy            = { type = 9 id = 74008 } # �t�B���b�v�E�g�D�[�W�[
  chiefofnavy            = { type = 9 id = 74009 } # �g�~�[�E�O�[���h
  chiefofair             = { type = 9 id = 74010 } # �j�b�L�[�E�o�[

  landunit = {
    id       = { type = 16000 id = 1 }
    name     = "�u�[�^�������R"
    location = 1455
    division = {
      id             = { type = 16000 id = 2 }
      name           = "�����t�c"
      type           = bergsjaeger
      model          = 1
      strength       = 100
    }
  }
}