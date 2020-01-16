#include "../include/Loader.h"
#include "../include/RawModel.h"

Loader::Loader() {
}

Loader::~Loader() {
}

RawModel* Loader::loadToVAO(std::vector<float>& positions) {
  int vaoID = createVAO();
  storeDataInAttributeList(0, positions);
  unbindVAO();
  return new RawModel(vaoID, positions.size()/3);
}

int Loader::createVAO() {

}

void Loader::storeDataInAttributeList(int attribute_number, std::vector<float>& data)  {
}

void Loader::unbindVAO() {
}


