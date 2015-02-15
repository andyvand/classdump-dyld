/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class NSMutableSet, NSString, NSSet;

@interface CalDAVAddCalendarQueueableOperation : CalDAVCalendarQueueableOperation {

	int _state;
	NSMutableSet* _propertiesToSet;
	NSMutableSet* _fallbackProperties;
	NSString* _uri;
	NSString* _inboxURI;
	char _isAutoScheduleSupported;
	char _isEventContainer;
	char _isTaskContainer;

}

@property (retain) NSSet * propertiesToSet;                 //@synthesize propertiesToSet=_propertiesToSet - In the implementation block
@property (retain) NSSet * fallbackProperties;              //@synthesize fallbackProperties=_fallbackProperties - In the implementation block
@property (retain) NSString * uri;                          //@synthesize uri=_uri - In the implementation block
@property (retain) NSString * inboxURI;                     //@synthesize inboxURI=_inboxURI - In the implementation block
+(id)mkcalendarPropertiesWithDisplayName:(id)arg1 color:(id)arg2 symbolicColorName:(id)arg3 order:(unsigned long long)arg4 notes:(id)arg5 timeZone:(id)arg6 shouldSetTransparency:(char)arg7 isAffectingAvailability:(char)arg8 isAutoscheduleSupported:(char)arg9 fallbackProperties:(id)arg10 ;
+(id)generateTimeZoneString:(id)arg1 ;
-(void)dealloc;
-(void)performOperation;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)uri;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 isAffectingAvailability:(char)arg3 isAutoscheduleSupported:(char)arg4 ;
-(NSString *)inboxURI;
-(void)setInboxURI:(NSString *)arg1 ;
-(void)setPropertiesToSet:(NSSet *)arg1 ;
-(void)setFallbackProperties:(NSSet *)arg1 ;
-(NSSet *)propertiesToSet;
-(NSSet *)fallbackProperties;
-(void)performComplete;
-(void)_updateACL;
-(id)_createReadFreeBusyACE;
-(void)_updateFreeBusySet;
@end

