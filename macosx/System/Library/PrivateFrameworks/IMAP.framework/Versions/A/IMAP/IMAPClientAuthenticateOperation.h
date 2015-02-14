/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPSingleClientOperation.h>

@class MCSaslClient;

@interface IMAPClientAuthenticateOperation : IMAPSingleClientOperation {

	char _includeInitialResponse;
	MCSaslClient* _saslClient;

}

@property (nonatomic,readonly) MCSaslClient * saslClient;              //@synthesize saslClient=_saslClient - In the implementation block
@property (assign) char includeInitialResponse;                        //@synthesize includeInitialResponse=_includeInitialResponse - In the implementation block
-(MCSaslClient *)saslClient;
-(id)activityString;
-(id)init;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(char)includeInitialResponse;
-(id)initWithSaslClient:(id)arg1 ;
-(id)debugCommandString;
-(char)handlesAllUntaggedResponses;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(void)setIncludeInitialResponse:(char)arg1 ;
@end

