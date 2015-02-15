/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSURL, NSData;

@interface QCSCN_SceneSource : NSObject {

	id _reserved;

}

@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
+(id)sceneSourceWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneSourceWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneTypes;
+(id)sceneFileTypes;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(NSData *)data;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)sceneWithOptions:(id)arg1 error:(id*)arg2 ;
-(_C3DScene*)_createSceneRefWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(long long)sceneCount;
-(id)_sceneWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)sceneWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2 ;
-(id)identifiersOfEntriesWithClass:(Class)arg1 ;
-(long long)countOfScenes;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 ;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 ;
-(C3DSceneSourceRef)sceneSourceRef;
-(id)entryWithID:(id)arg1 withClass:(Class)arg2 ;
-(id)IDsOfEntriesWithClass:(Class)arg1 ;
-(long long)sourceStatus;
-(char)canExportToColladaWithNoDataLoss;
-(id)performConsistencyCheck;
@end
