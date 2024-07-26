#pragma once
#include <iostream>
#include <vector>
#include <string>

class Users {
public:
	
	struct Usuarios {
		int ID = 0;
		std::string Nome="";
		std::string CPF="";
		std::string Email="";
		std::string Senha="";

	};
	std::vector<Usuarios> usuarios;


	Users();

	int Insert(Usuarios user);
};

Users::Users() {

	
}


int Users::Insert(Usuarios user) {
	Usuarios newUser; 

	newUser.ID = user.ID+1;
	newUser.Nome = user.Nome;
	newUser.CPF = user.CPF;
	newUser.Email = user.Email;



	usuarios.push_back(newUser);

	

	return newUser.ID;
}