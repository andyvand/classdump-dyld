/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol XPCServiceConnectionDelegate <NSObject>
@required
-(void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned)arg3;
-(void)XPCServiceConnectionDidDisconnect:(id)arg1;
@end
