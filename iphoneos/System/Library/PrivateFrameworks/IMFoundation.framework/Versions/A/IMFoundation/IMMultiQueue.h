/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;

}
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(void)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(void)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(void)dealloc;
@end

