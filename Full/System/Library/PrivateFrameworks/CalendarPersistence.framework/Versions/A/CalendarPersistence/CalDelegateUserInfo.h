/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface CalDelegateUserInfo : NSObject <NSSecureCoding> {

	NSString* _uri;
	NSString* _commonName;
	NSString* _displayString;
	NSString* _preferredUserAddress;
	NSManagedObjectID* _managedObjectID;
	int _calendarsPermission;
	int _tasksPermission;
	char _alarmsEnabled;

}

@property (retain) NSString * uri;                                   //@synthesize uri=_uri - In the implementation block
@property (retain) NSString * commonName;                            //@synthesize commonName=_commonName - In the implementation block
@property (retain) NSString * displayString;                         //@synthesize displayString=_displayString - In the implementation block
@property (retain) NSString * preferredUserAddress;                  //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (retain) NSManagedObjectID * managedObjectID;              //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (assign) int calendarsPermission;                          //@synthesize calendarsPermission=_calendarsPermission - In the implementation block
@property (assign) int tasksPermission;                              //@synthesize tasksPermission=_tasksPermission - In the implementation block
@property (assign) char alarmsEnabled;                               //@synthesize alarmsEnabled=_alarmsEnabled - In the implementation block
+(char)supportsSecureCoding;
+(id)infoWithCalDAVDetails:(id)arg1 allowWrite:(char)arg2 ;
+(id)delegatesForCalManagedCalDAVPrincipal:(id)arg1 ;
+(void)makeDisplayNamesUnique:(id)arg1 ;
+(id)matchingDelegate:(id)arg1 inArray:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSManagedObjectID *)managedObjectID;
-(NSString *)commonName;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(void)setCommonName:(NSString *)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(void)setCalendarsPermission:(int)arg1 ;
-(void)setTasksPermission:(int)arg1 ;
-(void)setAllowWrite:(char)arg1 ;
-(void)setPreferredUserAddress:(NSString *)arg1 ;
-(void)_setValuesWithCalManagedPrincipal:(id)arg1 ;
-(id)initWithURI:(id)arg1 commonName:(id)arg2 calendarsPermission:(int)arg3 tasksPermission:(int)arg4 ;
-(id)initWithURI:(id)arg1 commonName:(id)arg2 permission:(int)arg3 ;
-(id)initWithURI:(id)arg1 commonName:(id)arg2 allowWrite:(char)arg3 ;
-(id)initWithCalManagedCalDAVPrincipal:(id)arg1 ;
-(NSString *)preferredUserAddress;
-(NSString *)uri;
-(id)initWithCalManagedExchangePrincipal:(id)arg1 ;
-(char)allowWrite;
-(int)calendarsPermission;
-(int)tasksPermission;
-(char)alarmsEnabled;
-(void)setAlarmsEnabled:(char)arg1 ;
@end

