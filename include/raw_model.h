#ifndef RAWMODEL_H
#define RAWMODEL_H

class RawModel {
  public:
	  RawModel();
	  RawModel(int vao_id, int vertex_count);
	  ~RawModel();
	  int getVaoID();
	  int getVertexCount();

  private:
	  int vao_id_;
	  int vertex_count_;
};

#endif // RAWMODEL_H
