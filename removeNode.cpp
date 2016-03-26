bool remove(node *c)
{
  if(c==NULL || c->next == NULL) return false;

  note *q = c->next;
  c->data = q->data;
  c->next = q->next;
  delete q;
  return true;
}
