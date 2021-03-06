/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedAccount.h>

@class NSString;

@interface CalManagedCalDAVAccount : CalManagedAccount

@property (assign) char isAutoDiscovery; 
@property (assign) char useKerberos; 
@property (retain) NSString * webServicesRecordGUID; 
@property (retain) NSString * collectionSetName; 
+(id)entityName;
+(char)accountExistsWithHost:(id)arg1 andPrincipalPath:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)lookupAccountPluginID;
-(id)fetchRequestForInsertValidation;
-(char)fetchRequestForInsertValidationReturnsAccounts;
-(void)didSave;
-(void)clearETags;
-(char)addDelegate:(id)arg1 withError:(id*)arg2 ;
-(id)getGrantedDelegateListWithError:(id*)arg1 ;
-(char)addGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
-(char)removeGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
-(char)toggleAllowWriteForGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
-(id)_getGrantedDelegateListWithError:(id*)arg1 allowExpand:(char)arg2 ;
-(char)_updateGrantedDelegatesListWithAdd:(id)arg1 remove:(id)arg2 withError:(id*)arg3 ;
@end

