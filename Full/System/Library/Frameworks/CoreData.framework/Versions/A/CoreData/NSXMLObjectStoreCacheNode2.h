/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSAtomicStoreCacheNode.h>

@class NSXMLNode, NSXMLObjectStore2;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {

	NSXMLNode* _externalData;
	NSXMLObjectStore2* _store;

}
-(id)store;
-(id)externalData;
-(id)initWithData:(id)arg1 objectID:(id)arg2 ;
-(void)setStore:(id)arg1 ;
-(void)_fillPropertyCache;
-(id)oidReferenceData;
-(void)dealloc;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(id)entityName;
-(id)entity;
-(void)resetCaches;
@end

