/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class NSString, NSURL, CoreDAVItem;

@interface CalDAVRemovePropertyQueueableOperation : CalDAVCalendarQueueableOperation {

	NSString* _property;
	NSURL* _url;
	CoreDAVItem* _propertyToRemove;

}

@property (retain) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (retain) CoreDAVItem * propertyToRemove;              //@synthesize propertyToRemove=_propertyToRemove - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)performOperation;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 property:(id)arg4 ;
-(void)setPropertyToRemove:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)propertyToRemove;
@end

