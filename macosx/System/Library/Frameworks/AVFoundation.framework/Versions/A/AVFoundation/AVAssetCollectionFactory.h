/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableDictionary;

@interface AVAssetCollectionFactory : NSObject {

	dispatch_queue_sRef _collectionsQ;
	NSMutableDictionary* _collectionsByURLString;

}
+(id)sharedAVAssetCollectionFactory;
-(void)forgetCollectionWithURL:(id)arg1 ;
-(id)collectionWithURL:(id)arg1 options:(id)arg2 ;
-(void)_cleanUpUncollectables;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

