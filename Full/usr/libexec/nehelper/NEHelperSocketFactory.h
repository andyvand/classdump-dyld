/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nehelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nehelper/NEHelperDelegate.h>

@interface NEHelperSocketFactory : NSObject <NEHelperDelegate> {

	char _privileged;

}

@property (readonly) char privileged;              //@synthesize privileged=_privileged - In the implementation block
-(char)privileged;
-(void)handleMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

