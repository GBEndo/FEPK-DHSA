
##############################
# Country definition for CYN #
##############################

country =
{ tag                    = CYN
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 4
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1307 # Kunming
  manpower               = 200
  dissent                = 25
  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = 200 }
  }
  # Xikang 1282
  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 1281 1282 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 1281 }
  # Xikang 1282
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 1281 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 7
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  SpyInfo                = { country = "SIA" NumberOfSpies = 3 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 6 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }
  # ######
  # CHINA 1936 OOB
  # ######
  landunit =
  { location = 1307 # Kunming
    name     = "�_��x����"
    leader   = 501006 # Long Yun
    id       = { type = 22100 id = 1 }
    division =
    { id       = { type = 22100 id = 2 }
      name     = "��21�Ɨ���"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 3 }
      name     = "��22�Ɨ���"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 4 }
      name     = "��23�Ɨ���"
      type     = infantry
      strength = 50
      model    = 0
    }
  }
  landunit =
  { location = 1281 # changed from Kangding
    name     = "��24�R"
    leader   = 501004 # Liu Wenhui
    id       = { type = 22100 id = 11 }
    division =
    { id       = { type = 22100 id = 12 }
      name     = "��136�����t"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 13 }
      name     = "��137�����t"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "�l��ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 270 }
    division =
    { id    = { type = 22000 id = 271 }
      name  = "�l��ۈ���"
      type  = militia
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "��47�R"
    # ## leader = 50171 # Li Jiayu
    id       = { type = 22000 id = 122 }
    division =
    { id    = { type = 22000 id = 123 }
      name  = "��47�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "��21�R"
    # ## leader = 50207 # Liu Xiang
    id       = { type = 22000 id = 49 }
    division =
    { id    = { type = 22000 id = 50 }
      name  = "��21�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "��23�R"
    # ## leader = 50248 # Pan Wenhua
    id       = { type = 22000 id = 57 }
    division =
    { id    = { type = 22000 id = 58 }
      name  = "��23�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "��44�R"
    # ## leader = 50323 # Wang Zuanxu
    id       = { type = 22000 id = 109 }
    division =
    { id    = { type = 22000 id = 110 }
      name  = "��44�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "��45�R"
    # ## leader = 50284 # Deng Xihou
    id       = { type = 22000 id = 113 }
    division =
    { id    = { type = 22000 id = 114 }
      name  = "��45�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "��7���R"
    # ## leader = #
    id       = { type = 22000 id = 156 }
    division =
    { id    = { type = 22000 id = 157 }
      name  = "��7���R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "��4�R"
    # ## leader = 50332 # Wu Qiwei
    id       = { type = 22000 id = 12 }
    division =
    { id    = { type = 22000 id = 13 }
      name  = "��4�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "��5�R"
    # ## leader = 50115 # Xue Yue
    id       = { type = 22000 id = 15 }
    division =
    { id    = { type = 22000 id = 16 }
      name  = "��5�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "��20�R"
    # ## leader = 50343 # Yang Sen
    id       = { type = 22000 id = 45 }
    division =
    { id    = { type = 22000 id = 46 }
      name  = "��20�R"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "�M�B�i�ߕ�"
    # ## leader = #
    id       = { type = 22000 id = 218 }
    division =
    { id    = { type = 22000 id = 219 }
      name  = "�M�B�i�ߕ�"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "�M�B�ۈ���"
    # ## leader = #
    id       = { type = 22000 id = 272 }
    division =
    { id    = { type = 22000 id = 273 }
      name  = "�M�B�ۈ���"
      type  = militia
      model = 0
    }
  }
}
