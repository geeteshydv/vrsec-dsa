Code-:
void deleteNode(Node del_node)
{
         Node temp=del_node.next;
         del_node.data=temp.data;
         del_node.next=temp.next;
}