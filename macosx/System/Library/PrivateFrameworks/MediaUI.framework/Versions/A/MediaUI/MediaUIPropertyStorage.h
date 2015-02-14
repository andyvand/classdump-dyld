/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <MediaUI/NSCopying.h>

@interface MediaUIPropertyStorage : NSObject <NSCopying> {

	dispatch_queue_sRef _queue;
	id _backing;
	unsigned _flag : 1;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
-(void)beginGroupingValueChanges;
-(void)finishGroupingValueChanges;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

