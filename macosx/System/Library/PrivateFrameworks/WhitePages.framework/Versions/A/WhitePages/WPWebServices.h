/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WhitePages/WPODRecord.h>

@class NSMutableDictionary, NSString;

@interface WPWebServices : WPODRecord {

	NSMutableDictionary* _info;
	NSString* _batchModGUID;

}
+(id)webServicesWithGUID:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4 ;
+(id)webServicesWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)allWebServicesRelatedToThisMac;
+(id)allWebServicesRecordsWithSession:(id)arg1 ;
+(id)allWebServicesRecordsExcludingLocalNodes:(char)arg1 withSession:(id)arg2 ;
+(id)webServicesRecordsForServiceOfType:(id)arg1 withSession:(id)arg2 ;
+(id)webServicesWithName:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)allWebServicesRecords;
+(id)allWebServicesRecordsExcludingLocalNodes:(char)arg1 ;
+(id)webServicesRecordsForServiceOfType:(id)arg1 ;
+(id)webServicesWithGUID:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 ;
+(id)webServicesWithName:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 ;
+(id)webServicesWithName:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4 ;
+(id)webServicesWithIPAddress:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 ;
+(id)webServicesWithIPAddress:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4 ;
+(id)defaultWebServiceWithSession:(id)arg1 ;
+(id)createServicesInformationRecordInLocalNodeWithSession:(id)arg1 ;
+(id)servicesInformationRecordFromChoices:(id)arg1 withSession:(id)arg2 ;
+(id)allWebServicesRelatedToThisMacWithSession:(id)arg1 ;
+(id)webServicesWithODRecord:(id)arg1 session:(id)arg2 ;
+(id)principalURIsForCalendarUserAddresses:(id)arg1 webServicesRecordGUID:(id)arg2 virtualHostKey:(id)arg3 session:(id)arg4 error:(out id*)arg5 ;
+(id)principalURIsForCalendarHomeURI:(id)arg1 webServicesRecordGUID:(id)arg2 virtualHostKey:(id)arg3 session:(id)arg4 error:(out id*)arg5 ;
+(id)webServicesVirtualHostInfoSupportingServiceType:(id)arg1 checkAccessForRecord:(id)arg2 withSession:(id)arg3 ;
+(id)webServicesVirtualHostInfoSupportingServiceType:(id)arg1 checkAccessForRecord:(id)arg2 withSession:(id)arg3 includeAllVirtualHosts:(char)arg4 ;
+(void)removeWorkgroupServerChildrenFromWebServicesList:(id)arg1 session:(id)arg2 ;
+(void)selectVirtualHosts:(id)arg1 supportingServiceType:(id)arg2 checkAccessForRecord:(id)arg3 savingConflicts:(id)arg4 savingLevels:(id)arg5 ;
+(void)resolveVirtualHostNameConflictsUsingList:(id)arg1 usingLevelInfo:(id)arg2 ;
+(id)stringForVirtualHost:(id)arg1 level:(unsigned long long)arg2 ;
+(id)basicStringForVirtualHost:(id)arg1 level:(unsigned long long)arg2 ;
+(id)wikiStringForVirtualHost:(id)arg1 level:(unsigned long long)arg2 ;
+(id)nameFromSystemConfiguration:(id)arg1 ;
+(id)webServicesWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)webServicesWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)webServicesWithIPAddress:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)webServicesWithIPAddress:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)defaultWebService;
+(id)principalURIsForCalendarUserAddresses:(id)arg1 webServicesRecordGUID:(id)arg2 virtualHostKey:(id)arg3 error:(out id*)arg4 ;
+(id)principalURIsForCalendarHomeURI:(id)arg1 webServicesRecordGUID:(id)arg2 virtualHostKey:(id)arg3 error:(out id*)arg4 ;
+(id)webServicesVirtualHostInfoSupportingServiceType:(id)arg1 checkAccessForRecord:(id)arg2 ;
+(id)hostNameFromSystemConfiguration;
+(id)computerNameFromSystemConfiguration;
-(id)recordType;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(id)initRecordWithCachedAttributes:(id)arg1 session:(id)arg2 ;
-(id)webServicesVirtualHostWithKey:(id)arg1 ;
-(id)webServicesVirtualHosts;
-(id)initWebServicesWithODRecord:(id)arg1 session:(id)arg2 ;
-(id)webServicesVirtualHostWithName:(id)arg1 ;
-(id)mainMACAddress;
-(id)supervisorLabel;
-(id)directReportsLabel;
-(id)servicesInfo;
-(id)allMACAddresses;
-(id)IPAddressesOfThisMac;
-(id)hostNameOrIPAddresses;
-(void)setIPAddressesInPlist:(id)arg1 ;
-(void)setWebServicesVirtualHosts:(id)arg1 error:(out id*)arg2 ;
-(void)setBatchTimestamp:(id)arg1 ;
-(char)syncWebServicesRecordsWithWebServicesRecord:(id)arg1 withSession:(id)arg2 ;
-(id)modificationStamp;
-(char)syncWebServicesRecordsWithSession:(id)arg1 ;
-(char)updateWebServices:(id)arg1 withVirtualHosts:(id)arg2 withSession:(id)arg3 ;
-(id)batchTimestamp;
-(void)setModificationStamp:(id)arg1 ;
-(void)saveHostNameOfThisMac:(id)arg1 ;
-(void)saveIPAddressesOfThisMac;
-(id)webServicesVirtualHostSupportingServiceType:(id)arg1 ;
-(void)setServicesInfo:(id)arg1 error:(out id*)arg2 ;
-(void)setOrganizationSupervisorLabel:(id)arg1 ;
-(void)setOrganizationDirectReportsLabel:(id)arg1 ;
-(id)IPAddresses;
-(id)hostNameOfThisMac;
-(id)webServicesVirtualHostKeys;
-(id)webServicesVirtualHostWithDescription:(id)arg1 ;
-(char)updateWithError:(out id*)arg1 ;
-(char)syncWebServicesRecords;
-(void)dealloc;
-(id)description;
@end

