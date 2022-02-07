#ifndef COMPLEXCOMMAND_H
#define COMPLEXCOMMAND_H
#pragma once
	
class ComplexCommand : public Command
{
	private:
		Receiver *receiver;
		std::string a;
  		std::string b;
	public:
		ComplexCommand(Receiver *receiverP, std::string aP, std::string bP);
		void Execute() const override;
};
#endif