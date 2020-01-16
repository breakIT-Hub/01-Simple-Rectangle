#include "../include/loader.h"
#include "../include/raw_model.h"

Loader::Loader() {
}

Loader::~Loader() {
}

RawModel* Loader::LoadToVao(std::vector<float>& positions) {
  int vao_id = CreateVao();
  StoreDataInAttributeList(0, positions);
  UnbindVao();
  return new RawModel(vao_id, positions.size()/3);
}

int Loader::CreateVao() {
  int vao_id = glGenVertexArrays();
}

void Loader::StoreDataInAttributeList(int attribute_number, std::vector<float>& data)  {
}

void Loader::UnbindVao() {
}


