#pragma once

template <class Tkey, class Tval>
class Node
{
public:
	Tval value;
	Tkey key;
	Node<Tkey, Tval>* left;
	Node<Tkey, Tval>* right;

	Node(const Tkey& key, const Tval& val) : key(key), value(val), left(nullptr), right(nullptr) {}

	Tval* getValue(Tkey key){
	
	}

	void print() {
		if (left != nullptr) left->print();
		cout << value << " ";
		if (right != nullptr) right->print();
		cout << value << " ";

	}

	void del() {
		if (left != nullptr)left->print();
		if (right != nullptr) right->print();
		delete this;
	}

	Tval* find(Tkey key) {
		if (key == this->key)return &value;
		if (key < this->key && this->left != nullptr)return this->left->getValue(key);
		if (key > this->key && this->right != nullptr)return this->right->getValue(key);

	}
};
