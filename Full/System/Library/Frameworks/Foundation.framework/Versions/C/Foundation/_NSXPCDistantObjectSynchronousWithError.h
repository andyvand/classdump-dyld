/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/_NSXPCDistantObjectWithError.h>

@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {

	double _timeout;

}

@property (assign) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3 error:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)forwardInvocation:(id)arg1 ;
@end

