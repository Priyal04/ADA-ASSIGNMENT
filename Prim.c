void Prim(int G[][SIZE], int nodes)
{
                 int tree[SIZE], i, j, k;
                 int min_dist, v1, v2,total=0;
                 //Initialize the selected vertices list
                 for (i=0; i<nodes; i++)
                       tree[i] = 0;
                 printf("\n\n The Minimal Spanning Tree Is : \n");
                 tree[0] = 1;
                 for (k=1; k<=nodes-1 ; k++)
                 {
                       min_dist = INFINITY;
                 //initially assign minimum dist as infinity
                 for (i=0;i<=nodes-1 ; i++)
                 {
                         for (i=0;i<=nodes-1 :++)
                         {
                             if (G[i][] && ((tree[i] && !tree[j]]||
                             (Itree[i] && tree[j])))
                             {
                                   if (G[i][j] < min_dist)
                                   {
                                       min_dist = Glijbl;
                                       v1 = i;
                                       v2 = j;
                                   }
                              }
                   }
}


-
printf("\n Edge (%d %d )and weight = %d",v1,v2,min_dist);
tree[v1]= tree[v2] = 1;
total =total+min_dist;
}
        printf("\n\n\t Total Path Length Is =%d" total);

}