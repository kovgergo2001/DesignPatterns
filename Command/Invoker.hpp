class Invoker {
    private:
        Command *onStart;
        Command *onFinish;
    public:
        ~Invoker();
        void SetOnStart(Command *command);
        void SetOnFinish(Command *command);
        void DoSomethingImportant();
};