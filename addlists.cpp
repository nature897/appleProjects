node* addlink(node *x, node *y)
{
  if(x==NULL) return y;
  if(y==NULL) return x;
  int add=0;
  node *last = x;
  while(x&&y)
  {
    x->data = x->data + y->data + add;
    add = 0
    //x->data = x->data % 10;
    if(x->data >10)
    {
      add = 1;
      x->data = x->data-10;
    }
    else
    {
      add = 0;
    }
    last = x;
    x=x->next;
    y=y->next;
  }
  if(x)
  {
    x->data= x->data + add;
  }
  while(y)
  {
    node *q = new node();
    last->next = q;
    q->data = y->data + add;
    add = 0;
    last = q;
  }
  return x;
}
