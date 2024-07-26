#include <iostream>
#include <string>
#include "Users.h"
using namespace std;




void main() {
	Users *users = new Users();


	Users::Usuarios usuario1;
	

	usuario1.Nome = "Luis";
	usuario1.CPF = "123456789";
	usuario1.Email = "luis.filipe@gmail.com";

	int  insertUsers = users->Insert(usuario1);

	

	

}