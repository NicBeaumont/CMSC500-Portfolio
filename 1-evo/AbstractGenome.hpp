#include <vector>
#include <iostream>
template<class T>
class AbstractGenome{
    protected:
    std::vector<T> genome;

    public:
    AbstractGenome(int n){
        genome.resize(n);
    }
    ~AbstractGenome(){};

    void fill(T x){
        std::fill(genome.begin(),genome.end(),x);
        for(auto i: genome)
        {
            std::cout << i << " ";
        }
    }

    std::vector<T> get(){return genome;}

    void set(std::vector<T> vec)
    {
        genome = vec;
        for(auto i: genome)
        {
            std::cout << i << " ";
        }
    }
    
};