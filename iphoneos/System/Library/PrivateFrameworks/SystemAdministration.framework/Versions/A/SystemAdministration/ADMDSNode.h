/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@class NSString, AdminDirectoryService;

@interface ADMDSNode : NSObject {

	unsigned mNodeReference;
	NSString* mNodeName;
	AdminDirectoryService* mDirectoryService;
	dispatch_semaphore_sRef mOpenCloseSemaphore;

}
+(id)openDefaultLocalNode;
+(char)nodeIsDefaultLocalNode:(unsigned)arg1 ;
+(void)closeDefaultLocalNode;
+(id)openProxyNodeAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4 ;
+(char)isConnectedToNetwork;
+(id)nodeWithName:(id)arg1 ;
+(id)openSearchNode;
-(id)findRecordsByID:(long long)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_Ad7*)arg3 ;
-(id)findRecordsWithName:(SCD_Struct_AD2*)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_AD2*)arg3 ;
-(unsigned)dirNodeReference;
-(char)isNetInfoNode;
-(long long)setPassword:(id)arg1 oldPassword:(id)arg2 forUser:(id)arg3 ;
-(int)verifyUserName:(id)arg1 password:(id)arg2 ;
-(int)authenticateName:(id)arg1 withPassword:(id)arg2 ;
-(long long)setPasswordAsRoot:(id)arg1 forUser:(id)arg2 ;
-(char)setHashedPassword:(id)arg1 forUser:(id)arg2 ;
-(id)findRecordByID:(long long)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_Ad7*)arg3 ;
-(id)findRecordWithName:(SCD_Struct_AD2*)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_AD2*)arg3 ;
-(id)initWithNodeName:(id)arg1 ;
-(void)setDirectoryService:(id)arg1 ;
-(id)_recordsFromBuffer:(SCD_Struct_Ad7*)arg1 count:(unsigned)arg2 ;
-(int)_authenticateNodeWithName:(id)arg1 password:(id)arg2 oldPassword:(id)arg3 data:(id)arg4 method:(const char*)arg5 doAuthentication:(char)arg6 ;
-(id)_findUsersWithFullName:(SCD_Struct_Ad7*)arg1 attribute:(SCD_Struct_AD2*)arg2 expectedCount:(unsigned)arg3 ;
-(id)_findRecordsWithName:(SCD_Struct_AD2*)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_AD2*)arg3 expectedCount:(unsigned)arg4 ;
-(id)_findRecordsByID:(long long)arg1 type:(SCD_Struct_AD2*)arg2 attribute:(SCD_Struct_Ad7*)arg3 expectedCount:(unsigned)arg4 ;
-(char)authenticateNodeWithAuthorization:(id)arg1 ;
-(char)setPasswordScheme:(const char*)arg1 forUser:(id)arg2 password:(id)arg3 ;
-(id)hashedPasswordForUser:(id)arg1 ;
-(id)findUsersWithFullName:(SCD_Struct_Ad7*)arg1 attribute:(SCD_Struct_AD2*)arg2 ;
-(id)findUserWithFullName:(SCD_Struct_Ad7*)arg1 attribute:(SCD_Struct_AD2*)arg2 ;
-(id)directoryService;
-(void)deauthenticate;
-(id)nodeName;
-(void)finalize;
-(void)dealloc;
-(void)close;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(char)open;
-(char)isOpen;
@end

