#pragma once
#include <string>
#define IGV 0.18
using namespace std;
class Auto {
private:
	int codigo;
	string marca;
	string modelo;
	double precio;
	int stock;
public:
	Auto(int codigo, string marca, string modelo, double precio, int stock){
		this->codigo = codigo;
		this->marca = marca;
		this->modelo = modelo;
		this->precio = precio;
		this->stock = stock;
	}
	double cacularDescuento() {
		double descuento = 0;
		if (stock > 100) {
			descuento = 0.20 * precio;
		}
		return descuento;
	}
	double calcularIGV() {
		return precio * IGV;
	}
	double calcularPrecioFinal() {
		return precio + calcularIGV() - cacularDescuento();
	}
	int getCodigo() {
		return codigo;
	}
	string getMarca() {
		return marca;
	}
	string getModelo() {
		return modelo;
	}
	int getStock(){
		return stock;
	}
	double getPrecio() {
		return precio;
	}

};