#include <iostream>
#include <deque>
#define stringify( name ) # name
using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};
const char* CommandNames[] = 
  {
  stringify( MoveLeft ),
  stringify( MoveRight ),
  stringify( MoveForward),
  stringify( MoveBackward )
  };
class RoboCommander
{
    public:
    deque<CommandType> comm;
    void AddCommand(CommandType newcomm);
    void UndoCommand();
    void Execute();
};
  void RoboCommander::AddCommand(CommandType newcomm)
 {
    comm.push_back(newcomm); 
    
 }
  void RoboCommander::UndoCommand()
 {
     comm.pop_back();
 }
  void RoboCommander::Execute()
 {  
    for(unsigned i = 0; i< comm.size(); i++)
    { 
    cout << CommandNames[comm[i]] << endl;
     
      }
       cout << "Ready!" << endl;
 }
int main()
{
	RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	return 0;
}