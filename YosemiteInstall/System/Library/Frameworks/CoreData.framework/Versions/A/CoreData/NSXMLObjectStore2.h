/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSAtomicStore.h>

@class NSDictionary;

@interface NSXMLObjectStore2 : NSAtomicStore {

	unsigned long long _nextPK64;
	void* _reserved;
	NSDictionary* _entitiesForConfiguration;

}
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(char)load:(id*)arg1 ;
-(id)_processMetadataNode:(id)arg1 ;
-(void)_processDBInfoNode:(id)arg1 ;
-(id)_createDocument;
-(char)_isDocumentXMLStore:(id)arg1 ;
-(id)xmlInfoForAttribute:(id)arg1 ;
-(id)retainedXmlInfoForRelationship:(id)arg1 ;
-(id)getXMLAttributeValueFromObject:(id)arg1 forAttribute:(id)arg2 ;
-(void)createAttributeChildOnNode:(id)arg1 forAttribute:(id)arg2 type:(id)arg3 andValue:(id)arg4 ;
-(id)createRelationshipChildOnNode:(id)arg1 forRelationshipDescription:(id)arg2 ;
-(unsigned long long)nextPK64;
-(void)willRemoveCacheNodes:(id)arg1 ;
-(id)newCacheNodeForManagedObject:(id)arg1 ;
-(void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2 ;
-(id)newReferenceObjectForManagedObject:(id)arg1 ;
-(id)_metadataXML;
-(char)_arrangeToHaveMetadata;
-(void)_loadMetadataFromDocument:(id)arg1 ;
-(id)_sortNodesForSave:(id)arg1 ;
-(void)_loadFromDocument:(id)arg1 ;
-(void)_updateXMLNode:(id)arg1 fromObject:(id)arg2 ;
-(id)getIDRefStringForValue:(id)arg1 ofRelationship:(id)arg2 objectForError:(id)arg3 ;
-(id)_createCacheNodeFromXMLElement:(id)arg1 ;
-(void)_processDocument:(id)arg1 ;
-(void)_processMetadataForDocument:(id)arg1 ;
-(id)_entitiesForConfiguration;
-(id)_constructMetadataNode;
-(void)dealloc;
-(id)type;
-(char)save:(id*)arg1 ;
@end

