/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SHKRecentServiceManager : NSObject
+(void)addRecentServiceToDefaults:(id)arg1 ;
+(id)fetchRecentServicesListFromDefaults;
+(id)listItemFromSharingService:(id)arg1 ;
+(void)saveRecentServicesListToDefaults:(id)arg1 ;
+(id)decoratedTitleForRecentServiceItem:(id)arg1 ;
+(id)recentServicesForAllowedServiceIdentifiers:(id)arg1 serviceWithRecipientsOnly:(char)arg2 ;
+(void)addRecentEmailServiceToDefaultsWithSubject:(id)arg1 recipients:(id)arg2 ;
@end
