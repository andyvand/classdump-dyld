/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCISPAccountSettingsManager.h>

@class NSCache, NSString;

@interface _MCISPOnlineAccountSettingsManager : MCISPAccountSettingsManager {

	NSCache* _fetchedISPPlistsByDomain;
	NSString* _ispAccountsXQuery;

}

@property (nonatomic,copy,readonly) NSString * ispAccountsXQuery;              //@synthesize ispAccountsXQuery=_ispAccountsXQuery - In the implementation block
-(id)_persistanceFolderName;
-(char)_shouldVerifyLoadedISPPlist;
-(id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(char)arg2 ;
-(id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(char)arg2 ;
-(void)emptyCache;
-(id)_fetchISPDataForDomain:(id)arg1 ;
-(id)_ispPlistFromXMLDocument:(id)arg1 ;
-(NSString *)ispAccountsXQuery;
-(void)_finalizeISPAccountsSettings:(id)arg1 ;
-(id)_ispPlistForDomain:(id)arg1 ;
-(id)init;
@end

