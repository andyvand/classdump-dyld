/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSAccounts.framework/Versions/A/AOSAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSAccounts/AOSAccounts-Structs.h>
@class NSArray, NSDictionary;

@interface MMDelegatePluginManager : NSObject {

	char _done;
	char _succeeded;
	NSArray* _mbSetupPlugins;
	NSDictionary* _delegatesResponseDict;

}

@property (readonly) NSDictionary * delegatesResponseDict;              //@synthesize delegatesResponseDict=_delegatesResponseDict - In the implementation block
+(id)shared;
-(void)invokeDelegatesWithAuthenticationResponse:(id)arg1 account:(id)arg2 withDispatchGroup:(dispatch_group_sRef)arg3 completion:(/*^block*/id)arg4 ;
-(id)allPlugins;
-(id)getMessagingAliasesFromDelegateResponse:(id)arg1 andResponse:(id)arg2 ;
-(id)collectAccountInformationFromDelegates;
-(id)readDelegatesRequest;
-(NSDictionary *)delegatesResponseDict;
-(id)init;
-(void)dealloc;
@end

