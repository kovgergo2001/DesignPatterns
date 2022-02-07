#ifndef SIMPLECOMMAND_H
#define SIMPLECOMMAND_H
#pragma once
	
class SimpleCommand : public Command
{
	private:
  		std::string payLoad;

	public:
		SimpleCommand(std::string pay_load);
		void Execute() const override;

};
#endif