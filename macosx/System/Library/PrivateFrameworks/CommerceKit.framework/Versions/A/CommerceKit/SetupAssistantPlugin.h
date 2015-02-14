/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/MBSetupAssistantDelegateConfiguration.h>

@class ISStoreClient, NSString;

@interface SetupAssistantPlugin : NSObject <MBSetupAssistantDelegateConfiguration> {

	ISStoreClient* _storeClient;
	NSString* _appName;
	NSString* _appVersion;
	NSString* _appPreferencesDomain;
	NSString* _listenerName;

}

@property (retain,readonly) NSString * listenerName;              //@synthesize listenerName=_listenerName - In the implementation block
-(id)delegateIdentifier;
-(id)delegateSetupRequest;
-(void)completeSetupWithResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)delegateAccountInformation;
-(void)terminateSetupCompletion;
-(id)storeUserAgentString;
-(NSString *)listenerName;
-(id)initWithStoreClient:(id)arg1 ;
@end

