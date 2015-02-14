/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WhitePages/WhitePages-Structs.h>
@class NSString;

@interface ReachabilityWatcher : NSObject {

	NSString* _host;
	SCNetworkReachabilityRef _ref;
	unsigned _flags;
	char _watching;
	id _target;
	SEL _action;
	char _verboseMode;

}
-(void)_pollFlags;
-(void)_logIfVerbose:(id)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(void)setVerboseMode:(char)arg1 ;
-(char)isReachableWithDial:(char)arg1 ;
-(char)setTarget:(id)arg1 action:(SEL)arg2 error:(out id*)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)host;
-(void)_setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

