/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _canBePublished;
	CoreDAVItemWithNoChildren* _canBeShared;
	CoreDAVItemWithNoChildren* _isMarkedUndeletable;
	CoreDAVItemWithNoChildren* _isMarkedImmutableSharees;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBePublished;                        //@synthesize canBePublished=_canBePublished - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBeShared;                           //@synthesize canBeShared=_canBeShared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedUndeletable;                   //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedImmutableSharees;              //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
-(CoreDAVItemWithNoChildren *)canBeShared;
-(void)setCanBeShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CoreDAVItemWithNoChildren *)isMarkedImmutableSharees;
-(CoreDAVItemWithNoChildren *)canBePublished;
-(CoreDAVItemWithNoChildren *)isMarkedUndeletable;
-(void)setCanBePublished:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setIsMarkedUndeletable:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedImmutableSharees:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
@end
