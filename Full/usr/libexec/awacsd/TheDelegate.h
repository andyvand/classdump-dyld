/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/awacsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <awacsd/awacsd-Structs.h>
#import <awacsd/APSConnectionDelegate.h>

@class NSString;

@interface TheDelegate : NSObject <APSConnectionDelegate> {

	Pusher* p;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPusher:(Pusher*)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end
