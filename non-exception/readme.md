# When to use the noexcept operator?
You have the guarantee that the function will not throw any exception in any case.
You want to optimize the performance by allowing the compiler to skip the process of exception handling which leads to faster execution of the program.
# When not to use the noexcept operator?
Your function can throw exceptions, or if you’re not sure about its exception safety.
When you are dealing with destructors as noexcept destructor can lead to undefined behavior, when exceptions are thrown during object destruction.
