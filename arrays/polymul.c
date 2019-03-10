void polymul(struct link *n1, struct link *n2, struct link *n)
{
    struct link * n2beg=n2;

            while (n1) 
            {
                    struct link * temp=(struct link *)malloc(sizeof(struct link));
                    temp->next=NULL;    
                    n2=n2beg;
                    while (n2) 
                    {
                            temp->coeff = n1->coeff * n2->coeff;

                            temp->pow = n1->pow + n2->pow;

                            n2 = n2->next;
                            temp->next=(struct link *)malloc(sizeof(struct link));
                            temp=temp->next;
                            temp->next=NULL;

                    }

                    polyadd(temp,n,n);
                    n1 = n1->next;
                    free(temp);
            }