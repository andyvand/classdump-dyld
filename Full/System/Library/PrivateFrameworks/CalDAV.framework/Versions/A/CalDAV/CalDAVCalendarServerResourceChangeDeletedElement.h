/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement {

	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;
	char _hadMoreInstances;

}

@property (nonatomic,retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign,nonatomic) char hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(void)setComponentType:(NSString *)arg1 ;
-(void)setNextInstance:(ICSDateValue *)arg1 ;
-(void)setHadMoreInstances:(char)arg1 ;
-(NSString *)componentType;
-(ICSDateValue *)nextInstance;
-(char)hadMoreInstances;
-(void)setDeletedDetails:(id)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)copyParseRules;
@end

