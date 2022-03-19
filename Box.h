class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height

      void setLength(int l);
      void setWidth(int w);
      void setHeigth(int h);
       // write prototypes of getters for length, width and height

      int getLength();
      int getWidth();
      int getHeigth();
 
       int calcVolume();
};
