/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSURL, NSMutableArray, AVAssetCollectionInspector, NSString;

@interface AVAssetCollectionInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	NSURL* _URL;
	char _loadingCanceled;
	dispatch_queue_sRef loadingQ;
	NSMutableArray* loadingBatches;
	OpaqueFigAssetCollectionRef _optionalFigCollection;
	int _figCollectionCreateErr;
	AVAssetCollectionInspector* _optionalInspector;
	dispatch_queue_sRef completionHandlerQ;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) unsigned long long assetCount; 
-(id)inspector;
-(void)cancelLoading;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_mapFigErrorCodeToNSError:(int)arg1 ;
-(id)_loadingBatches;
-(id)initWithFigCollectionAtURL:(id)arg1 ;
-(unsigned long long)assetCount;
-(OpaqueFigAssetRef)copyFigAssetAtIndex:(unsigned long long)arg1 options:(id)arg2 figErr:(int*)arg3 ;
-(OpaqueFigAssetRef)copyFigAssetWithURL:(id)arg1 options:(id)arg2 figErr:(int*)arg3 ;
-(void)_cleanUpUncollectables;
-(OpaqueFigAssetCollectionRef)_loadingQOnly_figCollection;
-(id)_figPropertiesByKey;
-(long long)_loadStatusForProperty:(id)arg1 returningError:(int*)arg2 ;
-(dispatch_queue_sRef)_completionHandlerQ;
-(dispatch_queue_sRef)_loadingQ;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
@end

