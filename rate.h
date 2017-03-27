using namespace std;
class rate {
  public:
    float Ra_prime(float Sa);
    float Rb_prime(float Sb);
    float Ea();
    float Eb();
    void set_argument(int temp_K, float temp_Ra, float temp_Rb); 
  private:
    int K;
    float Ra;
    float Rb;
  };
