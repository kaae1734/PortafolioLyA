/*: Se dispone de un archivo denominado stock.dat correspondiente a la
existencia de artículos de un almacén. Se desea señalar aquellos artículos cuyo nivel de
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer
Pedido". Cada artículo contiene un registro con los siguientes campos:*/

#define MAXREGISTRY 10
#define MAXCHAR 50

typedef struct articulodata{
    char codigo[MAXCHAR];
    char nivelminimo[MAXCHAR];
    char nivelactual[MAXCHAR];
    char proveedor[MAXCHAR];
    
} ;