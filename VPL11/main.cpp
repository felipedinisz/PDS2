#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

class Ponto
{
private:
    float _x, _y;

public:
    Ponto(float x = 0.0f, float y = 0.0f) : _x(x), _y(y) {}
    float GetX() const { return _x; }
    float GetY() const { return _y; }
};

class FiguraGeometrica
{
protected:
    Ponto _centro;

public:
    FiguraGeometrica(const Ponto &centro) : _centro(centro) {}
    virtual ~FiguraGeometrica() {}
    virtual void Desenha() const = 0;
    virtual float calcularArea() const = 0;
};

class Retangulo : public FiguraGeometrica
{
private:
    float _lado1, _lado2;

public:
    Retangulo(const Ponto &centro, float lado1, float lado2)
        : FiguraGeometrica(centro), _lado1(lado1), _lado2(lado2) {}

    void Desenha() const override
    {
        std::cout << std::fixed << std::setprecision(0)
                  << _centro.GetX() << " " << _centro.GetY() << " RETANGULO\n";
    }
    float calcularArea() const override
    {
        return _lado1 * _lado2;
    }
};

class Triangulo : public FiguraGeometrica
{
private:
    float _base, _altura;

public:
    Triangulo(const Ponto &centro, float base, float altura)
        : FiguraGeometrica(centro), _base(base), _altura(altura) {}

    void Desenha() const override
    {
        std::cout << std::fixed << std::setprecision(0)
                  << _centro.GetX() << " " << _centro.GetY() << " TRIANGULO\n";
    }
    float calcularArea() const override
    {
        return (_base * _altura) / 2.0f;
    }
};

class Circulo : public FiguraGeometrica
{
private:
    float _raio;

public:
    Circulo(const Ponto &centro, float raio)
        : FiguraGeometrica(centro), _raio(raio) {}

    void Desenha() const override
    {
        std::cout << std::fixed << std::setprecision(0)
                  << _centro.GetX() << " " << _centro.GetY() << " CIRCULO\n";
    }
    float calcularArea() const override
    {
        return static_cast<float>(M_PI) * _raio * _raio;
    }
};

int main()
{
    std::vector<FiguraGeometrica *> figuras;
    char comando;

    while (std::cin >> comando)
    {
        if (comando == 'R')
        {
            float c1, c2, l1, l2;
            std::cin >> c1 >> c2 >> l1 >> l2;
            figuras.push_back(new Retangulo(Ponto(c1, c2), l1, l2));
        }
        else if (comando == 'T')
        {
            float c1, c2, b, a;
            std::cin >> c1 >> c2 >> b >> a;
            figuras.push_back(new Triangulo(Ponto(c1, c2), b, a));
        }
        else if (comando == 'C')
        {
            float c1, c2, r;
            std::cin >> c1 >> c2 >> r;
            figuras.push_back(new Circulo(Ponto(c1, c2), r));
        }
        else if (comando == 'D')
        {
            for (auto f : figuras)
                f->Desenha();
        }
        else if (comando == 'A')
        {
            float areaTotal = 0;
            for (auto f : figuras)
            {
                areaTotal += f->calcularArea();
            }
            std::cout << std::fixed << std::setprecision(2) << areaTotal << std::endl;
        }
        else if (comando == 'E')
        {
            for (auto f : figuras)
                delete f;
            break;
        }
    }
    return 0;
}
