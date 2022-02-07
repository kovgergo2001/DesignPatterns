#ifndef COMMAND_H
#define COMMAND_H
#pragma once
	
class Command {
 public:
  virtual ~Command() {
	  
  }
  virtual void Execute() const = 0;
};
#endif