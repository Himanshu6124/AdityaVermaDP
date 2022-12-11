int heightofbinarytree (struct node * root)
{
    if (root == nullptr)
    return nullptr;

    int  l =heightofbinarytree(root->left);
    int  r =heightofbinarytree(root->right);
    
    if (l>r)
    return 1 + l;
    else
    return 1 +r;

}