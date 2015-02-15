/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSServiceListenerProto.h>

@class NSMutableArray;

@interface NSServiceListener : NSObject <NSServiceListenerProto> {

	NSMutableArray* serviceProviders;

}
-(id)providerRespondingToSelector:(SEL)arg1 ;
-(id)_doInvokeServiceIn:(id)arg1 msg:(id)arg2 pb:(id)arg3 userData:(id)arg4 error:(id*)arg5 unhide:(char)arg6 ;
-(void)addServiceProvider:(id)arg1 ;
-(void)removeServiceProvider:(id)arg1 ;
@end

