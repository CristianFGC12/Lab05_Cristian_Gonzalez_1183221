

#include "pch.h"
#include "Lista.h"

void List::Add(int item)
{
	Node* Nuevo = new Node();
	Nuevo->data = item;
	Nuevo->next = header;
	header = Nuevo;
}
void List::Clear()
{
	while (header != nullptr) {
		Node* aux = header;
		header = header->next;
		delete aux;
	}
}
int List::Count() 
{
	int count = 0;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		count++;
	}
	return count;
}
bool List::Contains(int item) 
{
	int count = 0;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		if (indice->data == item)
		{
			return true;
		}
		count++;
	}
	return false;
}
int List::IndexOf(int item) 
{
	int count = 0;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		if (indice->data==item)
		{
			return count;
		}
		count++;
	}
	return -1;
}
void List::Insert(int index, int item) 
{
		if (index == 0)
	{
		Add(item);
	}
	else
	{
		Node* Nuevo = new Node();
		Nuevo->data = item;
		int posicionactual = 0;
		Node* Actual = header;
		Node* Anterior = header;
		while (posicionactual < index)
		{
			Anterior = Actual;
			Actual = Actual->next;
			posicionactual++;
		}
		Nuevo->next = Actual;
		Anterior->next=Nuevo;
	}
}
int List::GetItem(int index) 
{
	Node* Actual = header;
	if (index == 0)
	{
		return header->data ;
	}
	else
	{
		Node* Anterior = header;
		for (int i = 0; i < index; i++)
		{
			Anterior = Actual;
			Actual = Actual->next;
		}
		Anterior->next = Actual->next;
		return Actual->data;
	}

}
void List::SetItem(int index, int item)
{
	Node* Actual = header;
	if (index == 0)
	{
		header->data = item;
	}
	else
	{
		Node* Anterior = header;
		for (int i = 0; i < index; i++)
		{
			Anterior = Actual;
			Actual = Actual->next;
		}
		Anterior->next = Actual->next;
		Actual->data = item;
	}
}
int List::LastIndexOf(int item)
{
	int count = 0;
	int ind = -1;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		if (indice->data == item)
		{
			ind = count;
		}
		count++;
	}
	if (ind == -1)
	{
		return -1;
	}
	else
	{
		return ind;
	}
}
bool List::Remove(int item)
{
	Node* Actual = header;
	int Inidce = IndexOf(item);
	if (Inidce==-1)
	{
		return false;
	}
	else if(Inidce==0)
	{
		header = header->next;
	}
	else
	{
		Node* Anterior = header;
		for (int i = 0; i < Inidce; i++)
		{
			Anterior = Actual;
			Actual = Actual->next;
		}
		Anterior->next = Actual->next;
	}
	delete(Actual);
	return true;
}
void List::RemoveAt(int index)
{
	Node* Actual = header;
	if (index == 0)
	{
		header = header->next;
	}
	else
	{
		Node* Anterior = header;
		for (int i = 0; i < index; i++)
		{
			Anterior = Actual;
			Actual = Actual->next;
		}
		Anterior->next = Actual->next;
	}
	delete(Actual);
}