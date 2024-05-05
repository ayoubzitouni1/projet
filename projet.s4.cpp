#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int id=0;
typedef struct{
int ID;
char nom[20];
char description[100];
char nom_utilisateure[20];
float prix;
int qantiter;
int seuil_aret_stock;
char dat_d_entrer[20];
char dat_d_sortie[20];	
}produit;
//1
void AjouterProduit(char nom[20],produit *t,int *pn,int *pid){

	*pn=*pn+1;
	*pid=*pid+1;
		
	t=(produit*)realloc(t,*pn*sizeof(produit));
	(t+1)->ID=*pid;
	strcpy((t+(*pn))->nom_utilisateure,nom);	
	printf("\n entrer le NOM de produit: ");
	scanf("%s",(t+(*pn))->nom);
	printf("entrer la DESCRIPTION de produit: ");
	scanf("%s",(t+1)->description);
	printf("entrer le PRIX de produit: ");
	scanf("%f",&(t+(*pn))->prix);
	printf("entrer la QAUNTITER de produit: ");
	scanf("%d",&(t+(*pn))->qantiter);
	printf("entrer le SEUIL D ARRET DE STOCK de produit: ");
	scanf("%d",&(t+(*pn))->seuil_aret_stock);
	printf("entrer la DATE D ENTRER de produit: ");
	scanf("%s",(t+(*pn))->dat_d_entrer);
	printf("entrer la DATE D SORTIE de produit: ");
	scanf("%s",(t+(*pn))->dat_d_sortie);
	printf("\n le ID de votre nouveaux est %d",*pid);
}
//2
void ModifierProduit(produit *t,char nom[20],int n){
	int i,id,c=0;
	printf("\n entrer ID de produit");
	scanf("%d",&id);
	for(i=0;i<n;i++){
	if(id==(t+i)->ID&&strcmp(nom,(t+i)->nom_utilisateure)==0){
	c=1;
	printf("\n entrer le NOM de produit: ");
	scanf("%s",(t+i)->nom);
	printf("entrer la DESCRIPTION de produit");
	gets((t+i)->description);
	printf("entrer le PRIX de produit: ");
	scanf("%f",&(t+i)->prix);
	printf("entrer la QAUNTITER de produit: ");
	scanf("%d",&(t+i)->qantiter);
	printf("entrer le SEUIL D ARRET DE STOCK de produit: ");
	scanf("%d",&(t+i)->seuil_aret_stock);
	printf("entrer la DATE D ENTRER de produit: ");
	scanf("%s",(t+i)->dat_d_entrer);
	printf("entrer la DATE D SORTIE de produit: ");
	scanf("%s",(t+i)->dat_d_sortie);
	
	}	
}
if(c==0){
	printf("\nvois n avais pas de produit avec ce ID");
}	
}
//3
void SupprimerProduit(produit *t,int *pn){
	int position,i,id;
	printf("\n entrer le Id de produit ");
	scanf("%d",&id);
	for(i=0;i<*pn;i++){
		if(id==(t+i)->ID){
		position=i;
		for(i=position+1;i<*pn;i++){
		*(t+i-1)=*(t+i);
	}
	*pn=*pn-1;
	t=(produit*)realloc(t,*pn*sizeof(produit));
	}
	
	else
	printf("\n il n exist pas de produit avec cet %d ID",id);
	}
}
//4
void AfficherProduit(produit *t,char nom[20],int n){
	int i;
		
	for(i=1;i<=n;i++){
		if(strcmp(nom,(t+i)->nom_utilisateure)==0){
			
	printf("\n NOM user:%s ",nom);		
	printf("\n NOM de utulisateurem:%s ",(t+i)->nom_utilisateure);
			
	printf("\n ID de :%d ",(t+i)->ID);
	printf("end ");
	printf("\n NOM de produit:%s ",(t+i)->nom);
	printf("nom ");
	printf("\n DESCRIPTION de produit: %s ",(t+i)->description);
	printf("des ");
	printf("\n PRIX de produit: %.2f ",(t+i)->prix);
	printf("\n entrer la QAUNTITER de produit: %d",(t+i)->qantiter);
	printf("\n entrer le SEUIL D ARRET DE STOCK de produit: %d",(t+i)->seuil_aret_stock);
	printf("\n DATE D ENTRER de produit: %s ",(t+i)->dat_d_entrer);
	printf("\n DATE D SORTIE de produit: %s",(t+i)->dat_d_sortie);	
	
		}
	}
	
}
//5
RechecheID(produit *t,char nom[20],int n){
	int i,id;
	printf("\n entrer ID de produit");
	scanf("%d",&id);
	for(i=0;i<n;i++){
	if(strcmp(nom,(t+i)->nom_utilisateure)==0&&id==(t+i)->ID){
	printf("\n ID de produit:%s ",(t+i)->ID);
	printf("\n NOM de produit:%s ",(t+i)->nom);
	printf("\n DESCRIPTION de produit: %s ",(t+i)->description);
	printf("\n PRIX de produit: %.2f ",(t+i)->prix);
	printf("\n entrer la QAUNTITER de produit: %d",(t+i)->qantiter);
	printf("\n entrer le SEUIL D ARRET DE STOCK de produit: %d",(t+i)->seuil_aret_stock);
	printf("\n DATE D ENTRER de produit: %s ",(t+i)->dat_d_entrer);
	printf("\n DATE D SORTIE de produit: %s",(t+i)->dat_d_sortie);	
	break;		
		}
	}
}
//6
RechecheNom(produit *t,char nom[20],int n){
	int i;
	char nomp[20];
	printf("\n entrer le nom de produit");
	scanf("%s",&nomp);
	for(i=0;i<n;i++){
	if(strcmp(nom,(t+i)->nom_utilisateure)==0&&strcmp(nomp,(t+i)->nom)==0){
	printf("\n ID de produit:%s ",(t+i)->ID);
	printf("\n NOM de produit:%s ",(t+i)->nom);
	printf("\n DESCRIPTION de produit: %s ",(t+i)->description);
	printf("\n PRIX de produit: %.2f ",(t+i)->prix);
	printf("\n entrer la QAUNTITER de produit: %d",(t+i)->qantiter);
	printf("\n entrer le SEUIL D ARRET DE STOCK de produit: %d",(t+i)->seuil_aret_stock);
	printf("\n DATE D ENTRER de produit: %s ",(t+i)->dat_d_entrer);
	printf("\n DATE D SORTIE de produit: %s",(t+i)->dat_d_sortie);	
	break;		
		}
	}
}
//7
void TrierAlphabitique(char nom[20],produit *t,int n){
	int i,cte=0,cte2=0,j;
	produit *tmp;
	produit *v;
	for(i=0;i<n;i++){
	if(strcmp(nom,(t+i)->nom_utilisateure)==0){
		cte++;
	}
	v=(produit*)malloc(cte*sizeof(produit));	
	}
	for(i=0;i<n;i++){		
	if(strcmp(nom,(t+i)->nom_utilisateure)==0){
	*(v+cte2)=*(t+i);
	cte2++;	
	}
	}
	for (i=0;i<cte-1;i++){ 
    for (j=i+1;j<cte;j++){        
    if(strcmp((v+i)->nom,(v+j)->nom)>0){ 
	*tmp=*(v+i);
	*(v+i)=*(v+j);
	*(v+j)=*(v+i);
	}
	}     
}
AfficherProduit(v,nom,n);	
}
//8
void TrierPrix(char nom[20],produit *t,int n){
	int i,cte=0,cte2=0,j;
	produit *tmp;
	produit *v;
	for(i=0;i<n;i++){
	if(strcmp(nom,(t+i)->nom_utilisateure)==0){
		cte++;
	}
	v=(produit*)malloc(cte*sizeof(produit));	
	}
	for(i=0;i<n;i++){		
	if(strcmp(nom,(t+i)->nom_utilisateure)==0){
	*(v+cte2)=*(t+i);
	cte2++;	
	}
	}
	for (i=0;i<cte-1;i++){ 
    for (j=i+1;j<cte;j++){        
    if ((v+i)->prix>(v+j)->prix){ 
	*tmp=*(v+i);
	*(v+i)=*(v+j);
	*(v+j)=*(v+i);
	}
	}     
}
AfficherProduit(v,nom,n);	
}
int main(){
	int id=0,*pid;
	produit *t;
	int *pn,n=0;
	char nom[20],chois1;
	int chois;
	pn=&n;
	pid=&id;
t=(produit*)malloc(100*sizeof(produit));
printf("\n entrer votre nom :");
scanf("%s",nom);
debut:
printf("\n********************MENU GESTION DE STOCK********************");
printf("\n entrer '1' pour ajouter un produit");
printf("\n entrer '2' pour modifier un produit");
printf("\n entrer '3' pour suprimer un produit");
printf("\n entrer '4' pour afficher les produit");
printf("\n entrer '5' pour rechercher un  produit avec son ID ");
printf("\n entrer '6' pour rechercher un  produit avec son NOM ");
printf("\n entrer '7' pour trier les produit avec son ardre alphabitique ");
printf("\n entrer '8' pour trier les produit avec son prix ");
printf("\n entrer '9' pour quiter le programme");
printf("\n             entrer votre choix : ");
scanf("%d",&chois);

switch(chois){
	case 1:	
		AjouterProduit(nom,t,pn,pid);
		break;
	case 2:
		ModifierProduit(t,nom,n);
		break;
	case 3:
		SupprimerProduit(t,pn);
		break;
	case 4:
		printf("aficher");
		AfficherProduit(t,nom,n);
		break;
	case 5:
		RechecheID(t,nom,n);
		break;
	case 6:
		RechecheNom(t,nom,n);
		break;
	case 7:
		TrierAlphabitique(nom,t,n);
		break;
	case 8:
		TrierPrix(nom,t,n);
		break;
	case 9:
		exit(0);
	default:
		printf("\n ce chois n exist pas");
		goto debut;
}
if(chois!=9){
	goto debut;
}
}
