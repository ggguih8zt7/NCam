// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_DefaultMutableTreeNode__
#define __javax_swing_tree_DefaultMutableTreeNode__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace tree
      {
        class DefaultMutableTreeNode;
        class TreeNode;
        class MutableTreeNode;
      }
    }
  }
}

class javax::swing::tree::DefaultMutableTreeNode : public ::java::lang::Object
{
public:
  DefaultMutableTreeNode ();
  DefaultMutableTreeNode (::java::lang::Object *);
  DefaultMutableTreeNode (::java::lang::Object *, jboolean);
  virtual ::java::lang::Object *clone () { return 0; }
  virtual ::java::lang::String *toString ();
  virtual void add (::javax::swing::tree::MutableTreeNode *);
  virtual ::javax::swing::tree::TreeNode *getParent () { return reinterpret_cast< ::javax::swing::tree::TreeNode *> (parent); }
  virtual void remove (jint);
  virtual void remove (::javax::swing::tree::MutableTreeNode *);
private:
  void writeObject (::java::io::ObjectOutputStream *) { }
  void readObject (::java::io::ObjectInputStream *) { }
public:
  virtual void insert (::javax::swing::tree::MutableTreeNode *, jint);
  virtual JArray< ::javax::swing::tree::TreeNode *> *getPath ();
  virtual ::java::util::Enumeration *children ();
  virtual void setParent (::javax::swing::tree::MutableTreeNode *);
  virtual ::javax::swing::tree::TreeNode *getChildAt (jint);
  virtual jint getChildCount ();
  virtual jint getIndex (::javax::swing::tree::TreeNode *);
  virtual void setAllowsChildren (jboolean);
  virtual jboolean getAllowsChildren () { return allowsChildren; }
  virtual void setUserObject (::java::lang::Object *);
  virtual ::java::lang::Object *getUserObject () { return userObject; }
  virtual void removeFromParent ();
  virtual void removeAllChildren ();
  virtual jboolean isNodeAncestor (::javax::swing::tree::TreeNode *);
  virtual jboolean isNodeDescendant (::javax::swing::tree::DefaultMutableTreeNode *);
  virtual ::javax::swing::tree::TreeNode *getSharedAncestor (::javax::swing::tree::DefaultMutableTreeNode *);
  virtual jboolean isNodeRelated (::javax::swing::tree::DefaultMutableTreeNode *);
  virtual jint getDepth ();
  static void growTree (::javax::swing::tree::DefaultMutableTreeNode *);
  static void main (JArray< ::java::lang::String *> *);
  virtual jint getLevel ();
public:  // actually protected
  virtual JArray< ::javax::swing::tree::TreeNode *> *getPathToRoot (::javax::swing::tree::TreeNode *, jint) { return 0; }
public:
  virtual JArray< ::java::lang::Object *> *getUserObjectPath ();
  virtual ::javax::swing::tree::TreeNode *getRoot ();
  virtual jboolean isRoot ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getNextNode () { return 0; }
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getPreviousNode () { return 0; }
  virtual ::java::util::Enumeration *preorderEnumeration () { return 0; }
  virtual ::java::util::Enumeration *postorderEnumeration () { return 0; }
  virtual ::java::util::Enumeration *breadthFirstEnumeration () { return 0; }
  virtual ::java::util::Enumeration *depthFirstEnumeration () { return 0; }
  virtual ::java::util::Enumeration *pathFromAncestorEnumeration (::javax::swing::tree::TreeNode *) { return 0; }
  virtual jboolean isNodeChild (::javax::swing::tree::TreeNode *);
  virtual ::javax::swing::tree::TreeNode *getFirstChild ();
  virtual ::javax::swing::tree::TreeNode *getLastChild ();
  virtual ::javax::swing::tree::TreeNode *getChildAfter (::javax::swing::tree::TreeNode *);
  virtual ::javax::swing::tree::TreeNode *getChildBefore (::javax::swing::tree::TreeNode *);
  virtual jboolean isNodeSibling (::javax::swing::tree::TreeNode *);
  virtual jint getSiblingCount ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getNextSibling ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getPreviousSibling ();
  virtual jboolean isLeaf ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getFirstLeaf ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getLastLeaf ();
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getNextLeaf () { return 0; }
  virtual ::javax::swing::tree::DefaultMutableTreeNode *getPreviousLeaf () { return 0; }
  virtual jint getLeafCount ();
public: // actually package-private
  static const jlong serialVersionUID = -4298474751201349152LL;
public:
  static ::java::util::Enumeration *EMPTY_ENUMERATION;
public:  // actually protected
  ::javax::swing::tree::MutableTreeNode * __attribute__((aligned(__alignof__( ::java::lang::Object )))) parent;
  ::java::util::Vector *children__;
  ::java::lang::Object *userObject;
  jboolean allowsChildren;
public: // actually package-private
  static ::java::util::Random *random;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_tree_DefaultMutableTreeNode__ */