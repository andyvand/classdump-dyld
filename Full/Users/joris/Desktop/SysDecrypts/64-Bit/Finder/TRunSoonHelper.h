/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Finder/Finder-Structs.h>
@interface TRunSoonHelper : NSObject {

	unsigned long long _owningTargetID;
	function<void ()>* _functor;
	int _dispatchType;

}
+(void)postFunctor:(const function<void ()>*)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3 ;
-(id)initWithFunctor:(const function<void ()>*)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3 ;
-(void)post;
-(void)repost;
-(void)dispatch;
-(id)runLoopModes;
@end
