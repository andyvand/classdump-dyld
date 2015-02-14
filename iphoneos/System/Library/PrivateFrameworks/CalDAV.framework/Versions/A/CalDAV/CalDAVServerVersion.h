/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAV-Structs.h>
#import <CalDAV/NSCopying.h>

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {

	char _supportsTimeRangeFilter;
	char _supportsTodoTimeRangeFilter;
	char _supportsTimeRangeFilterWithoutEndDate;
	char _supportsTimeRangeFilterOnInbox;
	char _supportsAutoSchedule;
	char _supportsPrivateComments;
	char _supportsSharing;
	char _supportsSharingNoScheduling;
	char _supportsCalendarProxy;
	char _supportsInboxAvailability;
	char _supportsPrivateEvents;
	char _supportsSubscriptionCalendars;
	char _supportsPrincipalPropertySearch;
	char _supportsExtendedCalendarQuery;
	char _supportsRequestCompression;
	char _supportsManagedAttachments;
	char _supportsCheckForValidEmail;
	char _supportsChecksumming;
	char _supportsCalendarHomeSync;
	char _supportsCalendarNoTimezone;
	double _version;
	NSString* _supportedCalendarComponentSets;
	NSSet* _complianceClasses;
	NSString* _serverHeader;

}

@property (nonatomic,readonly) NSString * type; 
@property (assign,nonatomic) double version;                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilter;                            //@synthesize supportsTimeRangeFilter=_supportsTimeRangeFilter - In the implementation block
@property (assign,nonatomic) char supportsTodoTimeRangeFilter;                        //@synthesize supportsTodoTimeRangeFilter=_supportsTodoTimeRangeFilter - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilterWithoutEndDate;              //@synthesize supportsTimeRangeFilterWithoutEndDate=_supportsTimeRangeFilterWithoutEndDate - In the implementation block
@property (assign,nonatomic) char supportsTimeRangeFilterOnInbox;                     //@synthesize supportsTimeRangeFilterOnInbox=_supportsTimeRangeFilterOnInbox - In the implementation block
@property (assign,nonatomic) char supportsAutoSchedule;                               //@synthesize supportsAutoSchedule=_supportsAutoSchedule - In the implementation block
@property (assign,nonatomic) char supportsPrivateComments;                            //@synthesize supportsPrivateComments=_supportsPrivateComments - In the implementation block
@property (assign,nonatomic) char supportsSharing;                                    //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) char supportsSharingNoScheduling;                        //@synthesize supportsSharingNoScheduling=_supportsSharingNoScheduling - In the implementation block
@property (assign,nonatomic) char supportsCalendarProxy;                              //@synthesize supportsCalendarProxy=_supportsCalendarProxy - In the implementation block
@property (assign,nonatomic) char supportsInboxAvailability;                          //@synthesize supportsInboxAvailability=_supportsInboxAvailability - In the implementation block
@property (assign,nonatomic) char supportsPrivateEvents;                              //@synthesize supportsPrivateEvents=_supportsPrivateEvents - In the implementation block
@property (assign,nonatomic) char supportsSubscriptionCalendars;                      //@synthesize supportsSubscriptionCalendars=_supportsSubscriptionCalendars - In the implementation block
@property (assign,nonatomic) char supportsPrincipalPropertySearch;                    //@synthesize supportsPrincipalPropertySearch=_supportsPrincipalPropertySearch - In the implementation block
@property (assign,nonatomic) char supportsExtendedCalendarQuery;                      //@synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery - In the implementation block
@property (assign,nonatomic) char supportsRequestCompression;                         //@synthesize supportsRequestCompression=_supportsRequestCompression - In the implementation block
@property (assign,nonatomic) char supportsManagedAttachments;                         //@synthesize supportsManagedAttachments=_supportsManagedAttachments - In the implementation block
@property (assign,nonatomic) char supportsCheckForValidEmail;                         //@synthesize supportsCheckForValidEmail=_supportsCheckForValidEmail - In the implementation block
@property (assign,nonatomic) char supportsChecksumming;                               //@synthesize supportsChecksumming=_supportsChecksumming - In the implementation block
@property (assign,nonatomic) char supportsCalendarHomeSync;                           //@synthesize supportsCalendarHomeSync=_supportsCalendarHomeSync - In the implementation block
@property (nonatomic,copy) NSString * supportedCalendarComponentSets;                 //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (assign,nonatomic) char supportsCalendarNoTimezone;                         //@synthesize supportsCalendarNoTimezone=_supportsCalendarNoTimezone - In the implementation block
@property (nonatomic,retain) NSSet * complianceClasses;                               //@synthesize complianceClasses=_complianceClasses - In the implementation block
@property (nonatomic,copy) NSString * serverHeader;                                   //@synthesize serverHeader=_serverHeader - In the implementation block
+(id)versionWithHTTPHeaders:(id)arg1 ;
+(id)_prototypeMatchingServerHeaders:(id)arg1 ;
+(id)versionWithPropertyValue:(id)arg1 ;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(char)supportsPrincipalPropertySearch;
-(char)supportsExtendedCalendarQuery;
-(void)setSupportsExtendedCalendarQuery:(char)arg1 ;
-(char)supportsTimeRangeFilter;
-(char)supportsTimeRangeFilterOnInbox;
-(char)supportsTimeRangeFilterWithoutEndDate;
-(void)setServerHeader:(NSString *)arg1 ;
-(id)_propertiesToComplianceClasses;
-(id)_additionalFlagKeys;
-(void)setComplianceClasses:(NSSet *)arg1 ;
-(void)setSupportsInboxAvailability:(char)arg1 ;
-(void)_setPropertiesFromComplianceClasses:(id)arg1 ;
-(void)setSupportsRequestCompression:(char)arg1 ;
-(NSString *)serverHeader;
-(NSSet *)complianceClasses;
-(id)_allFlagKeys;
-(void)setSupportsTimeRangeFilter:(char)arg1 ;
-(char)supportsTodoTimeRangeFilter;
-(void)setSupportsTodoTimeRangeFilter:(char)arg1 ;
-(void)setSupportsTimeRangeFilterWithoutEndDate:(char)arg1 ;
-(void)setSupportsTimeRangeFilterOnInbox:(char)arg1 ;
-(void)setSupportsAutoSchedule:(char)arg1 ;
-(void)setSupportsPrivateComments:(char)arg1 ;
-(void)setSupportsSharing:(char)arg1 ;
-(void)setSupportsSharingNoScheduling:(char)arg1 ;
-(void)setSupportsCalendarProxy:(char)arg1 ;
-(void)setSupportsPrivateEvents:(char)arg1 ;
-(void)setSupportsPrincipalPropertySearch:(char)arg1 ;
-(void)setSupportsManagedAttachments:(char)arg1 ;
-(void)setSupportsCheckForValidEmail:(char)arg1 ;
-(void)setSupportsChecksumming:(char)arg1 ;
-(void)setSupportsCalendarNoTimezone:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setVersion:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(double)version;
-(id)propertyValue;
-(char)supportsSharing;
-(char)supportsSubscriptionCalendars;
-(char)supportsCalendarHomeSync;
-(char)supportsManagedAttachments;
-(char)supportsPrivateEvents;
-(void)setSupportsSubscriptionCalendars:(char)arg1 ;
-(void)setSupportsCalendarHomeSync:(char)arg1 ;
-(char)supportsInboxAvailability;
-(char)supportsCalendarProxy;
-(char)supportsPrivateComments;
-(char)supportsAutoSchedule;
-(char)supportsSharingNoScheduling;
-(char)supportsRequestCompression;
-(char)supportsCheckForValidEmail;
-(char)supportsChecksumming;
-(char)supportsCalendarNoTimezone;
-(NSString *)supportedCalendarComponentSets;
@end

