/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXMLNode.h>

@class NSString, NSArray, NSMutableDictionary;

@interface NSXMLDTD : NSXMLNode {

	NSString* _name;
	NSString* _publicID;
	NSString* _systemID;
	NSArray* _children;
	char _childrenHaveMutated;
	unsigned char _padding3[3];
	NSMutableDictionary* _entities;
	NSMutableDictionary* _elements;
	NSMutableDictionary* _notations;
	NSMutableDictionary* _attributes;
	NSString* _original;
	char _modified;
	unsigned char _padding2[3];

}

@property (copy) NSString * publicID; 
@property (copy) NSString * systemID; 
+(void)_initializePredefinedEntities;
+(id)_nodeFromLibXML2Node:(void*)arg1 ;
+(void)_initializeDTD:(id)arg1 fromTidyNode:(TidyNode*)arg2 ;
+(id)predefinedEntityDeclarationForName:(id)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildren:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_renameChild:(id)arg1 toName:(id)arg2 ;
-(void)_setModified:(char)arg1 ;
-(void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setPublicID:(NSString *)arg1 ;
-(void)setSystemID:(NSString *)arg1 ;
-(void)_setDTDString:(id)arg1 ;
-(id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)removeChildAtIndex:(unsigned long long)arg1 ;
-(void)replaceChildAtIndex:(unsigned long long)arg1 withNode:(id)arg2 ;
-(NSString *)publicID;
-(NSString *)systemID;
-(id)_children;
-(id)_DTDString;
-(unsigned long long)countOfChildren;
-(id)objectInChildrenAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildrenAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)entityDeclarationForName:(id)arg1 ;
-(id)notationDeclarationForName:(id)arg1 ;
-(id)elementDeclarationForName:(id)arg1 ;
-(id)attributeDeclarationForName:(id)arg1 elementName:(id)arg2 ;
-(void)_internalXMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)canonicalXMLStringPreservingComments:(char)arg1 ;
-(id)_elementAttributeRelationship;
-(void)_addLibxml2TreeRepresentationToDoc:(xmlDoc*)arg1 context:(xmlValidCtxt*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)children;
-(void)addChild:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)childCount;
@end

