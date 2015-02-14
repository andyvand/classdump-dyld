/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteViewServices/NSRemoteServiceMessage.h>

@interface NSRemoteServiceRequest : NSRemoteServiceMessage {

	/*^block*/id _replyHandler;

}

@property (readonly) unsigned long long requestType; 
@property (copy) id replyHandler;                                 //@synthesize replyHandler=_replyHandler - In the implementation block
-(void)setReplyHandler:(id)arg1 ;
-(id)replyHandler;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithType:(unsigned long long)arg1 ;
@end

