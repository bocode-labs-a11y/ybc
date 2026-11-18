int glb(int a,int b)
{
    if(b<0)
    {
    b=-b;
    a=-a;}
    if(b==0)
    return a;
    glb(b,b%a);

}