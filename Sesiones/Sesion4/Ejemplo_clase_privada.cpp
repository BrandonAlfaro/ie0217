class MyClass
{
private:
    int member1;
};

int main() {
    MyClass obj;

    // Da error porque se declara privada en la clase!
    obj.member1 = 5;
}