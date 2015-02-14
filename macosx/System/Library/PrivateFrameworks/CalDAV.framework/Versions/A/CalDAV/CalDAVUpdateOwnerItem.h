/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {

	ICSDateValue* _dtstamp;
	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _address;
	NSString* _emailAddress;

}

@property (nonatomic,retain) ICSDateValue * dtstamp;               //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(void)setAddressItem:(id)arg1 ;
-(void)setEmailAddressItem:(id)arg1 ;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)emailAddress;
-(ICSDateValue *)dtstamp;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(id)copyParseRules;
@end

