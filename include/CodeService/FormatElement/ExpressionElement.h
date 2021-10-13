#pragma once

#include "FormatElement.h"

class ExpressionElement : public FormatElement
{
public:
	ExpressionElement();

	FormatElementType GetType() override;

	void AddChild(std::shared_ptr<FormatElement> child) override;

	void AddChild(std::shared_ptr<LuaAstNode> node) override;

	void KeepBlank(int blank);

private:
	std::vector<std::shared_ptr<FormatElement>> _children;
};