 ///
 /// @file    ex13_28.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-09 09:50:42
 ///
#ifndef __CP5_EX13_28_H__
#define __CP5_EX13_28_H__
#include <string>

class TreeNode{
public:
	TreeNode();
	TreeNode(const TreeNode&);
	TreeNode& operator=(const TreeNode&);
	~TreeNode();
private:
	std::string value;
	int* count;//原书应该是错误的，不用堆空间计数变量是无法实现引用计数的
	TreeNode *left;
	TreeNode *right;
};

TreeNode::TreeNode():value(std::string()),count(new int(1)),left(nullptr),right(nullptr){
}

TreeNode::TreeNode(const TreeNode &node):value(node.value),count(node.count),left(node.left),right(node.right){
	++*count;
}

TreeNode& TreeNode::operator=(const TreeNode &node){
	++*node.count;
	if(0==--*count){
		delete count;
		delete left;
		delete right;
	}
	value=node.value;
	count=node.count;
	left=node.left;
	right=node.right;
	return *this;
}
TreeNode::~TreeNode(){
	if(0==--*count){
		delete count;
		delete left;
		delete right;
	}
}

class BinStrTree{
public:
	BinStrTree();
	BinStrTree(const BinStrTree&);
	BinStrTree& operator=(const BinStrTree&);
	~BinStrTree();
private:
	TreeNode *root;
};

BinStrTree::BinStrTree():root(nullptr){
}

BinStrTree::BinStrTree(const BinStrTree &bst):root(new TreeNode(*bst.root)){
}

BinStrTree& BinStrTree::operator=(const BinStrTree &bst){
	TreeNode* new_root=new TreeNode(*bst.root);//解决自赋值问题
	delete root;
	root=new_root;
	return *this;
}

BinStrTree::~BinStrTree(){
	delete root;
}
#endif
