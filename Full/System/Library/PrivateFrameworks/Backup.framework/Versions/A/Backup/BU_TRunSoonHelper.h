/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Backup/Backup-Structs.h>
@interface BU_TRunSoonHelper : NSObject {

	unsigned long long _owningTargetID;
	function<void ()>* _functor;
	int _dispatchType;

}
+(void)postFunctor:(const function<void ()>*)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3 ;
+(void)initialize;
-(id)initWithFunctor:(const function<void ()>*)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3 ;
-(void)post;
-(void)repost;
-(void)dispatch;
-(id)runLoopModes;
@end

