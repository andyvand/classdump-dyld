/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedAccount.h>

@class NSURL;

@interface CalManagedExchangeAccount : CalManagedAccount

@property (retain) NSURL * externalURL; 
@property (assign) char omitSyncRecord; 
@property (assign) char useExternalURL; 
+(id)entityName;
+(id)fetchRequestForExistingURL:(id)arg1 externalURL:(id)arg2 login:(id)arg3 context:(id)arg4 ;
-(id)password;
-(id)protectionSpace;
-(void)setPassword:(id)arg1 ;
-(id)externalWebServicesURL;
-(id)internalWebServicesURL;
-(id)lookupAccountPluginID;
-(id)fetchRequestForInsertValidation;
-(void)awakeFromInsert;
-(id)protectionSpaceForUseExternalURL:(char)arg1 ;
-(id)existingCredential;
-(id)existingCredentialForUseExternalURL:(char)arg1 ;
-(void)setPassword:(id)arg1 persistence:(unsigned long long)arg2 ;
-(id)_createWebServicesURL:(id)arg1 ;
-(NSURL *)externalURL;
-(void)setExternalURL:(NSURL *)arg1 ;
-(char)addDelegate:(id)arg1 withError:(id*)arg2 ;
-(id)getGrantedDelegateListWithError:(id*)arg1 ;
-(char)addGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
-(char)removeGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
-(char)toggleAllowWriteForGrantedDelegate:(id)arg1 withError:(id*)arg2 ;
@end

