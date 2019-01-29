#pragma once
#include <iostream>
#include "json.hpp"
using Json = nlohmann::json;
class ADI
{
public:

	 ADI(const Json::Value& pragma,std::string name) :
		_port(pragma[name].asUInt()), _name(name)
	{
		init();
	}

	/**
	 *��ȡ���������
	 * @return std::string �������������
	 */
	std::string getName()
	{
		return _name;
	}
	/**
	 *��ȡ����Ķ˿ں�
	 * @return std::string �������������
	 */
	size_t getPort()
	{
		return _port;
	}
private:
	void init()
	{
		std::cout << "ADI " << _name << "[" << _port << "]" << " ����ɹ�" << std::endl;
	}
private:
	const size_t _port;
	const std::string _name;
};