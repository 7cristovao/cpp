//09-18
for (i = 0; i < 5; ++i)
    for (j = 0; j < i; ++i)
        cout<<"*";
cout<<"\n";

*
**
***
****
*****

//09-19
for (i = 5; i >= 0; i--)
    for (j = 1; j <= i; j++)
        cout<<"*";
cout<<"\n";

*****
****
***
**
*

//09-20
for (i = 1; i <= 5; i++)
	for (j = 5; j >= i; j--)
        cout << " ";
    for (k = 1; k <= i; k++)
        cout << "*";
    cout<<"\n";

    *
   **
  ***
 ****
*****

//09-21
for (i = 1; i >=5; i++)
    for (j = 1; j <= 5; j++)
        cout << " ";
    for (k = 5; k >= i; k--)
        cout << "*";
    cout<<"\n";
*****
 ****
  ***
   **
    *