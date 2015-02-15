/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSString;

@interface GFNodeManager : NSObject {

	NSString* _namespace;
	opaque_pthread_mutex_t _mutex;
	CFDictionaryRef _registry;
	unsigned long long _infoListSize;
	GFNodeInfo* _infoList;
	void** _unused[4];

}
+(void)lock;
+(void)unlock;
+(void)initialize;
+(id)instantiateNodeWithClassName:(id)arg1 identifier:(id)arg2 ;
+(id)instantiateNodeWithName:(id)arg1 ;
+(void)checkIdentifier:(id)arg1 ;
+(char)trylock;
+(id)managerForNodeNamespace:(id)arg1 ;
-(id)init;
-(id)description;
-(id)instantiateNodeWithName:(id)arg1 ;
-(id)nodeNameWithClassName:(id)arg1 identifier:(id)arg2 ;
-(id)initWithNamespace:(id)arg1 ;
-(void)registerNodeWithClass:(Class)arg1 identifier:(id)arg2 ;
-(void)registerNodeWithName:(id)arg1 constructor:(id)arg2 instantiateSelector:(SEL)arg3 attributesSelector:(SEL)arg4 info:(id)arg5 ;
-(id)_nodeFromArchive:(id)arg1 ;
-(id)_attributesFromArchive:(id)arg1 ;
-(id)nodeNames;
-(id)nodeNamespace;
-(id)nodeAttributesWithName:(id)arg1 ;
-(id)nodeInstanceWithName:(id)arg1 ;
-(void)registerNodeWithClass:(Class)arg1 ;
-(void)registerNode:(id)arg1 withName:(id)arg2 ;
-(void)unregisterNodeWithName:(id)arg1 ;
-(char)isNodeRegisteredWithName:(id)arg1 ;
-(id)nodeNamesContainingAttributes:(id)arg1 ;
-(id)nodeNamesMatchingAttributes:(id)arg1 ;
-(id)nodeNamesExcludingAttributes:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)loadPlugInAtPath:(id)arg1 ;
-(void)loadPlugInsInFolder:(id)arg1 withExtensions:(id)arg2 ;
-(void)loadPlugInsInLibrary:(id)arg1 withExtensions:(id)arg2 ;
@end
