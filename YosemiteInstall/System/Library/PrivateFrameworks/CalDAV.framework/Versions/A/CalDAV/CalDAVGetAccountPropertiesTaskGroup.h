/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet, NSURL, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _calendarHomes;
	NSSet* _userAddresses;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropboxURL;
	NSURL* _notificationURL;
	NSURL* _delegatePrincipalURL;
	NSURL* _updatedPrincipalURL;
	char _supportsCalendarUserSearch;
	CalDAVServerVersion* _serverVersion;

}

@property (nonatomic,retain) NSURL * delegatePrincipalURL;                       //@synthesize delegatePrincipalURL=_delegatePrincipalURL - In the implementation block
@property (nonatomic,readonly) NSSet * calendarHomes;                            //@synthesize calendarHomes=_calendarHomes - In the implementation block
@property (nonatomic,readonly) NSSet * userAddresses;                            //@synthesize userAddresses=_userAddresses - In the implementation block
@property (nonatomic,readonly) NSURL * inboxURL;                                 //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * outboxURL;                                //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * dropboxURL;                               //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * notificationURL;                          //@synthesize notificationURL=_notificationURL - In the implementation block
@property (nonatomic,readonly) NSURL * updatedPrincipalURL;                      //@synthesize updatedPrincipalURL=_updatedPrincipalURL - In the implementation block
@property (nonatomic,readonly) CalDAVServerVersion * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,readonly) char supportsCalendarUserSearch;                  //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
-(NSURL *)delegatePrincipalURL;
-(void)dealloc;
-(id)description;
-(void)startTaskGroup;
-(NSSet *)calendarHomes;
-(NSURL *)updatedPrincipalURL;
-(char)supportsCalendarUserSearch;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(NSURL *)dropboxURL;
-(NSURL *)notificationURL;
-(CalDAVServerVersion *)serverVersion;
-(NSSet *)userAddresses;
-(void)setDelegatePrincipalURL:(NSURL *)arg1 ;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(char)forceOptionsRequest;
-(void)processPrincipalHeaders:(id)arg1 ;
@end

