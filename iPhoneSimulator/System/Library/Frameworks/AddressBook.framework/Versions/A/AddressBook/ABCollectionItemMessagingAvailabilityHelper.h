/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABCollectionItemMessagingAvailabilityHelper : NSObject {

	char _availableForMessaging;
	NSString* _endpoint;

}

@property (getter=isAvailableForMessaging) char availableForMessaging;              //@synthesize availableForMessaging=_availableForMessaging - In the implementation block
@property (copy) NSString * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
-(void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2 ;
-(char)isAvailableForMessaging;
-(void)updateMessagingAvailabilityWithNotification:(id)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
-(void)setAvailableForMessaging:(char)arg1 ;
-(NSString *)endpoint;
-(id)init;
-(void)dealloc;
@end

