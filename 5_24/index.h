typedef struct
{
	int x;
	int y;
	struct key_type *Forpointer;
}IndexTable;
typedef IndexTable AdjList[ARC_NUM];
AdjList table;
typedef struct L_Keypointer_Node
{  //����Keypointer��KeyYpointer �ֱ��Ҷ�ӿ鶨λ��ԭ��ĵ�ĳ��
	int table_row;
	struct L_Keypointer_Node *next;
}L_Keypointer_Node, *L_Keypointer_List;
/*typedef struct L_Tuplepointer_Node
{
struct IndexTable *Tuplepointer;
struct L_Tuplepointer_Node *next;
}; //ָ���Ե�ǰ�鿪ͷ�����������������*/

typedef struct key_type{
	int ivalue;
	L_Keypointer_List L_Keypointer;  //ָ��͵�ǰ��x��ͬ��ԭ��ĳЩ�� �������ͷ��㣨��Ϊ�գ�
	//	L_Keypointer_List L_KeyYpointer;  //ָ��͵�ǰ��y��ͬ��ԭ��ĳЩ�� �������ͷ��㣨��Ϊ�գ�
	//L_Tuplepointer_Node *L_Tuplepointer, *Tuplepointer_last; 
}key_type;
/*